/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2014 Imagination Technologies
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; version 2 of
 * the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston,
 * MA 02110-1301 USA
 */

#include <arch/hlt.h>
#include <arch/stages.h>
#include <cbfs.h>
#include <console/console.h>
#include <soc/ddr_init.h>

void main(void)
{
	const char *stage_name = CONFIG_CBFS_PREFIX "/ramstage";
	void *entry;
	int error;

	console_init();

	error = init_ddr2();

	if (!error) {
		entry = cbfs_load_stage(CBFS_DEFAULT_MEDIA, stage_name);
		if (entry != CBFS_LOAD_ERROR)
			stage_exit(entry);
	}
	hlt();
}
