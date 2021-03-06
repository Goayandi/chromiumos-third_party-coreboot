/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2013 Google Inc
 * Copyright (C) 2015 Intel Corp.
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

#ifndef _COMMON_STACK_H_
#define _COMMON_STACK_H_

#include <stdint.h>

static inline void *stack_push32(void *stack, uint32_t value)
{
	uint32_t *stack32 = stack;

	stack32 = &stack32[-1];
	*stack32 = value;
	return stack32;
}

#endif /* _COMMON_STACK_H_ */
