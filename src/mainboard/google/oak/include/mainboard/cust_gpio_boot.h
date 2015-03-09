/*
 * This file is part of the coreboot project.
 *
 * Copyright 2014 MediaTek Inc.
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

#ifndef SOC_MEDIATEK_MT8173_CUST_GPIO_BOOT_H
#define SOC_MEDIATEK_MT8173_CUST_GPIO_BOOT_H

#include <soc/pinmux.h>

/* Configuration for GPIO SMT(Schmidt Trigger) Group output start */
enum {
	GPIO_SMT_GROUP_1	= 1,
	GPIO_SMT_GROUP_2	= 0,
	GPIO_SMT_GROUP_10	= 0,
	GPIO_SMT_GROUP_26	= 0,
	GPIO_SMT_GROUP_0	= 0,
	GPIO_SMT_GROUP_34	= 0,
	GPIO_SMT_GROUP_19	= 0,
	GPIO_SMT_GROUP_3	= 0,
	GPIO_SMT_GROUP_4	= 0,
	GPIO_SMT_GROUP_5	= 0,
	GPIO_SMT_GROUP_6	= 0,
	GPIO_SMT_GROUP_7	= 0,
	GPIO_SMT_GROUP_9	= 0,
	GPIO_SMT_GROUP_16	= 0,
	GPIO_SMT_GROUP_11	= 0,
	GPIO_SMT_GROUP_12	= 0,
	GPIO_SMT_GROUP_30	= 0,
	GPIO_SMT_GROUP_31	= 0,
	GPIO_SMT_GROUP_32	= 0,
	GPIO_SMT_GROUP_33	= 0,
	GPIO_SMT_GROUP_13	= 0,
	GPIO_SMT_GROUP_14	= 0,
	GPIO_SMT_GROUP_15	= 0,
	GPIO_SMT_GROUP_20	= 0,
	GPIO_SMT_GROUP_17	= 0,
	GPIO_SMT_GROUP_18	= 0,
	GPIO_SMT_GROUP_21	= 0,
	GPIO_SMT_GROUP_22	= 0,
	GPIO_SMT_GROUP_23	= 0,
	GPIO_SMT_GROUP_40	= 0,
	GPIO_SMT_GROUP_41	= 0,
	GPIO_SMT_GROUP_24	= 0,
};
/* Configuration for GPIO SMT(Schmidt Trigger) Group output end */

enum {
	/* Configuration for Pin 0 */
	GPIO0_MODE	= GPIO_MODE_00,
	GPIO0_DIR	= GPIO_DIR_IN,
	GPIO0_PULLEN	= GPIO_PULL_ENABLE,
	GPIO0_PULL	= GPIO_PULL_UP,
	GPIO0_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 1 */
	GPIO1_MODE	= GPIO_MODE_00,
	GPIO1_DIR	= GPIO_DIR_IN,
	GPIO1_PULLEN	= GPIO_PULL_ENABLE,
	GPIO1_PULL	= GPIO_PULL_UP,
	GPIO1_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 2 */
	GPIO2_MODE	= GPIO_MODE_00,
	GPIO2_DIR	= GPIO_DIR_IN,
	GPIO2_PULLEN	= GPIO_PULL_ENABLE,
	GPIO2_PULL	= GPIO_PULL_DOWN,
	GPIO2_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 3 */
	GPIO3_MODE	= GPIO_MODE_00,
	GPIO3_DIR	= GPIO_DIR_OUT,
	GPIO3_PULLEN	= GPIO_PULL_ENABLE,
	GPIO3_PULL	= GPIO_PULL_DOWN,
	GPIO3_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 4 */
	GPIO4_MODE	= GPIO_MODE_00,
	GPIO4_DIR	= GPIO_DIR_IN,
	GPIO4_PULLEN	= GPIO_PULL_ENABLE,
	GPIO4_PULL	= GPIO_PULL_UP,
	GPIO4_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 5 */
	GPIO5_MODE	= GPIO_MODE_00,
	GPIO5_DIR	= GPIO_DIR_IN,
	GPIO5_PULLEN	= GPIO_PULL_ENABLE,
	GPIO5_PULL	= GPIO_PULL_DOWN,
	GPIO5_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 6 */
	GPIO6_MODE	= GPIO_MODE_00,
	GPIO6_DIR	= GPIO_DIR_OUT,
	GPIO6_PULLEN	= GPIO_PULL_DISABLE,
	GPIO6_PULL	= GPIO_PULL_DOWN,
	GPIO6_DATAOUT	= GPIO_OUT_ONE,

