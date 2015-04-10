##
## This file is part of the coreboot project.
##
## Copyright 2014 Google Inc.
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

bootblock-y += bootblock.c
bootblock-y += cpu_lib.S
bootblock-y += emmc_cbfs.c
bootblock-y += pll_pre.c
bootblock-y += spi.c
bootblock-y += pmic_wrap_init.c i2c.c pmic.c da9212.c
bootblock-y += timer.c monotonic_timer.c
ifeq ($(CONFIG_BOOTBLOCK_CONSOLE),y)
bootblock-$(CONFIG_CONSOLE_SERIAL_UART) += uart.c
endif

bootblock-y += blkdev.c mmc_common_inter.c mmc_core.c \
		msdc.c msdc_utils.c cust_msdc.c

################################################################################

romstage-y += cpu_lib.S cpu.c
romstage-y += emmc_cbfs.c \
   blkdev.c mmc_common_inter.c mmc_core.c msdc.c msdc_utils.c cust_msdc.c
romstage-y += pll_pre.c pll.c
romstage-y += timer.c monotonic_timer.c
ifeq ($(CONFIG_EARLY_CONSOLE),y)
romstage-$(CONFIG_CONSOLE_SERIAL_UART) += uart.c
endif
romstage-$(CONFIG_DYNAMIC_CBMEM) += cbmem.c
romstage-y += spi.c
romstage-y += gpio.c gpio_init.c
romstage-y += pmic_wrap_init.c i2c.c pmic.c da9212.c
romstage-y += 	wdt.c \
		emi.c dramc_pi_basic_api.c dramc_pi_calibration_api.c \
		stdlib.c \
		rtc.c memory.c
romstage-y += addressmap.c

################################################################################

ramstage-y += cpu_lib.S
ramstage-y += cbmem.c
ramstage-y += spi.c
ramstage-y += emmc_cbfs.c blkdev.c mmc_common_inter.c mmc_core.c msdc.c msdc_utils.c cust_msdc.c
ramstage-y += soc.c cpu.c mtcmos.c
ramstage-y += timer.c monotonic_timer.c
ramstage-$(CONFIG_CONSOLE_SERIAL_UART) += uart.c
ramstage-y += pmic_wrap_init.c pmic.c
ramstage-y += ramstage.c mmu_operations.c clock.c
ramstage-y += gic.c
ramstage-y += addressmap.c
ramstage-${CONFIG_MEDIATEK_DISPLAY_INIT} += gpio.c gpio_init.c
ramstage-${CONFIG_MEDIATEK_DISPLAY_INIT} += display.c
ramstage-${CONFIG_MEDIATEK_DISPLAY_INIT} += ddp.c
ramstage-${CONFIG_MEDIATEK_DISPLAY_INIT} += dsi.c
ramstage-${CONFIG_MEDIATEK_DISPLAY_INIT} += i2c.c it6151.c
ramstage-$(CONFIG_ARCH_USE_SECURE_MONITOR) += secmon.c

secmon-$(CONFIG_ARCH_USE_SECURE_MONITOR) += cpu_lib.S
secmon-$(CONFIG_ARCH_USE_SECURE_MONITOR) += psci.c
secmon-$(CONFIG_ARCH_USE_SECURE_MONITOR) += cpu.c mtcmos.c
secmon-$(CONFIG_ARCH_USE_SECURE_MONITOR) += timer.c monotonic_timer.c

rmodules_$(ARCH-ROMSTAGE-y)-y += monotonic_timer.c
# TODO: remove this when vbootstub 64-bit align problem has been fixed.
rmodules_$(ARCH-ROMSTAGE-y)-c-ccopts += -mstrict-align
VBOOT_STUB_DEPS += $(obj)/soc/mediatek/mt8173/monotonic_timer.rmodules_$(ARCH-ROMSTAGE-y).o

# Generate the actual coreboot bootblock code
$(objcbfs)/bootblock.bin: $(objcbfs)/bootblock.elf
	@printf "    OBJCOPY    $(subst $(obj)/,,$(@))\n"
	$(OBJCOPY_bootblock) -O binary $< $@.tmp
	./util/mtkheader/gen-bl-img.py mt8173 $@.tmp $@

INCLUDES += -Isrc/soc/mediatek/mt8173/include