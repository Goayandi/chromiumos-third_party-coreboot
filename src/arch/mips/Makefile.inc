#
# This file is part of the coreboot project.
#
# Copyright (C) 2014 Imagination Technologies
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License as
# published by the Free Software Foundation; version 2 of
# the License.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin St, Fifth Floor, Boston,
# MA 02110-1301 USA
#

###############################################################################
# MIPS specific options
###############################################################################

ifeq ($(CONFIG_ARCH_ROMSTAGE_MIPS),y)
CBFSTOOL_PRE1_OPTS = -m mips -s $(CONFIG_CBFS_SIZE)
endif

###############################################################################
# bootblock
###############################################################################

ifeq ($(CONFIG_ARCH_BOOTBLOCK_MIPS),y)

bootblock-y += boot.c
bootblock-y += bootblock.S
bootblock-y += bootblock_simple.c
bootblock-y += cache.c
bootblock-y += mmu.c
bootblock-$(CONFIG_BOOTBLOCK_CONSOLE) += early_console.c
bootblock-y += stages.c
bootblock-y += ../../lib/memcpy.c
bootblock-y += ../../lib/memmove.c
bootblock-y += ../../lib/memset.c

# Much of the assembly code is generated by the compiler, and may contain
# terms which the preprocessor will happily go on to replace. For example
# "mips" would be replaced with "1". Clear all the built in definitions to
# prevent that.
bootblock-S-ccopts += -undef

$(objcbfs)/bootblock.debug: $$(bootblock-objs)
	@printf "    LINK       $(subst $(obj)/,,$(@))\n"
	$(call link,bootblock,$(filter %.a %.o,$(^)),-o $(@) -L$(obj) -T $(obj)/mainboard/$(MAINBOARDDIR)/memlayout.bootblock.ld,--gc-sections)

endif # CONFIG_ARCH_BOOTBLOCK_MIPS

###############################################################################
# romstage
###############################################################################

ifeq ($(CONFIG_ARCH_ROMSTAGE_MIPS),y)

romstage-y += boot.c
romstage-$(CONFIG_EARLY_CONSOLE) += early_console.c
romstage-y += cache.c
romstage-y += mmu.c
romstage-y += stages.c
romstage-y += ../../lib/memcpy.c
romstage-y += ../../lib/memmove.c
romstage-y += ../../lib/memset.c

$(objcbfs)/romstage.debug: $$(romstage-objs)
	@printf "    LINK       $(subst $(obj)/,,$(@))\n"
	$(call link,romstage,$(filter %.a %.o,$(^)),-o $(@) -L$(obj) -T $(obj)/mainboard/$(MAINBOARDDIR)/memlayout.romstage.ld,--gc-sections)

endif # CONFIG_ARCH_ROMSTAGE_MIPS

###############################################################################
# ramstage
###############################################################################

ifeq ($(CONFIG_ARCH_RAMSTAGE_MIPS),y)

ramstage-y += ashldi3.c
ramstage-y += boot.c
ramstage-y += cache.c
ramstage-y += mmu.c
ramstage-y += stages.c
ramstage-y += tables.c
ramstage-y += ../../lib/memcpy.c
ramstage-y += ../../lib/memmove.c
ramstage-y += ../../lib/memset.c

ramstage-srcs += $(wildcard src/mainboard/$(MAINBOARDDIR)/mainboard.c)

$(objcbfs)/ramstage.debug: $$(ramstage-objs)
	@printf "    CC         $(subst $(obj)/,,$(@))\n"
	$(call link,ramstage,$(filter %.a %.o,$(^)),-o $(@) -L$(obj) -T $(obj)/mainboard/$(MAINBOARDDIR)/memlayout.ramstage.ld,--gc-sections)

endif # CONFIG_ARCH_RAMSTAGE_MIPS