	/* Configuration for Pin 7 */
	GPIO7_MODE	= GPIO_MODE_00,
	GPIO7_DIR	= GPIO_DIR_IN,
	GPIO7_PULLEN	= GPIO_PULL_ENABLE,
	GPIO7_PULL	= GPIO_PULL_DOWN,
	GPIO7_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 8 */
	GPIO8_MODE	= GPIO_MODE_00,
	GPIO8_DIR	= GPIO_DIR_OUT,
	GPIO8_PULLEN	= GPIO_PULL_DISABLE,
	GPIO8_PULL	= GPIO_PULL_DOWN,
	GPIO8_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 9 */
	GPIO9_MODE	= GPIO_MODE_00,
	GPIO9_DIR	= GPIO_DIR_IN,
	GPIO9_PULLEN	= GPIO_PULL_ENABLE,
	GPIO9_PULL	= GPIO_PULL_UP,
	GPIO9_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 10 */
	GPIO10_MODE	= GPIO_MODE_00,
	GPIO10_DIR	= GPIO_DIR_IN,
	GPIO10_PULLEN	= GPIO_PULL_ENABLE,
	GPIO10_PULL	= GPIO_PULL_DOWN,
	GPIO10_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 11 */
	GPIO11_MODE	= GPIO_MODE_00,
	GPIO11_DIR	= GPIO_DIR_IN,
	GPIO11_PULLEN	= GPIO_PULL_ENABLE,
	GPIO11_PULL	= GPIO_PULL_UP,
	GPIO11_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 12 */
	GPIO12_MODE	= GPIO_MODE_00,
	GPIO12_DIR	= GPIO_DIR_IN,
	GPIO12_PULLEN	= GPIO_PULL_ENABLE,
	GPIO12_PULL	= GPIO_PULL_UP,
	GPIO12_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 13 */
	GPIO13_MODE	= GPIO_MODE_00,
	GPIO13_DIR	= GPIO_DIR_IN,
	GPIO13_PULLEN	= GPIO_PULL_ENABLE,
	GPIO13_PULL	= GPIO_PULL_DOWN,
	GPIO13_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 14 */
	GPIO14_MODE	= GPIO_MODE_00,
	GPIO14_DIR	= GPIO_DIR_IN,
	GPIO14_PULLEN	= GPIO_PULL_DISABLE,
	GPIO14_PULL	= GPIO_PULL_UP,
	GPIO14_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 15 */
	GPIO15_MODE	= GPIO_MODE_01,
	GPIO15_DIR	= GPIO_DIR_IN,
	GPIO15_PULLEN	= GPIO_PULL_ENABLE,
	GPIO15_PULL	= GPIO_PULL_DOWN,
	GPIO15_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 16 */
	GPIO16_MODE	= GPIO_MODE_00,
	GPIO16_DIR	= GPIO_DIR_IN,
	GPIO16_PULLEN	= GPIO_PULL_ENABLE,
	GPIO16_PULL	= GPIO_PULL_UP,
	GPIO16_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 17 */
	GPIO17_MODE	= GPIO_MODE_01,
	GPIO17_DIR	= GPIO_DIR_IN,
	GPIO17_PULLEN	= GPIO_PULL_ENABLE,
	GPIO17_PULL	= GPIO_PULL_DOWN,
	GPIO17_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 18 */
	GPIO18_MODE	= GPIO_MODE_01,
	GPIO18_DIR	= GPIO_DIR_IN,
	GPIO18_PULLEN	= GPIO_PULL_DISABLE,
	GPIO18_PULL	= GPIO_PULL_UP,
	GPIO18_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 19 */
	GPIO19_MODE	= GPIO_MODE_01,
	GPIO19_DIR	= GPIO_DIR_IN,
	GPIO19_PULLEN	= GPIO_PULL_DISABLE,
	GPIO19_PULL	= GPIO_PULL_UP,
	GPIO19_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 20 */
	GPIO20_MODE	= GPIO_MODE_01,
	GPIO20_DIR	= GPIO_DIR_IN,
	GPIO20_PULLEN	= GPIO_PULL_DISABLE,
	GPIO20_PULL	= GPIO_PULL_UP,
	GPIO20_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 21 */
	GPIO21_MODE	= GPIO_MODE_00,
	GPIO21_DIR	= GPIO_DIR_IN,
	GPIO21_PULLEN	= GPIO_PULL_DISABLE,
	GPIO21_PULL	= GPIO_PULL_UP,
	GPIO21_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 22 */
	GPIO22_MODE	= GPIO_MODE_01,
	GPIO22_DIR	= GPIO_DIR_IN,
	GPIO22_PULLEN	= GPIO_PULL_ENABLE,
	GPIO22_PULL	= GPIO_PULL_UP,
	GPIO22_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 23 */
	GPIO23_MODE	= GPIO_MODE_01,
	GPIO23_DIR	= GPIO_DIR_IN,
	GPIO23_PULLEN	= GPIO_PULL_ENABLE,
	GPIO23_PULL	= GPIO_PULL_UP,
	GPIO23_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 24 */
	GPIO24_MODE	= GPIO_MODE_01,
	GPIO24_DIR	= GPIO_DIR_IN,
	GPIO24_PULLEN	= GPIO_PULL_ENABLE,
	GPIO24_PULL	= GPIO_PULL_UP,
	GPIO24_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 25 */
	GPIO25_MODE	= GPIO_MODE_01,
	GPIO25_DIR	= GPIO_DIR_IN,
	GPIO25_PULLEN	= GPIO_PULL_ENABLE,
	GPIO25_PULL	= GPIO_PULL_UP,
	GPIO25_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 26 */
	GPIO26_MODE	= GPIO_MODE_01,
	GPIO26_DIR	= GPIO_DIR_OUT,
	GPIO26_PULLEN	= GPIO_PULL_ENABLE,
	GPIO26_PULL	= GPIO_PULL_DOWN,
	GPIO26_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 27 */
	GPIO27_MODE	= GPIO_MODE_01,
	GPIO27_DIR	= GPIO_DIR_IN,
	GPIO27_PULLEN	= GPIO_PULL_ENABLE,
	GPIO27_PULL	= GPIO_PULL_UP,
	GPIO27_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 28 */
	GPIO28_MODE	= GPIO_MODE_01,
	GPIO28_DIR	= GPIO_DIR_IN,
	GPIO28_PULLEN	= GPIO_PULL_DISABLE,
	GPIO28_PULL	= GPIO_PULL_DOWN,
	GPIO28_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 29 */
	GPIO29_MODE	= GPIO_MODE_00,
	GPIO29_DIR	= GPIO_DIR_OUT,
	GPIO29_PULLEN	= GPIO_PULL_ENABLE,
	GPIO29_PULL	= GPIO_PULL_DOWN,
	GPIO29_DATAOUT	= GPIO_OUT_ONE,

	/* Configuration for Pin 30 */
	GPIO30_MODE	= GPIO_MODE_02,
	GPIO30_DIR	= GPIO_DIR_IN,
	GPIO30_PULLEN	= GPIO_PULL_ENABLE,
	GPIO30_PULL	= GPIO_PULL_UP,
	GPIO30_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 31 */
	GPIO31_MODE	= GPIO_MODE_01,
	GPIO31_DIR	= GPIO_DIR_IN,
	GPIO31_PULLEN	= GPIO_PULL_ENABLE,
	GPIO31_PULL	= GPIO_PULL_UP,
	GPIO31_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 32 */
	GPIO32_MODE	= GPIO_MODE_01,
	GPIO32_DIR	= GPIO_DIR_OUT,
	GPIO32_PULLEN	= GPIO_PULL_ENABLE,
	GPIO32_PULL	= GPIO_PULL_DOWN,
	GPIO32_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 33 */
	GPIO33_MODE	= GPIO_MODE_00,
	GPIO33_DIR	= GPIO_DIR_OUT,
	GPIO33_PULLEN	= GPIO_PULL_ENABLE,
	GPIO33_PULL	= GPIO_PULL_UP,
	GPIO33_DATAOUT	= GPIO_OUT_ONE,

	/* Configuration for Pin 34 */
	GPIO34_MODE	= GPIO_MODE_00,
	GPIO34_DIR	= GPIO_DIR_IN,
	GPIO34_PULLEN	= GPIO_PULL_DISABLE,
	GPIO34_PULL	= GPIO_PULL_DOWN,
	GPIO34_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 35 */
	GPIO35_MODE	= GPIO_MODE_00,
	GPIO35_DIR	= GPIO_DIR_IN,
	GPIO35_PULLEN	= GPIO_PULL_DISABLE,
	GPIO35_PULL	= GPIO_PULL_DOWN,
	GPIO35_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 36 */
	GPIO36_MODE	= GPIO_MODE_00,
	GPIO36_DIR	= GPIO_DIR_OUT,
	GPIO36_PULLEN	= GPIO_PULL_ENABLE,
	GPIO36_PULL	= GPIO_PULL_UP,
	GPIO36_DATAOUT	= GPIO_OUT_ONE,

	/* Configuration for Pin 37 */
	GPIO37_MODE	= GPIO_MODE_00,
	GPIO37_DIR	= GPIO_DIR_IN,
	GPIO37_PULLEN	= GPIO_PULL_ENABLE,
	GPIO37_PULL	= GPIO_PULL_UP,
	GPIO37_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 38 */
	GPIO38_MODE	= GPIO_MODE_00,
	GPIO38_DIR	= GPIO_DIR_OUT,
	GPIO38_PULLEN	= GPIO_PULL_ENABLE,
	GPIO38_PULL	= GPIO_PULL_DOWN,
	GPIO38_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 39 */
	GPIO39_MODE	= GPIO_MODE_00,
	GPIO39_DIR	= GPIO_DIR_OUT,
	GPIO39_PULLEN	= GPIO_PULL_ENABLE,
	GPIO39_PULL	= GPIO_PULL_UP,
	GPIO39_DATAOUT	= GPIO_OUT_ONE,

