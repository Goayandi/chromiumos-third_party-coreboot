#!/usr/bin/env python

#
# This file is part of the coreboot project.
#
# Copyright (c) 2015 MediaTek Inc.
# Author: Tristan Shieh <tristan.shieh@mediatek.com>
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; version 2 of the License.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
#

import struct
import sys
import hashlib

def read(path):
	with open(path, "rb") as f:
		return f.read()

def write(path, data):
	with open(path, "wb") as f:
		f.write(data)

def padding(data, size, pattern = '\0'):
	return data + pattern * (size - len(data))

def align(data, size, pattern = '\0'):
	return padding(data, (len(data) + (size - 1)) & ~(size - 1), pattern)

gfh_infos = {
	'mt8135': struct.pack("40I",
	0x014d4d4d, 0x00000038, 0x454c4946, 0x464e495f,
	0x0000004f, 0x00000001, 0x01050001, 0x12000f60,
	0xffffffff, 0x00020000, 0x000000a0, 0x00000020,
	0x000000a0, 0x00000001, 0x014d4d4d, 0x0001000c,
	0x00000001, 0x014d4d4d, 0x0007005c, 0x00000062,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00001388, 0x00000000),

	'mt8173': struct.pack("44I",
	0x014d4d4d, 0x00000038, 0x454c4946, 0x464e495f,
	0x0000004f, 0x00000001, 0x01050001, 0x000C0f50,
	0xffffffff, 0x00020000, 0x000000a8, 0x00000020,
	0x000000B0, 0x00000001, 0x014d4d4d, 0x0001000c,
	0x00000001, 0x034d4d4d, 0x00070064, 0x00001182,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00006400, 0x00001388,
	0x00000000, 0x00000000, 0x00000000, 0x00000000)}

def gen_preloader(chip_ver, data):
	gfh_info = gfh_infos[chip_ver]
	gfh_info = gfh_info[0:32] + struct.pack("1I", len(data)+len(gfh_info)+32) + gfh_info[36:len(gfh_info)]

	gfh_hash = hashlib.sha256(gfh_info + data).digest()

	data = align(gfh_info + data + gfh_hash, 512, '\xff')
	header = (padding(struct.pack("<12sII", "EMMC_BOOT", 1, 512), 512, '\xff') +
		  padding(struct.pack("<8sIIIIIIII", "BRLYT", 1, 2048, 2048 + len(data),
			0x42424242, 0x00010005, 2048, 2048 + len(data), 1) + '\0' * 140, 512, '\xff') +
		  '\0' * 1024)
	return header + data

def main(argv):
	if len(argv) != 4:
		print "Usage: %s chip input_file output_file" % argv[0]
		print "\t chip : mt8135 or mt8173"
		exit(1)
	write(argv[3], gen_preloader(argv[1], read(argv[2])))

if __name__ == "__main__":
	main(sys.argv)
