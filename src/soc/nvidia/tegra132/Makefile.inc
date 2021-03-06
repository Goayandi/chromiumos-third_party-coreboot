CBOOTIMAGE = cbootimage
CBOOTIMAGE_OPTS = --soc tegra132

bootblock-y += bootblock.c
bootblock-y += bootblock_asm.S
bootblock-y += cbfs.c
bootblock-y += clock.c
bootblock-y += spi.c
bootblock-y += i2c.c
bootblock-y += dma.c
bootblock-y += monotonic_timer.c
bootblock-y += padconfig.c
bootblock-y += power.c
bootblock-y += funitcfg.c
bootblock-y += reset.c
bootblock-y += ../tegra/gpio.c
bootblock-y += ../tegra/i2c.c
bootblock-y += ../tegra/pingroup.c
bootblock-y += ../tegra/pinmux.c
bootblock-y += ../tegra/apbmisc.c
bootblock-y += ../tegra/usb.c
ifeq ($(CONFIG_BOOTBLOCK_CONSOLE),y)
bootblock-$(CONFIG_CONSOLE_SERIAL_UART) += uart.c
endif

verstage-y += verstage.c
verstage-y += cbfs.c
verstage-y += dma.c
verstage-y += monotonic_timer.c
verstage-y += spi.c
verstage-y += padconfig.c
verstage-y += funitcfg.c
verstage-$(CONFIG_CONSOLE_SERIAL_UART) += uart.c
verstage-y += ../tegra/gpio.c
verstage-y += ../tegra/i2c.c
verstage-y += ../tegra/pinmux.c
verstage-y += clock.c
verstage-y += i2c.c

romstage-y += 32bit_reset.S
romstage-y += romstage_asm.S
romstage-y += addressmap.c
romstage-y += cbfs.c
romstage-y += cbmem.c
romstage-y += ccplex.c
romstage-y += clock.c
romstage-y += cpu.c
romstage-y += reset.c
romstage-y += spi.c
romstage-y += i2c.c
romstage-y += dma.c
romstage-y += monotonic_timer.c
romstage-y += padconfig.c
romstage-y += funitcfg.c
romstage-y += romstage.c
romstage-y += power.c
romstage-y += sdram.c
romstage-y += sdram_lp0.c
romstage-y += ../tegra/gpio.c
romstage-y += ../tegra/i2c.c
romstage-y += ../tegra/pinmux.c
romstage-y += ../tegra/usb.c
ifeq ($(CONFIG_EARLY_CONSOLE),y)
romstage-$(CONFIG_CONSOLE_SERIAL_UART) += uart.c
endif

ramstage-y += 32bit_reset.S
ramstage-y += addressmap.c
ramstage-y += cbfs.c
ramstage-y += cbmem.c
ramstage-y += cpu.c
ramstage-y += cpu_lib.S
ramstage-y += clock.c
ramstage-$(CONFIG_MAINBOARD_DO_NATIVE_VGA_INIT) += dc.c
ramstage-$(CONFIG_MAINBOARD_DO_DSI_INIT) += dsi.c
ramstage-$(CONFIG_MAINBOARD_DO_DSI_INIT) += mipi_dsi.c
ramstage-$(CONFIG_MAINBOARD_DO_DSI_INIT) += mipi.c
ramstage-$(CONFIG_MAINBOARD_DO_DSI_INIT) += mipi-phy.c
ramstage-$(CONFIG_MAINBOARD_DO_DSI_INIT) += ./jdi_25x18_display/panel-jdi-lpm102a188a.c
ramstage-$(CONFIG_MAINBOARD_DO_SOR_INIT) += dp.c
ramstage-$(CONFIG_MAINBOARD_DO_SOR_INIT) += sor.c