	/* Configuration for Pin 40 */
	GPIO40_MODE	= GPIO_MODE_01,
	GPIO40_DIR	= GPIO_DIR_IN,
	GPIO40_PULLEN	= GPIO_PULL_ENABLE,
	GPIO40_PULL	= GPIO_PULL_DOWN,
	GPIO40_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 41 */
	GPIO41_MODE	= GPIO_MODE_01,
	GPIO41_DIR	= GPIO_DIR_IN,
	GPIO41_PULLEN	= GPIO_PULL_ENABLE,
	GPIO41_PULL	= GPIO_PULL_DOWN,
	GPIO41_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 42 */
	GPIO42_MODE	= GPIO_MODE_00,
	GPIO42_DIR	= GPIO_DIR_IN,
	GPIO42_PULLEN	= GPIO_PULL_DISABLE,
	GPIO42_PULL	= GPIO_PULL_UP,
	GPIO42_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 43 */
	GPIO43_MODE	= GPIO_MODE_01,
	GPIO43_DIR	= GPIO_DIR_IN,
	GPIO43_PULLEN	= GPIO_PULL_DISABLE,
	GPIO43_PULL	= GPIO_PULL_DOWN,
	GPIO43_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 44 */
	GPIO44_MODE	= GPIO_MODE_01,
	GPIO44_DIR	= GPIO_DIR_IN,
	GPIO44_PULLEN	= GPIO_PULL_DISABLE,
	GPIO44_PULL	= GPIO_PULL_DOWN,
	GPIO44_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 45 */
	GPIO45_MODE	= GPIO_MODE_01,
	GPIO45_DIR	= GPIO_DIR_IN,
	GPIO45_PULLEN	= GPIO_PULL_DISABLE,
	GPIO45_PULL	= GPIO_PULL_DOWN,
	GPIO45_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 46 */
	GPIO46_MODE	= GPIO_MODE_01,
	GPIO46_DIR	= GPIO_DIR_IN,
	GPIO46_PULLEN	= GPIO_PULL_DISABLE,
	GPIO46_PULL	= GPIO_PULL_DOWN,
	GPIO46_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 47 */
	GPIO47_MODE	= GPIO_MODE_00,
	GPIO47_DIR	= GPIO_DIR_OUT,
	GPIO47_PULLEN	= GPIO_PULL_DISABLE,
	GPIO47_PULL	= GPIO_PULL_DOWN,
	GPIO47_DATAOUT	= GPIO_OUT_ONE,

	/* Configuration for Pin 48 */
	GPIO48_MODE	= GPIO_MODE_00,
	GPIO48_DIR	= GPIO_DIR_IN,
	GPIO48_PULLEN	= GPIO_PULL_ENABLE,
	GPIO48_PULL	= GPIO_PULL_DOWN,
	GPIO48_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 49 */
	GPIO49_MODE	= GPIO_MODE_00,
	GPIO49_DIR	= GPIO_DIR_IN,
	GPIO49_PULLEN	= GPIO_PULL_ENABLE,
	GPIO49_PULL	= GPIO_PULL_DOWN,
	GPIO49_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 50 */
	GPIO50_MODE	= GPIO_MODE_00,
	GPIO50_DIR	= GPIO_DIR_OUT,
	GPIO50_PULLEN	= GPIO_PULL_ENABLE,
	GPIO50_PULL	= GPIO_PULL_UP,
	GPIO50_DATAOUT	= GPIO_OUT_ONE,

	/* Configuration for Pin 51 */
	GPIO51_MODE	= GPIO_MODE_00,
	GPIO51_DIR	= GPIO_DIR_OUT,
	GPIO51_PULLEN	= GPIO_PULL_DISABLE,
	GPIO51_PULL	= GPIO_PULL_DOWN,
	GPIO51_DATAOUT	= GPIO_OUT_ONE,

	/* Configuration for Pin 52 */
	GPIO52_MODE	= GPIO_MODE_00,
	GPIO52_DIR	= GPIO_DIR_IN,
	GPIO52_PULLEN	= GPIO_PULL_DISABLE,
	GPIO52_PULL	= GPIO_PULL_DOWN,
	GPIO52_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 53 */
	GPIO53_MODE	= GPIO_MODE_01,
	GPIO53_DIR	= GPIO_DIR_IN,
	GPIO53_PULLEN	= GPIO_PULL_DISABLE,
	GPIO53_PULL	= GPIO_PULL_DOWN,
	GPIO53_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 54 */
	GPIO54_MODE	= GPIO_MODE_00,
	GPIO54_DIR	= GPIO_DIR_IN,
	GPIO54_PULLEN	= GPIO_PULL_ENABLE,
	GPIO54_PULL	= GPIO_PULL_DOWN,
	GPIO54_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 55 */
	GPIO55_MODE	= GPIO_MODE_00,
	GPIO55_DIR	= GPIO_DIR_IN,
	GPIO55_PULLEN	= GPIO_PULL_ENABLE,
	GPIO55_PULL	= GPIO_PULL_DOWN,
	GPIO55_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 56 */
	GPIO56_MODE	= GPIO_MODE_00,
	GPIO56_DIR	= GPIO_DIR_IN,
	GPIO56_PULLEN	= GPIO_PULL_ENABLE,
	GPIO56_PULL	= GPIO_PULL_DOWN,
	GPIO56_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 57 */
	GPIO57_MODE	= GPIO_MODE_01,
	GPIO57_DIR	= GPIO_DIR_IN,
	GPIO57_PULLEN	= GPIO_PULL_ENABLE,
	GPIO57_PULL	= GPIO_PULL_UP,
	GPIO57_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 58 */
	GPIO58_MODE	= GPIO_MODE_01,
	GPIO58_DIR	= GPIO_DIR_IN,
	GPIO58_PULLEN	= GPIO_PULL_ENABLE,
	GPIO58_PULL	= GPIO_PULL_UP,
	GPIO58_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 59 */
	GPIO59_MODE	= GPIO_MODE_01,
	GPIO59_DIR	= GPIO_DIR_IN,
	GPIO59_PULLEN	= GPIO_PULL_ENABLE,
	GPIO59_PULL	= GPIO_PULL_UP,
	GPIO59_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 60 */
	GPIO60_MODE	= GPIO_MODE_01,
	GPIO60_DIR	= GPIO_DIR_IN,
	GPIO60_PULLEN	= GPIO_PULL_ENABLE,
	GPIO60_PULL	= GPIO_PULL_UP,
	GPIO60_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 61 */
	GPIO61_MODE	= GPIO_MODE_01,
	GPIO61_DIR	= GPIO_DIR_IN,
	GPIO61_PULLEN	= GPIO_PULL_ENABLE,
	GPIO61_PULL	= GPIO_PULL_UP,
	GPIO61_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 62 */
	GPIO62_MODE	= GPIO_MODE_01,
	GPIO62_DIR	= GPIO_DIR_IN,
	GPIO62_PULLEN	= GPIO_PULL_ENABLE,
	GPIO62_PULL	= GPIO_PULL_UP,
	GPIO62_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 63 */
	GPIO63_MODE	= GPIO_MODE_01,
	GPIO63_DIR	= GPIO_DIR_IN,
	GPIO63_PULLEN	= GPIO_PULL_ENABLE,
	GPIO63_PULL	= GPIO_PULL_UP,
	GPIO63_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 64 */
	GPIO64_MODE	= GPIO_MODE_01,
	GPIO64_DIR	= GPIO_DIR_IN,
	GPIO64_PULLEN	= GPIO_PULL_ENABLE,
	GPIO64_PULL	= GPIO_PULL_UP,
	GPIO64_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 65 */
	GPIO65_MODE	= GPIO_MODE_01,
	GPIO65_DIR	= GPIO_DIR_OUT,
	GPIO65_PULLEN	= GPIO_PULL_ENABLE,
	GPIO65_PULL	= GPIO_PULL_DOWN,
	GPIO65_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 66 */
	GPIO66_MODE	= GPIO_MODE_01,
	GPIO66_DIR	= GPIO_DIR_IN,
	GPIO66_PULLEN	= GPIO_PULL_ENABLE,
	GPIO66_PULL	= GPIO_PULL_UP,
	GPIO66_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 67 */
	GPIO67_MODE	= GPIO_MODE_01,
	GPIO67_DIR	= GPIO_DIR_IN,
	GPIO67_PULLEN	= GPIO_PULL_ENABLE,
	GPIO67_PULL	= GPIO_PULL_DOWN,
	GPIO67_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 68 */
	GPIO68_MODE	= GPIO_MODE_01,
	GPIO68_DIR	= GPIO_DIR_OUT,
	GPIO68_PULLEN	= GPIO_PULL_ENABLE,
	GPIO68_PULL	= GPIO_PULL_DOWN,
	GPIO68_DATAOUT	= GPIO_OUT_ONE,

