/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2013 Google Inc.
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

#ifndef ONBOARD_H
#define ONBOARD_H

#include "irqroute.h"

/*
 * Calculation of gpio based irq.
 * Gpio banks ordering : GPSW, GPNC, GPEC, GPSE
 * Max direct irq (MAX_DIRECT_IRQ) is 114.
 * Size of gpio banks are
 * GPSW_SIZE = 98
 * GPNC_SIZE = 73
 * GPEC_SIZE = 27
 * GPSE_SIZE = 86
 */

/*
 * gpio based irq for kbd, 17th index in North Bank
 * MAX_DIRECT_IRQ + GPSW_SIZE + 18
 */
#define STRAGO_KBD_IRQ         230

/*
 * gpio based irq for trackpad, 18th index in North Bank
 * MAX_DIRECT_IRQ + GPSW_SIZE + 19
 */
#define STRAGO_TRACKPAD_IRQ    231

/*
 * gpio based irq for touchscreen, 76th index in SW Bank
 * MAX_DIRECT_IRQ + 77
 */
#define STRAGO_TOUCH_IRQ	191

/* Gpio index or offset number in SE bank */
#define JACK_DETECT_GPIO_INDEX	77

#define BOARD_TRACKPAD_NAME             "trackpad"
#define BOARD_TRACKPAD_IRQ              STRAGO_TRACKPAD_IRQ
#define BOARD_TRACKPAD_WAKE_GPIO        ACPI_ENABLE_WAKE_SUS_GPIO(1)
#define BOARD_TRACKPAD_I2C_BUS          5
#define BOARD_TRACKPAD_I2C_ADDR         0x15

#define BOARD_TOUCHSCREEN_NAME          "touchscreen"
#define BOARD_TOUCHSCREEN_IRQ           STRAGO_TOUCH_IRQ
#define BOARD_TOUCHSCREEN_WAKE_GPIO     ACPI_ENABLE_WAKE_SUS_GPIO(2)
#define BOARD_TOUCHSCREEN_I2C_BUS       0
#define BOARD_TOUCHSCREEN_I2C_ADDR      0x4a    /* TODO(shawnn): Check this */

#define BOARD_I8042_IRQ                 STRAGO_KBD_IRQ
#define BOARD_ALS_IRQ                   GPIO_S0_DED_IRQ(ALS_IRQ_OFFSET)

/*
 * gpio based irq for codec irq, 77th index in GPSE Bank
 * MAX_DIRECT_IRQ+GPSW_SIZE+GPNC_SIZE +GPEC_SIZE + 78
 */
#define BOARD_CODEC_IRQ	390

/* SD CARD gpio */
#define SDCARD_CD			81

#define AUDIO_CODEC_HID			"193C9890"
#define AUDIO_CODEC_CID			"193C9890"
#define AUDIO_CODEC_DDN			"Maxim 98090 Codec  "
#define AUDIO_CODEC_I2C_ADDR		0x10

#define AUDIO_JACK_IRQ  149
#define TI_SWITCH_HID           "104C227E"
#define TI_SWITCH_CID           "104C227E"
#define TI_SWITCH_DDN           "TI SWITCH "
#define TI_SWITCH_I2C_ADDR		0x3B
#endif
