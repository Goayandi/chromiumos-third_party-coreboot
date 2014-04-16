/*
 * This file is part of the coreboot project.
 *
 * Copyright 2014 Google Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */


#include <cbfs.h>  /* This driver serves as a CBFS media source. */

int init_default_cbfs_media(struct cbfs_media *media)
{
	return 0;
}

/*
 * Temporary change to make sure storm code still builds. Will be dropped
 * shortly.
 */
#include <delay.h>  /* This driver serves as a CBFS media source. */
void init_timer(void)
{
}