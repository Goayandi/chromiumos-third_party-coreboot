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

#include <arch/io.h>
#include <cbfs.h>
#include <console/console.h>
#include <soc/addressmap.h>
#include <soc/clock.h>
#include <soc/clk_rst.h>
#include <soc/ccplex.h>
#include <soc/cpu.h>
#include <soc/flow.h>
#include <soc/mc.h>
#include <soc/pmc.h>
#include <soc/power.h>
#include <soc/romstage.h>
#include <string.h>
#include <timer.h>

#define PMC_REGS (void *)(uintptr_t)(TEGRA_PMC_BASE)

static void enable_cpu_clocks(void)
{
	clock_enable(CLK_ENB_CPU, 0, 0, SET_CLK_ENB_CPUG_ENABLE |
		     SET_CLK_ENB_CPULP_ENABLE, 0, 0, 0);
}

static void enable_cpu_power_partitions(void)
{
	/* Bring up fast cluster, non-CPU, CPU0, CPU1, CPU2 and CPU3 parts. */
	power_ungate_partition(POWER_PARTID_CRAIL);
	power_ungate_partition(POWER_PARTID_C0NC);
	power_ungate_partition(POWER_PARTID_CE0);
	power_ungate_partition(POWER_PARTID_CE1);
	power_ungate_partition(POWER_PARTID_CE2);
	power_ungate_partition(POWER_PARTID_CE3);
}

static void request_ram_repair(void)
{
	struct flow_ctlr * const flow = (void *)(uintptr_t)TEGRA_FLOW_BASE;
	const uint32_t req = 1 << 0;
	const uint32_t sts = 1 << 1;
	uint32_t reg;
	struct stopwatch sw;

	printk(BIOS_DEBUG, "Requesting RAM repair.\n");

	stopwatch_init(&sw);

	/* Perform ram repair */
	reg = read32(&flow->ram_repair);
	reg |= req;
	write32(&flow->ram_repair, reg);
	while ((read32(&flow->ram_repair) & sts) != sts)
		;

	printk(BIOS_DEBUG, "RAM repair complete in %ld usecs.\n",
		stopwatch_duration_usecs(&sw));
}

void ccplex_cpu_prepare(void)
{
	enable_cpu_clocks();
	enable_cpu_power_partitions();

	mainboard_configure_pmc();
	mainboard_enable_vdd_cpu();

	request_ram_repair();
}

static void start_common_clocks(void)
{
	/* Clear fast CPU partition reset. */
	write32(CLK_RST_REG(rst_cpug_cmplx_clr), CRC_RST_CPUG_CLR_NONCPU);

	/* Clear reset of L2 and CoreSight components. */
	write32(CLK_RST_REG(rst_cpug_cmplx_clr),
		CRC_RST_CPUG_CLR_L2 | CRC_RST_CPUG_CLR_PDBG);
}

void ccplex_cpu_start(void *entry_addr)
{
	/* Enable common clocks for the shared resources between the cores. */
	start_common_clocks();

	start_cpu(0, entry_addr);
}
