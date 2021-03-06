##
## This file is part of the coreboot project.
##
## Copyright (C) 2013 Google Inc.
## Copyright (C) 2015 Intel Corp.
##
## This program is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; version 2 of the License.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program; if not, write to the Free Software
## Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
##

subdirs-y += spd

romstage-$(CONFIG_CHROMEOS) += chromeos.c
romstage-$(CONFIG_ENABLE_BUILTIN_COM1) += com_init.c
romstage-y += fsp.c

ramstage-$(CONFIG_CHROMEOS) += chromeos.c
ramstage-y += ec.c
ramstage-$(CONFIG_CHROMEOS) += gpio.c
ramstage-y += irqroute.c
ramstage-y += w25q64.c

smm-$(CONFIG_HAVE_SMI_HANDLER) += smihandler.c