	/* Configuration for Pin 69 */
	GPIO69_MODE	= GPIO_MODE_01,
	GPIO69_DIR	= GPIO_DIR_IN,
	GPIO69_PULLEN	= GPIO_PULL_ENABLE,
	GPIO69_PULL	= GPIO_PULL_DOWN,
	GPIO69_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 70 */
	GPIO70_MODE	= GPIO_MODE_01,
	GPIO70_DIR	= GPIO_DIR_IN,
	GPIO70_PULLEN	= GPIO_PULL_ENABLE,
	GPIO70_PULL	= GPIO_PULL_DOWN,
	GPIO70_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 71 */
	GPIO71_MODE	= GPIO_MODE_01,
	GPIO71_DIR	= GPIO_DIR_IN,
	GPIO71_PULLEN	= GPIO_PULL_ENABLE,
	GPIO71_PULL	= GPIO_PULL_DOWN,
	GPIO71_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 72 */
	GPIO72_MODE	= GPIO_MODE_01,
	GPIO72_DIR	= GPIO_DIR_IN,
	GPIO72_PULLEN	= GPIO_PULL_ENABLE,
	GPIO72_PULL	= GPIO_PULL_DOWN,
	GPIO72_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 73 */
	GPIO73_MODE	= GPIO_MODE_01,
	GPIO73_DIR	= GPIO_DIR_IN,
	GPIO73_PULLEN	= GPIO_PULL_ENABLE,
	GPIO73_PULL	= GPIO_PULL_UP,
	GPIO73_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 74 */
	GPIO74_MODE	= GPIO_MODE_01,
	GPIO74_DIR	= GPIO_DIR_IN,
	GPIO74_PULLEN	= GPIO_PULL_ENABLE,
	GPIO74_PULL	= GPIO_PULL_UP,
	GPIO74_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 75 */
	GPIO75_MODE	= GPIO_MODE_01,
	GPIO75_DIR	= GPIO_DIR_IN,
	GPIO75_PULLEN	= GPIO_PULL_ENABLE,
	GPIO75_PULL	= GPIO_PULL_UP,
	GPIO75_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 76 */
	GPIO76_MODE	= GPIO_MODE_01,
	GPIO76_DIR	= GPIO_DIR_IN,
	GPIO76_PULLEN	= GPIO_PULL_ENABLE,
	GPIO76_PULL	= GPIO_PULL_UP,
	GPIO76_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 77 */
	GPIO77_MODE	= GPIO_MODE_01,
	GPIO77_DIR	= GPIO_DIR_OUT,
	GPIO77_PULLEN	= GPIO_PULL_ENABLE,
	GPIO77_PULL	= GPIO_PULL_DOWN,
	GPIO77_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 78 */
	GPIO78_MODE	= GPIO_MODE_01,
	GPIO78_DIR	= GPIO_DIR_IN,
	GPIO78_PULLEN	= GPIO_PULL_ENABLE,
	GPIO78_PULL	= GPIO_PULL_UP,
	GPIO78_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 79 */
	GPIO79_MODE	= GPIO_MODE_01,
	GPIO79_DIR	= GPIO_DIR_IN,
	GPIO79_PULLEN	= GPIO_PULL_ENABLE,
	GPIO79_PULL	= GPIO_PULL_DOWN,
	GPIO79_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 80 */
	GPIO80_MODE	= GPIO_MODE_01,
	GPIO80_DIR	= GPIO_DIR_IN,
	GPIO80_PULLEN	= GPIO_PULL_ENABLE,
	GPIO80_PULL	= GPIO_PULL_DOWN,
	GPIO80_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 81 */
	GPIO81_MODE	= GPIO_MODE_01,
	GPIO81_DIR	= GPIO_DIR_IN,
	GPIO81_PULLEN	= GPIO_PULL_ENABLE,
	GPIO81_PULL	= GPIO_PULL_DOWN,
	GPIO81_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 82 */
	GPIO82_MODE	= GPIO_MODE_01,
	GPIO82_DIR	= GPIO_DIR_IN,
	GPIO82_PULLEN	= GPIO_PULL_ENABLE,
	GPIO82_PULL	= GPIO_PULL_UP,
	GPIO82_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 83 */
	GPIO83_MODE	= GPIO_MODE_01,
	GPIO83_DIR	= GPIO_DIR_OUT,
	GPIO83_PULLEN	= GPIO_PULL_ENABLE,
	GPIO83_PULL	= GPIO_PULL_DOWN,
	GPIO83_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 84 */
	GPIO84_MODE	= GPIO_MODE_01,
	GPIO84_DIR	= GPIO_DIR_IN,
	GPIO84_PULLEN	= GPIO_PULL_ENABLE,
	GPIO84_PULL	= GPIO_PULL_DOWN,
	GPIO84_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 85 */
	GPIO85_MODE	= GPIO_MODE_01,
	GPIO85_DIR	= GPIO_DIR_OUT,
	GPIO85_PULLEN	= GPIO_PULL_ENABLE,
	GPIO85_PULL	= GPIO_PULL_DOWN,
	GPIO85_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 86 */
	GPIO86_MODE	= GPIO_MODE_01,
	GPIO86_DIR	= GPIO_DIR_IN,
	GPIO86_PULLEN	= GPIO_PULL_ENABLE,
	GPIO86_PULL	= GPIO_PULL_DOWN,
	GPIO86_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 87 */
	GPIO87_MODE	= GPIO_MODE_00,
	GPIO87_DIR	= GPIO_DIR_OUT,
	GPIO87_PULLEN	= GPIO_PULL_ENABLE,
	GPIO87_PULL	= GPIO_PULL_UP,
	GPIO87_DATAOUT	= GPIO_OUT_ONE,