ramstage-y += soc.c
ramstage-y += spi.c
ramstage-y += i2c.c
ramstage-y += i2c6.c
ramstage-y += power.c
ramstage-y += dma.c
ramstage-y += gic.c
ramstage-y += monotonic_timer.c
ramstage-y += padconfig.c
ramstage-y += funitcfg.c
ramstage-y += reset.c
ramstage-y += ../tegra/apbmisc.c
ramstage-y += ../tegra/gpio.c
ramstage-y += ../tegra/i2c.c
ramstage-y += ../tegra/pinmux.c
ramstage-y += ramstage.c
ramstage-y += mmu_operations.c
ramstage-$(CONFIG_CONSOLE_SERIAL_UART) += uart.c
ramstage-y += ../tegra/usb.c
ramstage-$(CONFIG_ARCH_USE_SECURE_MONITOR) += secmon.c

secmon-$(CONFIG_ARCH_USE_SECURE_MONITOR) += 32bit_reset.S
secmon-$(CONFIG_ARCH_USE_SECURE_MONITOR) += cpu.c
secmon-$(CONFIG_ARCH_USE_SECURE_MONITOR) += cpu_lib.S
secmon-$(CONFIG_ARCH_USE_SECURE_MONITOR) += flow_ctrl.c
secmon-$(CONFIG_ARCH_USE_SECURE_MONITOR) += power.c
secmon-$(CONFIG_ARCH_USE_SECURE_MONITOR) += psci.c
secmon-$(CONFIG_ARCH_USE_SECURE_MONITOR) += uart.c
secmon-$(CONFIG_ARCH_USE_SECURE_MONITOR) += gic.c

rmodules_arm-y += monotonic_timer.c
VBOOT_STUB_DEPS += $(obj)/soc/nvidia/tegra132/monotonic_timer.rmodules_arm.o

INCLUDES += -Isrc/soc/nvidia/tegra132/include/

# We want to grab the bootblock right before it goes into the image and wrap
# it inside a BCT, but ideally we would do that without making special, one
# use modifications to the main ARM Makefile. We do this in two ways. First,
# we copy bootblock.elf to bootblock.raw.elf and allow the %.bin: %.elf
# template rule to turn it into bootblock.raw.bin. This makes sure whatever
# processing is supposed to happen to turn an .elf into a .bin happens.
#
# Second, we add our own rule for creating bootblock.bin from
# bootblock.raw.bin which displaces the template rule. When other rules that
# package up the image pull in bootblock.bin, it will be this wrapped version
# instead of the raw bootblock.

$(objcbfs)/bootblock.raw.elf: $(objcbfs)/bootblock.elf
	cp $< $@

$(obj)/generated/bct.bin: $(obj)/generated/bct.cfg
	@printf "    CBOOTIMAGE $(subst $(obj)/,,$(@))\n"
	$(CBOOTIMAGE) -gbct $(CBOOTIMAGE_OPTS) $< $@

BCT_BIN = $(obj)/generated/bct.bin
BCT_WRAPPER = $(obj)/generated/bct.wrapper
MTS_DIR = $(CONFIG_MTS_DIRECTORY)
PREBOOT_MTS_FILE = $(MTS_DIR)/mts_preboot_si
$(objcbfs)/bootblock.bin: $(objcbfs)/bootblock.raw.bin $(BCT_BIN)
	echo "Version    = 1;" > $(BCT_WRAPPER)
	echo "Redundancy = 1;" >> $(BCT_WRAPPER)
	echo "Bctcopy    = 1;" >> $(BCT_WRAPPER)
	echo "Bctfile    = $(BCT_BIN);" >> $(BCT_WRAPPER)
	echo "MtsPreboot = $(PREBOOT_MTS_FILE),0x4000f000,0x4000f000,Complete;" >> $(BCT_WRAPPER)
	echo "BootLoader = $<,$(call loadaddr,bootblock),$(call loadaddr,bootblock),Complete;" >> $(BCT_WRAPPER)
	@printf "    CBOOTIMAGE $(subst $(obj)/,,$(@))\n"
	$(CBOOTIMAGE) $(CBOOTIMAGE_OPTS) $(BCT_WRAPPER) $@

# MTS microcode
MTS_FILE = $(MTS_DIR)/mts_si
MTS_FILE_CBFS = mts
cbfs-files-y += $(MTS_FILE_CBFS)
$(MTS_FILE_CBFS)-file := $(MTS_FILE)
$(MTS_FILE_CBFS)-type := 0x50
