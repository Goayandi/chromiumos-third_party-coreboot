/*
 * This file is part of the coreboot project.
 *
 * Copyright 2013 Google Inc.
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

#include <arch/cache.h>
#include <arch/lib_helpers.h>
#include <arch/secmon.h>
#include <arch/stages.h>
#include <arch/spintable.h>
#include <arch/transition.h>
#include <cbmem.h>
#include <console/console.h>
#include <string.h>

void jmp_to_elf_entry(void *entry, unsigned long buffer, unsigned long size)
{
	void (*payload_entry)(void *) = entry;

	void *cb_tables = cbmem_find(CBMEM_ID_CBTABLE);
	uint8_t current_el = get_current_el();

	printk(BIOS_SPEW, "entry    = %p\n", entry);

	secmon_run(payload_entry, cb_tables);

	/* Start the other CPUs spinning. */
	spintable_start();

	/* If current EL is not EL3, jump to payload at same EL. */
	if (current_el != EL3) {
		cache_sync_instructions();
		/* Point of no-return */
		payload_entry(cb_tables);
	}

	/* If current EL is EL3, we transition to payload in EL2. */
	struct exc_state exc_state;

	memset(&exc_state, 0, sizeof(exc_state));

	exc_state.elx.spsr = get_eret_el(EL2, SPSR_USE_L);

	cache_sync_instructions();
	transition_with_entry(entry, cb_tables, &exc_state);
}