	/* Configuration for Pin 88 */
	GPIO88_MODE	= GPIO_MODE_01,
	GPIO88_DIR	= GPIO_DIR_IN,
	GPIO88_PULLEN	= GPIO_PULL_ENABLE,
	GPIO88_PULL	= GPIO_PULL_DOWN,
	GPIO88_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 89 */
	GPIO89_MODE	= GPIO_MODE_00,
	GPIO89_DIR	= GPIO_DIR_IN,
	GPIO89_PULLEN	= GPIO_PULL_ENABLE,
	GPIO89_PULL	= GPIO_PULL_DOWN,
	GPIO89_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 90 */
	GPIO90_MODE	= GPIO_MODE_01,
	GPIO90_DIR	= GPIO_DIR_IN,
	GPIO90_PULLEN	= GPIO_PULL_ENABLE,
	GPIO90_PULL	= GPIO_PULL_UP,
	GPIO90_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 91 */
	GPIO91_MODE	= GPIO_MODE_01,
	GPIO91_DIR	= GPIO_DIR_IN,
	GPIO91_PULLEN	= GPIO_PULL_ENABLE,
	GPIO91_PULL	= GPIO_PULL_UP,
	GPIO91_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 92 */
	GPIO92_MODE	= GPIO_MODE_00,
	GPIO92_DIR	= GPIO_DIR_OUT,
	GPIO92_PULLEN	= GPIO_PULL_ENABLE,
	GPIO92_PULL	= GPIO_PULL_DOWN,
	GPIO92_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 93 */
	GPIO93_MODE	= GPIO_MODE_00,
	GPIO93_DIR	= GPIO_DIR_OUT,
	GPIO93_PULLEN	= GPIO_PULL_ENABLE,
	GPIO93_PULL	= GPIO_PULL_UP,
	GPIO93_DATAOUT	= GPIO_OUT_ONE,

	/* Configuration for Pin 94 */
	GPIO94_MODE	= GPIO_MODE_00,
	GPIO94_DIR	= GPIO_DIR_OUT,
	GPIO94_PULLEN	= GPIO_PULL_ENABLE,
	GPIO94_PULL	= GPIO_PULL_UP,
	GPIO94_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 95 */
	GPIO95_MODE	= GPIO_MODE_00,
	GPIO95_DIR	= GPIO_DIR_IN,
	GPIO95_PULLEN	= GPIO_PULL_ENABLE,
	GPIO95_PULL	= GPIO_PULL_DOWN,
	GPIO95_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 96 */
	GPIO96_MODE	= GPIO_MODE_01,
	GPIO96_DIR	= GPIO_DIR_IN,
	GPIO96_PULLEN	= GPIO_PULL_ENABLE,
	GPIO96_PULL	= GPIO_PULL_UP,
	GPIO96_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 97 */
	GPIO97_MODE	= GPIO_MODE_01,
	GPIO97_DIR	= GPIO_DIR_OUT,
	GPIO97_PULLEN	= GPIO_PULL_ENABLE,
	GPIO97_PULL	= GPIO_PULL_UP,
	GPIO97_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 98 */
	GPIO98_MODE	= GPIO_MODE_01,
	GPIO98_DIR	= GPIO_DIR_IN,
	GPIO98_PULLEN	= GPIO_PULL_ENABLE,
	GPIO98_PULL	= GPIO_PULL_UP,
	GPIO98_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 99 */
	GPIO99_MODE	= GPIO_MODE_01,
	GPIO99_DIR	= GPIO_DIR_OUT,
	GPIO99_PULLEN	= GPIO_PULL_ENABLE,
	GPIO99_PULL	= GPIO_PULL_DOWN,
	GPIO99_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 100 */
	GPIO100_MODE	= GPIO_MODE_00,
	GPIO100_DIR	= GPIO_DIR_OUT,
	GPIO100_PULLEN	= GPIO_PULL_ENABLE,
	GPIO100_PULL	= GPIO_PULL_DOWN,
	GPIO100_DATAOUT	= GPIO_OUT_ONE,

