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

#include <arch/cache.h>
#include <arch/cpu.h>
#include <arch/exception.h>
#include <arch/io.h>
#include <arch/stages.h>
#include <cbfs.h>
#include <cbmem.h>
#include <console/cbmem_console.h>
#include <console/console.h>
#include <reset.h>
#include <romstage_handoff.h>
#include <vendorcode/google/chromeos/chromeos.h>
#include "sdram_configs.h"
#include <soc/nvidia/tegra/i2c.h>
#include <soc/nvidia/tegra124/cache.h>
#include <soc/nvidia/tegra124/chip.h>
#include <soc/nvidia/tegra124/clk_rst.h>
#include <soc/nvidia/tegra124/early_configs.h>
#include <soc/nvidia/tegra124/power.h>
#include <soc/nvidia/tegra124/sdram.h>
#include <soc/addressmap.h>
#include <soc/clock.h>
#include <soc/display.h>
#include <timestamp.h>

static void __attribute__((noinline)) romstage(void)
{
#if CONFIG_COLLECT_TIMESTAMPS
	uint64_t romstage_start_time = timestamp_get();
#endif

	configure_l2_cache();

	console_init();
	exception_init();

	sdram_init(get_sdram_config());

	/* used for MMU and CBMEM setup, in MB */
	u32 dram_start = (CONFIG_SYS_SDRAM_BASE >> 20);
	u32 dram_end = sdram_max_addressable_mb();	/* plus one... */
	u32 dram_size = dram_end - dram_start;

	mmu_init();
	/* Device memory below DRAM is uncached. */
	mmu_config_range(0, dram_start, DCACHE_OFF);
	/* SRAM is cached. Round the size up to 2MB, the LPAE page size. */
	mmu_config_range(0x40000000 >> 20, 2, DCACHE_WRITEBACK);
	/* DRAM is cached. */
	mmu_config_range(dram_start, dram_size, DCACHE_WRITEBACK);
	/* A window for DMA is uncached. */
	mmu_config_range(CONFIG_DRAM_DMA_START >> 20,
			 CONFIG_DRAM_DMA_SIZE >> 20, DCACHE_OFF);
	/* The space above DRAM is uncached. */
	if (dram_end < 4096)
		mmu_config_range(dram_end, 4096 - dram_end, DCACHE_OFF);
	mmu_disable_range(0, 1);
	dcache_mmu_enable();

	/*
	 * A watchdog reset only resets part of the system so it ends up in
	 * a funny state. If that happens, we need to reset the whole machine.
	 */
	if (power_reset_status() == POWER_RESET_WATCHDOG) {
		printk(BIOS_INFO, "Watchdog reset detected, rebooting.\n");
		hard_reset();
	}

	cbmem_initialize_empty();

	timestamp_init(0);
	timestamp_add(TS_START_ROMSTAGE, romstage_start_time);

	early_mainboard_init();

#if CONFIG_CONSOLE_CBMEM
	cbmemc_reinit();
#endif

	vboot_verify_firmware(romstage_handoff_find_or_add());

	timestamp_add(TS_START_COPYRAM, timestamp_get());
	void *entry = cbfs_load_stage(CBFS_DEFAULT_MEDIA,
				      "fallback/ramstage");
	timestamp_add(TS_END_COPYRAM, timestamp_get());

	stage_exit(entry);
}

/* Stub to force arm_init_caches to the top, before any stack/memory accesses */
void main(void)
{
	asm volatile ("bl arm_init_caches"
		      ::: "r0","r1","r2","r3","r4","r5","ip");
	romstage();
}