	/* Configuration for Pin 101 */
	GPIO101_MODE	= GPIO_MODE_00,
	GPIO101_DIR	= GPIO_DIR_OUT,
	GPIO101_PULLEN	= GPIO_PULL_ENABLE,
	GPIO101_PULL	= GPIO_PULL_UP,
	GPIO101_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 102 */
	GPIO102_MODE	= GPIO_MODE_06,
	GPIO102_DIR	= GPIO_DIR_OUT,
	GPIO102_PULLEN	= GPIO_PULL_DISABLE,
	GPIO102_PULL	= GPIO_PULL_DOWN,
	GPIO102_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 103 */
	GPIO103_MODE	= GPIO_MODE_06,
	GPIO103_DIR	= GPIO_DIR_IN,
	GPIO103_PULLEN	= GPIO_PULL_DISABLE,
	GPIO103_PULL	= GPIO_PULL_DOWN,
	GPIO103_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 104 */
	GPIO104_MODE	= GPIO_MODE_06,
	GPIO104_DIR	= GPIO_DIR_OUT,
	GPIO104_PULLEN	= GPIO_PULL_DISABLE,
	GPIO104_PULL	= GPIO_PULL_DOWN,
	GPIO104_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 105 */
	GPIO105_MODE	= GPIO_MODE_06,
	GPIO105_DIR	= GPIO_DIR_OUT,
	GPIO105_PULLEN	= GPIO_PULL_DISABLE,
	GPIO105_PULL	= GPIO_PULL_DOWN,
	GPIO105_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 106 */
	GPIO106_MODE	= GPIO_MODE_01,
	GPIO106_DIR	= GPIO_DIR_IN,
	GPIO106_PULLEN	= GPIO_PULL_ENABLE,
	GPIO106_PULL	= GPIO_PULL_UP,
	GPIO106_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 107 */
	GPIO107_MODE	= GPIO_MODE_01,
	GPIO107_DIR	= GPIO_DIR_IN,
	GPIO107_PULLEN	= GPIO_PULL_ENABLE,
	GPIO107_PULL	= GPIO_PULL_UP,
	GPIO107_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 108 */
	GPIO108_MODE	= GPIO_MODE_01,
	GPIO108_DIR	= GPIO_DIR_IN,
	GPIO108_PULLEN	= GPIO_PULL_ENABLE,
	GPIO108_PULL	= GPIO_PULL_UP,
	GPIO108_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 109 */
	GPIO109_MODE	= GPIO_MODE_01,
	GPIO109_DIR	= GPIO_DIR_IN,
	GPIO109_PULLEN	= GPIO_PULL_ENABLE,
	GPIO109_PULL	= GPIO_PULL_UP,
	GPIO109_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 110 */
	GPIO110_MODE	= GPIO_MODE_01,
	GPIO110_DIR	= GPIO_DIR_IN,
	GPIO110_PULLEN	= GPIO_PULL_ENABLE,
	GPIO110_PULL	= GPIO_PULL_UP,
	GPIO110_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 111 */
	GPIO111_MODE	= GPIO_MODE_01,
	GPIO111_DIR	= GPIO_DIR_OUT,
	GPIO111_PULLEN	= GPIO_PULL_ENABLE,
	GPIO111_PULL	= GPIO_PULL_UP,
	GPIO111_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 112 */
	GPIO112_MODE	= GPIO_MODE_01,
	GPIO112_DIR	= GPIO_DIR_IN,
	GPIO112_PULLEN	= GPIO_PULL_ENABLE,
	GPIO112_PULL	= GPIO_PULL_DOWN,
	GPIO112_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 113 */
	GPIO113_MODE	= GPIO_MODE_01,
	GPIO113_DIR	= GPIO_DIR_IN,
	GPIO113_PULLEN	= GPIO_PULL_ENABLE,
	GPIO113_PULL	= GPIO_PULL_UP,
	GPIO113_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 114 */
	GPIO114_MODE	= GPIO_MODE_01,
	GPIO114_DIR	= GPIO_DIR_OUT,
	GPIO114_PULLEN	= GPIO_PULL_ENABLE,
	GPIO114_PULL	= GPIO_PULL_UP,
	GPIO114_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 115 */
	GPIO115_MODE	= GPIO_MODE_01,
	GPIO115_DIR	= GPIO_DIR_IN,
	GPIO115_PULLEN	= GPIO_PULL_ENABLE,
	GPIO115_PULL	= GPIO_PULL_UP,
	GPIO115_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 116 */
	GPIO116_MODE	= GPIO_MODE_01,
	GPIO116_DIR	= GPIO_DIR_OUT,
	GPIO116_PULLEN	= GPIO_PULL_ENABLE,
	GPIO116_PULL	= GPIO_PULL_DOWN,
	GPIO116_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 117 */
	GPIO117_MODE	= GPIO_MODE_01,
	GPIO117_DIR	= GPIO_DIR_IN,
	GPIO117_PULLEN	= GPIO_PULL_ENABLE,
	GPIO117_PULL	= GPIO_PULL_UP,
	GPIO117_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 118 */
	GPIO118_MODE	= GPIO_MODE_01,
	GPIO118_DIR	= GPIO_DIR_OUT,
	GPIO118_PULLEN	= GPIO_PULL_ENABLE,
	GPIO118_PULL	= GPIO_PULL_UP,
	GPIO118_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 119 */
	GPIO119_MODE	= GPIO_MODE_01,
	GPIO119_DIR	= GPIO_DIR_OUT,
	GPIO119_PULLEN	= GPIO_PULL_DISABLE,
	GPIO119_PULL	= GPIO_PULL_DOWN,
	GPIO119_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 120 */
	GPIO120_MODE	= GPIO_MODE_01,
	GPIO120_DIR	= GPIO_DIR_OUT,
	GPIO120_PULLEN	= GPIO_PULL_DISABLE,
	GPIO120_PULL	= GPIO_PULL_DOWN,
	GPIO120_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 121 */
	GPIO121_MODE	= GPIO_MODE_01,
	GPIO121_DIR	= GPIO_DIR_OUT,
	GPIO121_PULLEN	= GPIO_PULL_DISABLE,
	GPIO121_PULL	= GPIO_PULL_DOWN,
	GPIO121_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 122 */
	GPIO122_MODE	= GPIO_MODE_01,
	GPIO122_DIR	= GPIO_DIR_IN,
	GPIO122_PULLEN	= GPIO_PULL_ENABLE,
	GPIO122_PULL	= GPIO_PULL_UP,
	GPIO122_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 123 */
	GPIO123_MODE	= GPIO_MODE_01,
	GPIO123_DIR	= GPIO_DIR_IN,
	GPIO123_PULLEN	= GPIO_PULL_ENABLE,
	GPIO123_PULL	= GPIO_PULL_UP,
	GPIO123_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 124 */
	GPIO124_MODE	= GPIO_MODE_01,
	GPIO124_DIR	= GPIO_DIR_IN,
	GPIO124_PULLEN	= GPIO_PULL_ENABLE,
	GPIO124_PULL	= GPIO_PULL_UP,
	GPIO124_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 125 */
	GPIO125_MODE	= GPIO_MODE_01,
	GPIO125_DIR	= GPIO_DIR_IN,
	GPIO125_PULLEN	= GPIO_PULL_ENABLE,
	GPIO125_PULL	= GPIO_PULL_UP,
	GPIO125_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 126 */
	GPIO126_MODE	= GPIO_MODE_01,
	GPIO126_DIR	= GPIO_DIR_IN,
	GPIO126_PULLEN	= GPIO_PULL_ENABLE,
	GPIO126_PULL	= GPIO_PULL_UP,
	GPIO126_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 127 */
	GPIO127_MODE	= GPIO_MODE_00,
	GPIO127_DIR	= GPIO_DIR_OUT,
	GPIO127_PULLEN	= GPIO_PULL_ENABLE,
	GPIO127_PULL	= GPIO_PULL_DOWN,
	GPIO127_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 128 */
	GPIO128_MODE	= GPIO_MODE_02,
	GPIO128_DIR	= GPIO_DIR_OUT,
	GPIO128_PULLEN	= GPIO_PULL_ENABLE,
	GPIO128_PULL	= GPIO_PULL_DOWN,
	GPIO128_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 129 */
	GPIO129_MODE	= GPIO_MODE_02,
	GPIO129_DIR	= GPIO_DIR_OUT,
	GPIO129_PULLEN	= GPIO_PULL_ENABLE,
	GPIO129_PULL	= GPIO_PULL_DOWN,
	GPIO129_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 130 */
	GPIO130_MODE	= GPIO_MODE_02,
	GPIO130_DIR	= GPIO_DIR_OUT,
	GPIO130_PULLEN	= GPIO_PULL_ENABLE,
	GPIO130_PULL	= GPIO_PULL_DOWN,
	GPIO130_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 131 */
	GPIO131_MODE	= GPIO_MODE_02,
	GPIO131_DIR	= GPIO_DIR_OUT,
	GPIO131_PULLEN	= GPIO_PULL_ENABLE,
	GPIO131_PULL	= GPIO_PULL_DOWN,
	GPIO131_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 132 */
	GPIO132_MODE	= GPIO_MODE_03,
	GPIO132_DIR	= GPIO_DIR_IN,
	GPIO132_PULLEN	= GPIO_PULL_ENABLE,
	GPIO132_PULL	= GPIO_PULL_DOWN,
	GPIO132_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 133 */
	GPIO133_MODE	= GPIO_MODE_01,
	GPIO133_DIR	= GPIO_DIR_IN,
	GPIO133_PULLEN	= GPIO_PULL_DISABLE,
	GPIO133_PULL	= GPIO_PULL_DOWN,
	GPIO133_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for Pin 134 */
	GPIO134_MODE	= GPIO_MODE_01,
	GPIO134_DIR	= GPIO_DIR_IN,
	GPIO134_PULLEN	= GPIO_PULL_DISABLE,
	GPIO134_PULL	= GPIO_PULL_DOWN,
	GPIO134_DATAOUT	= GPIO_OUT_ZERO,

	/* Configuration for pmic gpio */

	/* Configuration for Pin 0 */
	GPIOEXT0_MODE		= GPIO_MODE_01,
	GPIOEXT0_DIR		= GPIO_DIR_IN,
	GPIOEXT0_PULLEN		= GPIO_PULL_DISABLE,
	GPIOEXT0_PULL		= GPIO_PULL_DOWN,
	GPIOEXT0_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT0_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 1 */
	GPIOEXT1_MODE		= GPIO_MODE_01,
	GPIOEXT1_DIR		= GPIO_DIR_IN,
	GPIOEXT1_PULLEN		= GPIO_PULL_DISABLE,
	GPIOEXT1_PULL		= GPIO_PULL_DOWN,
	GPIOEXT1_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT1_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 2 */
	GPIOEXT2_MODE		= GPIO_MODE_01,
	GPIOEXT2_DIR		= GPIO_DIR_IN,
	GPIOEXT2_PULLEN		= GPIO_PULL_DISABLE,
	GPIOEXT2_PULL		= GPIO_PULL_DOWN,
	GPIOEXT2_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT2_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 3 */
	GPIOEXT3_MODE		= GPIO_MODE_01,
	GPIOEXT3_DIR		= GPIO_DIR_IN,
	GPIOEXT3_PULLEN		= GPIO_PULL_DISABLE,
	GPIOEXT3_PULL		= GPIO_PULL_DOWN,
	GPIOEXT3_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT3_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 4 */
	GPIOEXT4_MODE		= GPIO_MODE_01,
	GPIOEXT4_DIR		= GPIO_DIR_IN,
	GPIOEXT4_PULLEN		= GPIO_PULL_DISABLE,
	GPIOEXT4_PULL		= GPIO_PULL_DOWN,
	GPIOEXT4_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT4_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 5 */
	GPIOEXT5_MODE		= GPIO_MODE_01,
	GPIOEXT5_DIR		= GPIO_DIR_IN,
	GPIOEXT5_PULLEN		= GPIO_PULL_DISABLE,
	GPIOEXT5_PULL		= GPIO_PULL_DOWN,
	GPIOEXT5_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT5_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 6 */
	GPIOEXT6_MODE		= GPIO_MODE_01,
	GPIOEXT6_DIR		= GPIO_DIR_IN,
	GPIOEXT6_PULLEN		= GPIO_PULL_ENABLE,
	GPIOEXT6_PULL		= GPIO_PULL_DOWN,
	GPIOEXT6_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT6_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 7 */
	GPIOEXT7_MODE		= GPIO_MODE_01,
	GPIOEXT7_DIR		= GPIO_DIR_IN,
	GPIOEXT7_PULLEN		= GPIO_PULL_ENABLE,
	GPIOEXT7_PULL		= GPIO_PULL_DOWN,
	GPIOEXT7_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT7_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 8 */
	GPIOEXT8_MODE		= GPIO_MODE_01,
	GPIOEXT8_DIR		= GPIO_DIR_IN,
	GPIOEXT8_PULLEN		= GPIO_PULL_ENABLE,
	GPIOEXT8_PULL		= GPIO_PULL_DOWN,
	GPIOEXT8_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT8_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 9 */
	GPIOEXT9_MODE		= GPIO_MODE_01,
	GPIOEXT9_DIR		= GPIO_DIR_IN,
	GPIOEXT9_PULLEN		= GPIO_PULL_ENABLE,
	GPIOEXT9_PULL		= GPIO_PULL_DOWN,
	GPIOEXT9_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT9_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 10 */
	GPIOEXT10_MODE		= GPIO_MODE_01,
	GPIOEXT10_DIR		= GPIO_DIR_OUT,
	GPIOEXT10_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT10_PULL		= GPIO_PULL_DOWN,
	GPIOEXT10_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT10_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 11 */
	GPIOEXT11_MODE		= GPIO_MODE_01,
	GPIOEXT11_DIR		= GPIO_DIR_IN,
	GPIOEXT11_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT11_PULL		= GPIO_PULL_DOWN,
	GPIOEXT11_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT11_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 12 */
	GPIOEXT12_MODE		= GPIO_MODE_00,
	GPIOEXT12_DIR		= GPIO_DIR_IN,
	GPIOEXT12_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT12_PULL		= GPIO_PULL_DOWN,
	GPIOEXT12_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT12_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 13 */
	GPIOEXT13_MODE		= GPIO_MODE_00,
	GPIOEXT13_DIR		= GPIO_DIR_OUT,
	GPIOEXT13_PULLEN	= GPIO_PULL_DISABLE,
	GPIOEXT13_PULL		= GPIO_PULL_DOWN,
	GPIOEXT13_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT13_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 14 */
	GPIOEXT14_MODE		= GPIO_MODE_00,
	GPIOEXT14_DIR		= GPIO_DIR_OUT,
	GPIOEXT14_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT14_PULL		= GPIO_PULL_UP,
	GPIOEXT14_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT14_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 15 */
	GPIOEXT15_MODE		= GPIO_MODE_00,
	GPIOEXT15_DIR		= GPIO_DIR_OUT,
	GPIOEXT15_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT15_PULL		= GPIO_PULL_UP,
	GPIOEXT15_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT15_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 16 */
	GPIOEXT16_MODE		= GPIO_MODE_00,
	GPIOEXT16_DIR		= GPIO_DIR_OUT,
	GPIOEXT16_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT16_PULL		= GPIO_PULL_UP,
	GPIOEXT16_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT16_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 17 */
	GPIOEXT17_MODE		= GPIO_MODE_00,
	GPIOEXT17_DIR		= GPIO_DIR_OUT,
	GPIOEXT17_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT17_PULL		= GPIO_PULL_UP,
	GPIOEXT17_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT17_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 18 */
	GPIOEXT18_MODE		= GPIO_MODE_00,
	GPIOEXT18_DIR		= GPIO_DIR_OUT,
	GPIOEXT18_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT18_PULL		= GPIO_PULL_UP,
	GPIOEXT18_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT18_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 19 */
	GPIOEXT19_MODE		= GPIO_MODE_00,
	GPIOEXT19_DIR		= GPIO_DIR_OUT,
	GPIOEXT19_PULLEN	= GPIO_PULL_DISABLE,
	GPIOEXT19_PULL		= GPIO_PULL_DOWN,
	GPIOEXT19_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT19_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 20 */
	GPIOEXT20_MODE		= GPIO_MODE_00,
	GPIOEXT20_DIR		= GPIO_DIR_IN,
	GPIOEXT20_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT20_PULL		= GPIO_PULL_DOWN,
	GPIOEXT20_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT20_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 21 */
	GPIOEXT21_MODE		= GPIO_MODE_00,
	GPIOEXT21_DIR		= GPIO_DIR_IN,
	GPIOEXT21_PULLEN	= GPIO_PULL_DISABLE,
	GPIOEXT21_PULL		= GPIO_PULL_DOWN,
	GPIOEXT21_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT21_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 22 */
	GPIOEXT22_MODE		= GPIO_MODE_00,
	GPIOEXT22_DIR		= GPIO_DIR_OUT,
	GPIOEXT22_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT22_PULL		= GPIO_PULL_UP,
	GPIOEXT22_DATAOUT	= GPIO_OUT_ONE,
	GPIOEXT22_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 23 */
	GPIOEXT23_MODE		= GPIO_MODE_00,
	GPIOEXT23_DIR		= GPIO_DIR_OUT,
	GPIOEXT23_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT23_PULL		= GPIO_PULL_UP,
	GPIOEXT23_DATAOUT	= GPIO_OUT_ONE,
	GPIOEXT23_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 24 */
	GPIOEXT24_MODE		= GPIO_MODE_00,
	GPIOEXT24_DIR		= GPIO_DIR_OUT,
	GPIOEXT24_PULLEN	= GPIO_PULL_DISABLE,
	GPIOEXT24_PULL		= GPIO_PULL_DOWN,
	GPIOEXT24_DATAOUT	= GPIO_OUT_ONE,
	GPIOEXT24_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 25 */
	GPIOEXT25_MODE		= GPIO_MODE_00,
	GPIOEXT25_DIR		= GPIO_DIR_OUT,
	GPIOEXT25_PULLEN	= GPIO_PULL_DISABLE,
	GPIOEXT25_PULL		= GPIO_PULL_DOWN,
	GPIOEXT25_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT25_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 26 */
	GPIOEXT26_MODE		= GPIO_MODE_00,
	GPIOEXT26_DIR		= GPIO_DIR_IN,
	GPIOEXT26_PULLEN	= GPIO_PULL_DISABLE,
	GPIOEXT26_PULL		= GPIO_PULL_DOWN,
	GPIOEXT26_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT26_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 27 */
	GPIOEXT27_MODE		= GPIO_MODE_00,
	GPIOEXT27_DIR		= GPIO_DIR_IN,
	GPIOEXT27_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT27_PULL		= GPIO_PULL_DOWN,
	GPIOEXT27_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT27_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 28 */
	GPIOEXT28_MODE		= GPIO_MODE_00,
	GPIOEXT28_DIR		= GPIO_DIR_IN,
	GPIOEXT28_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT28_PULL		= GPIO_PULL_DOWN,
	GPIOEXT28_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT28_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 29 */
	GPIOEXT29_MODE		= GPIO_MODE_00,
	GPIOEXT29_DIR		= GPIO_DIR_IN,
	GPIOEXT29_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT29_PULL		= GPIO_PULL_DOWN,
	GPIOEXT29_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT29_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 30 */
	GPIOEXT30_MODE		= GPIO_MODE_01,
	GPIOEXT30_DIR		= GPIO_DIR_IN,
	GPIOEXT30_PULLEN	= GPIO_PULL_DISABLE,
	GPIOEXT30_PULL		= GPIO_PULL_DOWN,
	GPIOEXT30_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT30_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 31 */
	GPIOEXT31_MODE		= GPIO_MODE_00,
	GPIOEXT31_DIR		= GPIO_DIR_IN,
	GPIOEXT31_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT31_PULL		= GPIO_PULL_DOWN,
	GPIOEXT31_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT31_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 32 */
	GPIOEXT32_MODE		= GPIO_MODE_00,
	GPIOEXT32_DIR		= GPIO_DIR_IN,
	GPIOEXT32_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT32_PULL		= GPIO_PULL_DOWN,
	GPIOEXT32_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT32_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 33 */
	GPIOEXT33_MODE		= GPIO_MODE_00,
	GPIOEXT33_DIR		= GPIO_DIR_IN,
	GPIOEXT33_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT33_PULL		= GPIO_PULL_DOWN,
	GPIOEXT33_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT33_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 34 */
	GPIOEXT34_MODE		= GPIO_MODE_00,
	GPIOEXT34_DIR		= GPIO_DIR_IN,
	GPIOEXT34_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT34_PULL		= GPIO_PULL_DOWN,
	GPIOEXT34_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT34_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 35 */
	GPIOEXT35_MODE		= GPIO_MODE_00,
	GPIOEXT35_DIR		= GPIO_DIR_IN,
	GPIOEXT35_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT35_PULL		= GPIO_PULL_DOWN,
	GPIOEXT35_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT35_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 36 */
	GPIOEXT36_MODE		= GPIO_MODE_00,
	GPIOEXT36_DIR		= GPIO_DIR_IN,
	GPIOEXT36_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT36_PULL		= GPIO_PULL_DOWN,
	GPIOEXT36_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT36_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 37 */
	GPIOEXT37_MODE		= GPIO_MODE_00,
	GPIOEXT37_DIR		= GPIO_DIR_IN,
	GPIOEXT37_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT37_PULL		= GPIO_PULL_DOWN,
	GPIOEXT37_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT37_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 38 */
	GPIOEXT38_MODE		= GPIO_MODE_00,
	GPIOEXT38_DIR		= GPIO_DIR_IN,
	GPIOEXT38_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT38_PULL		= GPIO_PULL_DOWN,
	GPIOEXT38_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT38_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 39 */
	GPIOEXT39_MODE		= GPIO_MODE_00,
	GPIOEXT39_DIR		= GPIO_DIR_IN,
	GPIOEXT39_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT39_PULL		= GPIO_PULL_DOWN,
	GPIOEXT39_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT39_DATAINV	= GPIO_DATA_UNINV,

	/* Configuration for Pin 40 */
	GPIOEXT40_MODE		= GPIO_MODE_00,
	GPIOEXT40_DIR		= GPIO_DIR_IN,
	GPIOEXT40_PULLEN	= GPIO_PULL_ENABLE,
	GPIOEXT40_PULL		= GPIO_PULL_DOWN,
	GPIOEXT40_DATAOUT	= GPIO_OUT_ZERO,
	GPIOEXT40_DATAINV	= GPIO_DATA_UNINV,
};
#endif /* SOC_MEDIATEK_MT8173_CUST_GPIO_BOOT_H */
