/*
 * Copyright (c) 2013, NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _TEGRA124_CLK_RST_H_
#define _TEGRA124_CLK_RST_H_

/* Clock/Reset Controller (CLK_RST_CONTROLLER_) regs */
struct  __attribute__ ((__packed__)) clk_rst_ctlr {
	u32 rst_src;			/* _RST_SOURCE,             0x000 */
	u32 rst_dev_l;			/* _RST_DEVICES_L,          0x004 */
	u32 rst_dev_h;			/* _RST_DEVICES_H,          0x008 */
	u32 rst_dev_u;			/* _RST_DEVICES_U,          0x00c */
	u32 clk_out_enb_l;		/* _CLK_OUT_ENB_L,          0x010 */
	u32 clk_out_enb_h;		/* _CLK_OUT_ENB_H,          0x014 */
	u32 clk_out_enb_u;		/* _CLK_OUT_ENB_U,          0x018 */
	u32 _rsv0;			/*                          0x01c */
	u32 cclk_brst_pol;		/* _CCLK_BURST_POLICY,      0x020 */
	u32 super_cclk_div;		/* _SUPER_CCLK_DIVIDER,     0x024 */
	u32 sclk_brst_pol;		/* _SCLK_BURST_POLICY,      0x028 */
	u32 super_sclk_div;		/* _SUPER_SCLK_DIVIDER,     0x02C */
	u32 clk_sys_rate;		/* _CLK_SYSTEM_RATE,        0x030 */
	u32 _rsv1[3];			/*                      0x034-03c */
	u32 cop_clk_skip_plcy;		/* _COP_CLK_SKIP_POLICY,    0x040 */
	u32 clk_mask_arm;		/* _CLK_MASK_ARM,           0x044 */
	u32 misc_clk_enb;		/* _MISC_CLK_ENB,           0x048 */
	u32 clk_cpu_cmplx;		/* _CLK_CPU_CMPLX,          0x04C */
	u32 osc_ctrl;			/* _OSC_CTRL,               0x050 */
	u32 pll_lfsr;			/* _PLL_LFSR,               0x054 */
	u32 osc_freq_det;		/* _OSC_FREQ_DET,           0x058 */
	u32 osc_freq_det_stat;		/* _OSC_FREQ_DET_STATUS,    0x05C */
	u32 _rsv2[8];			/*                      0x060-07C */
	u32 pllc_base;			/* _PLLC_BASE,              0x080 */
	u32 pllc_out;			/* _PLLC_OUT,               0x084 */
	u32 pllc_misc2;			/* _PLLC_MISC2,             0x088 */
	u32 pllc_misc;			/* _PLLC_MISC,              0x08c */
	u32 pllm_base;			/* _PLLM_BASE,              0x090 */
	u32 pllm_out;			/* _PLLM_OUT,               0x094 */
	u32 pllm_misc1;			/* _PLLM_MISC1,             0x098 */
	u32 pllm_misc2;			/* _PLLM_MISC2,             0x09c */
	u32 pllp_base;			/* _PLLP_BASE,              0x0a0 */
	u32 pllp_outa;			/* _PLLP_OUTA,              0x0a4 */
	u32 pllp_outb;			/* _PLLP_OUTB,              0x0a8 */
	u32 pllp_misc;			/* _PLLP_MISC,              0x0ac */
	u32 plla_base;			/* _PLLA_BASE,              0x0b0 */
	u32 plla_out;			/* _PLLA_OUT,               0x0b4 */
	u32 _rsv3;			/*                          0x0b8 */
	u32 plla_misc;			/* _PLLA_MISC,              0x0bc */
	u32 pllu_base;			/* _PLLU_BASE,              0x0c0 */
	u32 _rsv4[2];			/*                      0x0c4-0c8 */
	u32 pllu_misc;			/* _PLLU_MISC,              0x0cc */
	u32 plld_base;			/* _PLLD_BASE,              0x0d0 */
	u32 _rsv5[2];			/*                      0x0d4-0d8 */
	u32 plld_misc;			/* _PLLD_MISC,              0x0dc */
	u32 pllx_base;			/* _PLLX_BASE,              0x0e0 */
	u32 pllx_misc;			/* _PLLX_MISC,              0x0e4 */
	u32 plle_base;			/* _PLLE_BASE,              0x0e8 */
	u32 plle_misc;			/* _PLLE_MISC,              0x0ec */
	u32 plls_base;			/* _PLLS_BASE,              0x0f0 */
	u32 plls_misc;			/* _PLLS_MISC,              0x0f4 */
	u32 _rsv6[2];			/*                      0x0f8-0fc */
        u32 clk_src_i2s1;		/* _CLK_SOURCE_I2S1,        0x100 */
        u32 clk_src_i2s2;		/* _CLK_SOURCE_I2S2,        0x104 */
        u32 clk_src_spdif_out;		/* _CLK_SOURCE_SPDIF_OUT,   0x108 */
        u32 clk_src_spdif_in;		/* _CLK_SOURCE_SPDIF_IN,    0x10c */
        u32 clk_src_pwm;		/* _CLK_SOURCE_PWM,         0x110 */
        u32 _rsv7;			/*                          0x114 */
        u32 clk_src_sbc2;		/* _CLK_SOURCE_SBC2,        0x118 */
        u32 clk_src_sbc3;		/* _CLK_SOURCE_SBC3,        0x11c */
        u32 _rsv8;			/*                          0x120 */
        u32 clk_src_i2c1;		/* _CLK_SOURCE_I2C1,        0x124 */
        u32 clk_src_i2c5;		/* _CLK_SOURCE_I2C5,        0x128 */
        u32 _rsv9[2];			/*                      0x12c-130 */
        u32 clk_src_sbc1;		/* _CLK_SOURCE_SBC1,        0x134 */
        u32 clk_src_disp1;		/* _CLK_SOURCE_DISP1,       0x138 */
        u32 clk_src_disp2;		/* _CLK_SOURCE_DISP2,       0x13c */
        u32 _rsv10[2];			/*                      0x140-144 */
        u32 clk_src_vi;			/* _CLK_SOURCE_VI,          0x148 */
        u32 _rsv11;			/*                          0x14c */
        u32 clk_src_sdmmc1;		/* _CLK_SOURCE_SDMMC1,      0x150 */
        u32 clk_src_sdmmc2;		/* _CLK_SOURCE_SDMMC2,      0x154 */
        u32 clk_src_g3d;		/* _CLK_SOURCE_G3D,         0x158 */
        u32 clk_src_g2d;		/* _CLK_SOURCE_G2D,         0x15c */
        u32 clk_src_ndflash;		/* _CLK_SOURCE_NDFLASH,     0x160 */
        u32 clk_src_sdmmc4;		/* _CLK_SOURCE_SDMMC4,      0x164 */
        u32 clk_src_vfir;		/* _CLK_SOURCE_VFIR,        0x168 */
        u32 clk_src_epp;		/* _CLK_SOURCE_EPP,         0x16c */
        u32 clk_src_mpe;		/* _CLK_SOURCE_MPE,         0x170 */
        u32 clk_src_hsi;		/* _CLK_SOURCE_HSI,         0x174 */
        u32 clk_src_uarta;		/* _CLK_SOURCE_UARTA,       0x178 */
        u32 clk_src_uartb;		/* _CLK_SOURCE_UARTB,       0x17c */
        u32 clk_src_host1x;		/* _CLK_SOURCE_HOST1X,      0x180 */
        u32 _rsv12[2];			/*                      0x184-188 */
        u32 clk_src_hdmi;		/* _CLK_SOURCE_HDMI,        0x18c */
        u32 _rsv13[2];			/*                      0x190-194 */
        u32 clk_src_i2c2;		/* _CLK_SOURCE_I2C2,        0x198 */
        u32 clk_src_emc;		/* _CLK_SOURCE_EMC,         0x19c */
        u32 clk_src_uartc;		/* _CLK_SOURCE_UARTC,       0x1a0 */
	u32 _rsv14;			/*                          0x1a4 */
        u32 clk_src_vi_sensor;		/* _CLK_SOURCE_VI_SENSOR,   0x1a8 */
        u32 _rsv15[2];			/*                      0x1ac-1b0 */
        u32 clk_src_sbc4;		/* _CLK_SOURCE_SBC4,        0x1b4 */
        u32 clk_src_i2c3;		/* _CLK_SOURCE_I2C3,        0x1b8 */
        u32 clk_src_sdmmc3;		/* _CLK_SOURCE_SDMMC3,      0x1bc */
        u32 clk_src_uartd;		/* _CLK_SOURCE_UARTD,       0x1c0 */
        u32 clk_src_uarte;		/* _CLK_SOURCE_UARTE,       0x1c4 */
        u32 clk_src_vde;		/* _CLK_SOURCE_VDE,         0x1c8 */
        u32 clk_src_owr;		/* _CLK_SOURCE_OWR,         0x1cc */
        u32 clk_src_nor;		/* _CLK_SOURCE_NOR,         0x1d0 */
        u32 clk_src_csite;		/* _CLK_SOURCE_CSITE,       0x1d4 */
        u32 clk_src_i2s0;		/* _CLK_SOURCE_I2S0,        0x1d8 */
        u32 clk_src_dtv;		/* _CLK_SOURCE_DTV,         0x1dc */
        u32 _rsv16[4];			/*                      0x1e0-1ec */
        u32 clk_src_msenc;		/* _CLK_SOURCE_MSENC,       0x1f0 */
        u32 clk_src_tsec;		/* _CLK_SOURCE_TSEC,        0x1f4 */
	u32 _rsv17;			/*                          0x1f8 */
        u32 clk_src_osc;		/* _CLK_SOURCE_OSC,         0x1fc */
	u32 _rsv18[32];			/*                      0x200-27c */
	u32 clk_out_enb_x;		/* _CLK_OUT_ENB_X_0,        0x280 */
	u32 clk_enb_x_set;		/* _CLK_ENB_X_SET_0,        0x284 */
	u32 clk_enb_x_clr;		/* _CLK_ENB_X_CLR_0,        0x288 */
	u32 rst_devices_x;		/* _RST_DEVICES_X_0,        0x28c */
	u32 rst_dev_x_set;		/* _RST_DEV_X_SET_0,        0x290 */
	u32 rst_dev_x_clr;		/* _RST_DEV_X_CLR_0,        0x294 */
	u32 _rsv19[23];			/*                      0x298-2f0 */
	u32 dfll_base;			/* _DFLL_BASE_0,            0x2f4 */
	u32 _rsv20[2];			/*                      0x2f8-2fc */
	u32 rst_dev_l_set;		/* _RST_DEV_L_SET           0x300 */
	u32 rst_dev_l_clr;		/* _RST_DEV_L_CLR           0x304 */
	u32 rst_dev_h_set;		/* _RST_DEV_H_SET           0x308 */
	u32 rst_dev_h_clr;		/* _RST_DEV_H_CLR           0x30c */
	u32 rst_dev_u_set;		/* _RST_DEV_U_SET           0x310 */
	u32 rst_dev_u_clr;		/* _RST_DEV_U_CLR           0x314 */
	u32 _rsv21[2];			/*                      0x318-31c */
	u32 clk_enb_l_set;		/* _CLK_ENB_L_SET           0x320 */
	u32 clk_enb_l_clr;		/* _CLK_ENB_L_CLR           0x324 */
	u32 clk_enb_h_set;		/* _CLK_ENB_H_SET           0x328 */
	u32 clk_enb_h_clr;		/* _CLK_ENB_H_CLR           0x32c */
	u32 clk_enb_u_set;		/* _CLK_ENB_U_SET           0x330 */
	u32 clk_enb_u_clk;		/* _CLK_ENB_U_CLR           0x334 */
	u32 _rsv22;			/*                          0x338 */
	u32 ccplex_pg_sm_ovrd;		/* _CCPLEX_PG_SM_OVRD,      0x33c */
	u32 rst_cpu_cmplx_set;		/* _RST_CPU_CMPLX_SET,      0x340 */
	u32 rst_cpu_cmplx_clr;		/* _RST_CPU_CMPLX_CLR,      0x344 */
	u32 clk_cpu_cmplx_set;		/* _CLK_CPU_CMPLX_SET,      0x348 */
	u32 clk_cpu_cmplx_clr;		/* _CLK_CPU_CMPLX_SET,      0x34c */
	u32 _rsv23[2];			/*                      0x350-354 */
	u32 rst_dev_v;			/* _RST_DEVICES_V,          0x358 */
	u32 rst_dev_w;			/* _RST_DEVICES_W,          0x35c */
	u32 clk_out_enb_v;		/* _CLK_OUT_ENB_V,          0x360 */
	u32 clk_out_enb_w;		/* _CLK_OUT_ENB_W,          0x364 */
	u32 cclkg_brst_pol;		/* _CCLKG_BURST_POLICY,     0x368 */
	u32 super_cclkg_div;		/* _SUPER_CCLKG_DIVIDER,    0x36c */
	u32 cclklp_brst_pol;		/* _CCLKLP_BURST_POLICY,    0x370 */
	u32 super_cclkp_div;		/* _SUPER_CCLKLP_DIVIDER,   0x374 */
	u32 clk_cpug_cmplx;		/* _CLK_CPUG_CMPLX,         0x378 */
	u32 clk_cpulp_cmplx;		/* _CLK_CPULP_CMPLX,        0x37c */
	u32 cpu_softrst_ctrl;		/* _CPU_SOFTRST_CTRL,       0x380 */
	u32 cpu_softrst_ctrl1;		/* _CPU_SOFTRST_CTRL1,      0x384 */
	u32 cpu_softrst_ctrl2;		/* _CPU_SOFTRST_CTRL2,      0x388 */
	u32 _rsv24[9];			/*                      0x38c-3ac */
	u32 clk_src_g3d2;		/* _CLK_SOURCE_G3D2,        0x3b0 */
	u32 clk_src_mselect;		/* _CLK_SOURCE_MSELECT,     0x3b4 */
	u32 clk_src_tsensor;		/* _CLK_SOURCE_TSENSOR,     0x3b8 */
	u32 clk_src_i2s3;		/* _CLK_SOURCE_I2S3,        0x3bc */
	u32 clk_src_i2s4;		/* _CLK_SOURCE_I2S4,        0x3c0 */
	u32 clk_src_i2c4;		/* _CLK_SOURCE_I2C4,        0x3c4 */
	u32 clk_src_sbc5;		/* _CLK_SOURCE_SBC5,        0x3c8 */
	u32 clk_src_sbc6;		/* _CLK_SOURCE_SBC6,        0x3cc */
	u32 clk_src_audio;		/* _CLK_SOURCE_AUDIO,       0x3d0 */
	u32 _rsv25;			/*                          0x3d4 */
	u32 clk_src_dam0;		/* _CLK_SOURCE_DAM0,        0x3d8 */
	u32 clk_src_dam1;		/* _CLK_SOURCE_DAM1,        0x3dc */
	u32 clk_src_dam2;		/* _CLK_SOURCE_DAM2,        0x3e0 */
	u32 clk_src_hda2codec_2x;	/* _CLK_SOURCE_HDA2CODEC_2X,0x3e4 */
	u32 clk_src_actmon;		/* _CLK_SOURCE_ACTMON,      0x3e8 */
	u32 clk_src_extperiph1;		/* _CLK_SOURCE_EXTPERIPH1,  0x3ec */
	u32 clk_src_extperiph2;		/* _CLK_SOURCE_EXTPERIPH2,  0x3f0 */
	u32 clk_src_extperiph3;		/* _CLK_SOURCE_EXTPERIPH3,  0x3f4 */
	u32 clk_src_nand_speed;		/* _CLK_SOURCE_NAND_SPEED,  0x3f8 */
	u32 clk_src_i2c_slow;		/* _CLK_SOURCE_I2C_SLOW,    0x3fc */
	u32 clk_src_sys;		/* _CLK_SOURCE_SYS,         0x400 */
	u32 _rsv26[7];			/*                      0x404-41c */
	u32 clk_src_sata_oob;		/* _CLK_SOURCE_SATA_OOB,    0x420 */
	u32 clk_src_sata;		/* _CLK_SOURCE_SATA,        0x424 */
	u32 clk_src_hda;		/* _CLK_SOURCE_HDA,         0x428 */
	u32 _rsv27;			/*                          0x42c */
	u32 rst_dev_v_set;		/* _RST_DEV_V_SET,          0x430 */
	u32 rst_dev_v_clr;		/* _RST_DEV_V_CLR,          0x434 */
	u32 rst_dev_w_set;		/* _RST_DEV_W_SET,          0x438 */
	u32 rst_dev_w_clr;		/* _RST_DEV_W_CLR,          0x43c */
	u32 clk_enb_v_set;		/* _CLK_ENB_V_SET,          0x440 */
	u32 clk_enb_v_clr;		/* _CLK_ENB_V_CLR,          0x444 */
	u32 clk_enb_w_set;		/* _CLK_ENB_W_SET,          0x448 */
	u32 clk_enb_w_clr;		/* _CLK_ENB_W_CLR,          0x44c */
	u32 rst_cpug_cmplx_set;		/* _RST_CPUG_CMPLX_SET,     0x450 */
	u32 rst_cpug_cmplx_clr;		/* _RST_CPUG_CMPLX_CLR,     0x454 */
	u32 rst_cpulp_cmplx_set;	/* _RST_CPULP_CMPLX_SET,    0x458 */
	u32 rst_cpulp_cmplx_clr;	/* _RST_CPULP_CMPLX_CLR,    0x45C */
	u32 clk_cpug_cmplx_set;		/* _CLK_CPUG_CMPLX_SET,     0x460 */
	u32 clk_cpug_cmplx_clr;		/* _CLK_CPUG_CMPLX_CLR,     0x464 */
	u32 clk_cpulp_cmplx_set;	/* _CLK_CPULP_CMPLX_SET,    0x468 */
	u32 clk_cpulp_cmplx_clr;	/* _CLK_CPULP_CMPLX_CLR,    0x46c */
	u32 cpu_cmplx_status;		/* _CPU_CMPLX_STATUS,       0x470 */
	u32 _rsv28;			/*                          0x474 */
	u32 intstatus;			/* _INTSTATUS,              0x478 */
	u32 intmask;			/* _INTMASK,                0x47c */
	u32 utmip_pll_cfg0;		/* _UTMIP_PLL_CFG0,         0x480 */
	u32 utmip_pll_cfg1;		/* _UTMIP_PLL_CFG1,         0x484 */
	u32 utmip_pll_cfg2;		/* _UTMIP_PLL_CFG2,         0x488 */
	u32 plle_aux;			/* _PLLE_AUX,               0x48c */
	u32 sata_pll_cfg0;		/* _SATA_PLL_CFG0,          0x490 */
	u32 sata_pll_cfg1;		/* _SATA_PLL_CFG1,          0x494 */
	u32 pcie_pll_cfg0;		/* _PCIE_PLL_CFG0,          0x498 */
	u32 prog_audio_dly_clk;		/* _PROG_AUDIO_DLY_CLK,     0x49c */
	u32 audio_sync_clk_i2s0;	/* _AUDIO_SYNC_CLK_I2S0,    0x4a0 */
	u32 audio_sync_clk_i2s1;	/* _AUDIO_SYNC_CLK_I2S1,    0x4a4 */
	u32 audio_sync_clk_i2s2;	/* _AUDIO_SYNC_CLK_I2S2,    0x4a8 */
	u32 audio_sync_clk_i2s3;	/* _AUDIO_SYNC_CLK_I2S3,    0x4ac */
	u32 audio_sync_clk_i2s4;	/* _AUDIO_SYNC_CLK_I2S4,    0x4b0 */
	u32 audio_sync_clk_spdif;	/* _AUDIO_SYNC_CLK_SPDIF,   0x4b4 */
	u32 plld2_base;			/* _PLLD2_BASE,             0x4b8 */
	u32 plld2_misc;			/* _PLLD2_MISC,             0x4bc */
	u32 utmip_pll_cfg3;		/* _UTMIP_PLL_CFG3,         0x4c0 */
	u32 pllrefe_base;		/* _PLLREFE_BASE,           0x4c4 */
	u32 pllrefe_misc;		/* _PLLREFE_MISC,           0x4c8 */
	u32 _rsv29[7];			/*                      0x4cc-4e4 */
	u32 pllc2_base;			/* _PLLC2_BASE,             0x4e8 */
	u32 pllc2_misc0;		/* _PLLC2_MISC_0,           0x4ec */
	u32 pllc2_misc1;		/* _PLLC2_MISC_1,           0x4f0 */
	u32 pllc2_misc2;		/* _PLLC2_MISC_2,           0x4f4 */
	u32 pllc2_misc3;		/* _PLLC2_MISC_3,           0x4f8 */
	u32 pllc3_base;			/* _PLLC3_BASE,             0x4fc */
	u32 pllc3_misc0;		/* _PLLC3_MISC_0,           0x500 */
	u32 pllc3_misc1;		/* _PLLC3_MISC_1,           0x504 */
	u32 pllc3_misc2;		/* _PLLC3_MISC_2,           0x508 */
	u32 pllc3_misc3;		/* _PLLC3_MISC_3,           0x50c */
	u32 pllx_misc1;			/* _PLLX_MISC_1,            0x510 */
	u32 pllx_misc2;			/* _PLLX_MISC_2,            0x514 */
	u32 pllx_misc3;			/* _PLLX_MISC_3,            0x518 */
	u32 xusbio_pll_cfg0;		/* _XUSBIO_PLL_CFG0,        0x51c */
	u32 xusbio_pll_cfg1;		/* _XUSBIO_PLL_CFG1,        0x520 */
	u32 plle_aux1;			/* _PLLE_AUX1,              0x524 */
	u32 pllp_reshift;		/* _PLLP_RESHIFT,           0x528 */
	u32 utmipll_hw_pwrdn_cfg0;	/* _UTMIPLL_HW_PWRDN_CFG0,  0x52c */
	u32 pllu_hw_pwrdn_cfg0;		/* _PLLU_HW_PWRDN_CFG0,     0x530 */
	u32 xusb_pll_cfg0;		/* _XUSB_PLL_CFG0,          0x534 */
	u32 _rsv30;			/*                          0x538 */
	u32 clk_cpu_misc;		/* _CLK_CPU_MISC,           0x53c */
	u32 clk_cpug_misc;		/* _CLK_CPUG_MISC,          0x540 */
	u32 clk_cpulp_misc;		/* _CLK_CPULP_MISC,         0x544 */
	u32 pllx_hw_ctrl_cfg;		/* _PLLX_HW_CTRL_CFG,       0x548 */
	u32 pllx_sw_ramp_cfg;		/* _PLLX_SW_RAMP_CFG,       0x54c */
	u32 pllx_hw_ctrl_status;	/* _PLLX_HW_CTRL_STATUS,    0x550 */
	u32 _rsv31;			/*                          0x554 */
	u32 super_gr3d_clk_div;		/* _SUPER_GR3D_CLK_DIVIDER, 0x558 */
	u32 spare_reg0;			/* _SPARE_REG0,             0x55c */
	u32 _rsv32[40];			/*                      0x560-5fc */
	u32 clk_src_xusb_core_host;	/* _CLK_SOURCE_XUSB_CORE_HOST 0x600 */
	u32 clk_src_xusb_falcon;	/* _CLK_SOURCE_XUSB_FALCON  0x604 */
	u32 clk_src_xusb_fs;		/* _CLK_SOURCE_XUSB_FS      0x608 */
	u32 clk_src_xusb_core_dev;	/* _CLK_SOURCE_XUSB_CORE_DEV 0x60c */
	u32 clk_src_xusb_ss;		/* _CLK_SOURCE_XUSB_SS      0x610 */
	u32 clk_src_cilab;		/* _CLK_SOURCE_CILAB        0x614 */
	u32 clk_src_cilcd;		/* _CLK_SOURCE_CILCD        0x618 */
	u32 clk_src_cile;		/* _CLK_SOURCE_CILE         0x61c */
	u32 clk_src_dsia_lp;		/* _CLK_SOURCE_DSIA_LP      0x620 */
	u32 clk_src_dsib_lp;		/* _CLK_SOURCE_DSIB_LP      0x624 */
	u32 clk_src_entropy;		/* _CLK_SOURCE_ENTROPY      0x628 */
	u32 clk_src_dvfs_ref;		/* _CLK_SOURCE_DVFS_REF     0x62c */
	u32 clk_src_dvfs_soc;		/* _CLK_SOURCE_DVFS_SOC     0x630 */
	u32 clk_src_traceclkin;		/* _CLK_SOURCE_TRACECLKIN   0x634 */
	u32 clk_src_adx0;		/* _CLK_SOURCE_ADX0         0x638 */
	u32 clk_src_amx0;		/* _CLK_SOURCE_AMX0         0x63c */
	u32 clk_src_emc_latency;	/* _CLK_SOURCE_EMC_LATENCY  0x640 */
	u32 clk_src_soc_therm;		/* _CLK_SOURCE_SOC_THERM    0x644 */
};

#define TEGRA_DEV_L			0
#define TEGRA_DEV_H			1
#define TEGRA_DEV_U			2
#define TEGRA_DEV_V			0
#define TEGRA_DEV_W			1

#define SIMPLE_PLLX		(CLOCK_ID_XCPU - CLOCK_ID_FIRST_SIMPLE)

/* Bits to enable/reset modules */
#define CLK_ENB_CPU			(1 << 0)
#define SWR_TRIG_SYS_RST		(1 << 2)
#define SWR_CSITE_RST			(1 << 9)
#define CLK_ENB_CSITE			(1 << 9)

/* CRC_SUPER_CCLK_DIVIDER_0 0x24 */
#define SUPER_CDIV_ENB_ENABLE		(1 << 31)

/* CLK_RST_CONTROLLER_MISC_CLK_ENB 0x48 */
#define EN_PPSB_STOPCLK			(1 << 0)

/* CLK_RST_CONTROLLER_CLK_CPU_CMPLX_0 (0x4C) */
#define CPU3_CLK_STP_SHIFT		11
#define CPU2_CLK_STP_SHIFT		10
#define CPU1_CLK_STP_SHIFT		9
#define CPU0_CLK_STP_SHIFT		8
#define CPU0_CLK_STP_MASK		(1U << CPU0_CLK_STP_SHIFT)

/* CRC_OSC_CTRL_0 0x50 */
#define OSC_CTRL_OSC_FREQ		(0xf << 28)
#define OSC_CTRL_OSC_FREQ_SHIFT		28
#define OSC_FREQ_OSC13			0	/* 13.0MHz */
#define OSC_FREQ_OSC19P2		4	/* 19.2MHz */
#define OSC_FREQ_OSC12			8	/* 12.0MHz */
#define OSC_FREQ_OSC26			12	/* 26.0MHz */
#define OSC_FREQ_OSC16P8		1	/* 16.8MHz */
#define OSC_FREQ_OSC38P4		5	/* 38.4MHz */
#define OSC_FREQ_OSC48			9	/* 48.0MHz */

/* CLK_RST_CONTROLLER_PLLx_BASE_0 */
#define PLL_BYPASS_SHIFT		31
#define PLL_BYPASS_MASK			(1U << PLL_BYPASS_SHIFT)

#define PLL_ENABLE_SHIFT		30
#define PLL_ENABLE_MASK			(1U << PLL_ENABLE_SHIFT)

#define PLL_BASE_OVRRIDE_MASK		(1U << 28)
#define PLL_BASE_LOCK_MASK		(1U << 27)

#define PLL_DIVP_SHIFT			20
#define PLL_DIVP_MASK			(7U << PLL_DIVP_SHIFT)

#define PLL_DIVN_SHIFT			8
#define PLL_DIVN_MASK			(0x3ffU << PLL_DIVN_SHIFT)

#define PLL_DIVM_SHIFT			0
#define PLL_DIVM_MASK			(0x1f << PLL_DIVM_SHIFT)

/* SPECIAL CASE: PLLM, PLLC and PLLX use different-sized fields here */
#define PLLCMX_DIVP_MASK		(0xfU << PLL_DIVP_SHIFT)
#define PLLCMX_DIVN_MASK		(0xffU << PLL_DIVN_SHIFT)
#define PLLCMX_DIVM_MASK		(0xffU << PLL_DIVM_SHIFT)

/* CLK_RST_CONTROLLER_PLLx_OUTx_0 */
#define PLL_OUT_RSTN			(1 << 0)
#define PLL_OUT_CLKEN			(1 << 1)
#define PLL_OUT_OVRRIDE			(1 << 2)

#define PLL_OUT_RATIO_SHIFT		8
#define PLL_OUT_RATIO_MASK		(0xffU << PLL_OUT_RATIO_SHIFT)

#define PLL_OUT2_RSTN			(1 << 16)
#define PLL_OUT2_CLKEN			(1 << 17)
#define PLL_OUT2_OVRRIDE		(1 << 18)

#define PLL_OUT2_RATIO_SHIFT		24
#define PLL_OUT2_RATIO_MASK		(0xffU << PLL_OUT2_RATIO_SHIFT)

/* CLK_RST_CONTROLLER_PLLx_MISC_0 */
#define PLL_DCCON_SHIFT			20
#define PLL_DCCON_MASK			(1U << PLL_DCCON_SHIFT)

#define PLL_LOCK_ENABLE_SHIFT		18
#define PLL_LOCK_ENABLE_MASK		(1U << PLL_LOCK_ENABLE_SHIFT)

#define PLL_CPCON_SHIFT			8
#define PLL_CPCON_MASK			(15U << PLL_CPCON_SHIFT)

#define PLL_LFCON_SHIFT			4
#define PLL_LFCON_MASK			(15U << PLL_LFCON_SHIFT)

#define PLLU_VCO_FREQ_SHIFT		20
#define PLLU_VCO_FREQ_MASK		(1U << PLLU_VCO_FREQ_SHIFT)

#define PLLP_OUT1_OVR			(1 << 2)
#define PLLP_OUT2_OVR			(1 << 18)
#define PLLP_OUT3_OVR			(1 << 2)
#define PLLP_OUT4_OVR			(1 << 18)
#define PLLP_OUT1_RATIO			8
#define PLLP_OUT2_RATIO			24
#define PLLP_OUT3_RATIO			8
#define PLLP_OUT4_RATIO			24

#define PLLP_OUT3_RSTN_DIS		(1 << 0)
#define PLLP_OUT3_RSTN_EN		(0 << 0)
#define PLLP_OUT3_CLKEN			(1 << 1)
#define PLLP_OUT3_OVRRIDE		(1 << 2)
#define PLLP_OUT4_RSTN_DIS		(1 << 16)
#define PLLP_OUT4_RSTN_EN		(0 << 16)
#define PLLP_OUT4_CLKEN			(1 << 17)
#define PLLP_OUT4_OVRRIDE		(1 << 18)

enum {
	IN_408_OUT_204_DIVISOR = 2,
	IN_408_OUT_102_DIVISOR = 6,
	IN_408_OUT_48_DIVISOR = 15,
	IN_408_OUT_9_6_DIVISOR = 83,
};

/* CRC_PLLP_MISC_0 0xac */
#define PLLP_MISC_PLLP_CPCON_8		(8 << 8)
#define PLLP_MISC_PLLP_LOCK_ENABLE	(1 << 18)

/* CRC_PLLU_BASE_0 0xc0 */
#define PLLU_BYPASS_ENABLE		(1 << 31)
#define PLLU_ENABLE_ENABLE		(1 << 30)
#define PLLU_REF_DIS_REF_DISABLE	(1 << 29)
#define PLLU_OVERRIDE_ENABLE		(1 << 24)

/* CRC_PLLU_MISC_0 0xcc */
#define PLLU_LOCK_ENABLE_ENABLE		(1 << 22)

/* PLLX_BASE_0 0xe0 */
#define PLLX_BASE_PLLX_ENABLE		(1 << 30)

/* CLK_RST_CONTROLLER_PLLX_MISC_3 */
#define PLLX_IDDQ_SHIFT			3
#define PLLX_IDDQ_MASK			(1U << PLLX_IDDQ_SHIFT)

/* CLK_RST_CONTROLLER_OSC_CTRL_0 0x50 */
#define OSC_XOE_SHIFT			0
#define OSC_XOE_MASK			(1 << OSC_XOE_SHIFT)
#define OSC_XOE_ENABLE			(1 << OSC_XOE_SHIFT)
#define OSC_XOBP_SHIFT			1
#define OSC_XOBP_MASK			(1U << OSC_XOBP_SHIFT)
#define OSC_XOFS_SHIFT			4
#define OSC_XOFS_MASK			(0x3F << OSC_XOFS_SHIFT)
#define OSC_DRIVE_STRENGTH		7

/*
 * CLK_RST_CONTROLLER_CLK_SOURCE_x_OUT_0 - the mask here is normally 8 bits
 * but can be 16. We could use knowledge we have to restrict the mask in
 * the 8-bit cases (the divider_bits value returned by
 * get_periph_clock_source()) but it does not seem worth it since the code
 * already checks the ranges of values it is writing, in clk_get_divider().
 */
#define OUT_CLK_DIVISOR_SHIFT		0
#define OUT_CLK_DIVISOR_MASK		(0xffff << OUT_CLK_DIVISOR_SHIFT)

#define OUT_CLK_SOURCE_SHIFT		30
#define OUT_CLK_SOURCE_MASK		(3U << OUT_CLK_SOURCE_SHIFT)

#define OUT_CLK_SOURCE3_SHIFT		29
#define OUT_CLK_SOURCE3_MASK		(7U << OUT_CLK_SOURCE3_SHIFT)

#define OUT_CLK_SOURCE4_SHIFT		28
#define OUT_CLK_SOURCE4_MASK		(15U << OUT_CLK_SOURCE4_SHIFT)

/* CLK_RST_CONTROLLER_SCLK_BURST_POLICY */
#define SCLK_SYS_STATE_SHIFT		28U
#define SCLK_SYS_STATE_MASK		(15U << SCLK_SYS_STATE_SHIFT)
enum {
	SCLK_SYS_STATE_STDBY,
	SCLK_SYS_STATE_IDLE,
	SCLK_SYS_STATE_RUN,
	SCLK_SYS_STATE_IRQ = 4U,
	SCLK_SYS_STATE_FIQ = 8U,
};
#define SCLK_COP_FIQ_MASK		(1 << 27)
#define SCLK_CPU_FIQ_MASK		(1 << 26)
#define SCLK_COP_IRQ_MASK		(1 << 25)
#define SCLK_CPU_IRQ_MASK		(1 << 24)

#define SCLK_SWAKEUP_FIQ_SOURCE_SHIFT		12
#define SCLK_SWAKEUP_FIQ_SOURCE_MASK		\
		(7 << SCLK_SWAKEUP_FIQ_SOURCE_SHIFT)
#define SCLK_SWAKEUP_IRQ_SOURCE_SHIFT		8
#define SCLK_SWAKEUP_IRQ_SOURCE_MASK		\
		(7 << SCLK_SWAKEUP_FIQ_SOURCE_SHIFT)
#define SCLK_SWAKEUP_RUN_SOURCE_SHIFT		4
#define SCLK_SWAKEUP_RUN_SOURCE_MASK		\
		(7 << SCLK_SWAKEUP_FIQ_SOURCE_SHIFT)
#define SCLK_SWAKEUP_IDLE_SOURCE_SHIFT		0

#define SCLK_SWAKEUP_IDLE_SOURCE_MASK		\
		(7 << SCLK_SWAKEUP_FIQ_SOURCE_SHIFT)
enum {
	SCLK_SOURCE_CLKM,
	SCLK_SOURCE_PLLC_OUT1,
	SCLK_SOURCE_PLLP_OUT4,
	SCLK_SOURCE_PLLP_OUT3,
	SCLK_SOURCE_PLLP_OUT2,
	SCLK_SOURCE_CLKD,
	SCLK_SOURCE_CLKS,
	SCLK_SOURCE_PLLM_OUT1,
};

#define SCLK_SWAKE_FIQ_SRC_CLKM		(0 << 12)
#define SCLK_SWAKE_IRQ_SRC_CLKM		(0 << 8)
#define SCLK_SWAKE_RUN_SRC_CLKM		(0 << 4)
#define SCLK_SWAKE_IDLE_SRC_CLKM	(0 << 0)
#define SCLK_SWAKE_FIQ_SRC_PLLM_OUT1	(7 << 12)
#define SCLK_SWAKE_IRQ_SRC_PLLM_OUT1	(7 << 8)
#define SCLK_SWAKE_RUN_SRC_PLLM_OUT1	(7 << 4)
#define SCLK_SWAKE_IDLE_SRC_PLLM_OUT1	(7 << 0)

/* CLK_RST_CONTROLLER_SUPER_SCLK_DIVIDER 0x2c */
#define SUPER_SCLK_ENB_SHIFT		31U
#define SUPER_SCLK_ENB_MASK		(1U << 31)
#define SUPER_SCLK_DIVIDEND_SHIFT	8
#define SUPER_SCLK_DIVIDEND_MASK	(0xff << SUPER_SCLK_DIVIDEND_SHIFT)
#define SUPER_SCLK_DIVISOR_SHIFT	0
#define SUPER_SCLK_DIVISOR_MASK		(0xff << SUPER_SCLK_DIVISOR_SHIFT)

/* CLK_RST_CONTROLLER_CLK_SYSTEM_RATE 0x30 */
#define CLK_SYS_RATE_HCLK_DISABLE_SHIFT 7
#define CLK_SYS_RATE_HCLK_DISABLE_MASK  (1 << CLK_SYS_RATE_HCLK_DISABLE_SHIFT)
#define CLK_SYS_RATE_AHB_RATE_SHIFT     4
#define CLK_SYS_RATE_AHB_RATE_MASK      (3 << CLK_SYS_RATE_AHB_RATE_SHIFT)
#define CLK_SYS_RATE_PCLK_DISABLE_SHIFT 3
#define CLK_SYS_RATE_PCLK_DISABLE_MASK  (1 << CLK_SYS_RATE_PCLK_DISABLE_SHIFT)
#define CLK_SYS_RATE_APB_RATE_SHIFT     0
#define CLK_SYS_RATE_APB_RATE_MASK      (3 << CLK_SYS_RATE_AHB_RATE_SHIFT)

/* CRC_CLK_SOURCE_MSELECT_0 0x3b4 */
#define MSELECT_CLK_SRC_PLLP_OUT0	(0 << 29)

/* CRC_CLK_ENB_V_SET_0 0x440 */
#define SET_CLK_ENB_CPUG_ENABLE		(1 << 0)
#define SET_CLK_ENB_CPULP_ENABLE	(1 << 1)
#define SET_CLK_ENB_MSELECT_ENABLE	(1 << 3)

/* CLK_RST_CONTROLLER_UTMIP_PLL_CFG1_0 0x484 */
#define PLLU_POWERDOWN			(1 << 16)
#define PLL_ENABLE_POWERDOWN		(1 << 14)
#define PLL_ACTIVE_POWERDOWN		(1 << 12)

/* CLK_RST_CONTROLLER_UTMIP_PLL_CFG2_0 0x488 */
#define UTMIP_FORCE_PD_SAMP_C_POWERDOWN	(1 << 4)
#define UTMIP_FORCE_PD_SAMP_B_POWERDOWN	(1 << 2)
#define UTMIP_FORCE_PD_SAMP_A_POWERDOWN	(1 << 0)

// CCLK_BRST_POL
enum {
	CRC_CCLK_BRST_POL_PLLX_OUT0 = 0x8,
	CRC_CCLK_BRST_POL_CPU_STATE_RUN = 0x2
};

// SUPER_CCLK_DIVIDER
enum {
	CRC_SUPER_CCLK_DIVIDER_SUPER_CDIV_ENB = 1 << 31
};

// CLK_CPU_CMPLX_CLR
enum {
	CRC_CLK_CLR_CPU0_STP = 0x1 << 8,
	CRC_CLK_CLR_CPU1_STP = 0x1 << 9,
	CRC_CLK_CLR_CPU2_STP = 0x1 << 10,
	CRC_CLK_CLR_CPU3_STP = 0x1 << 11
};

// RST_CPUG_CMPLX_CLR
enum {
	CRC_RST_CPUG_CLR_CPU0 = 0x1 << 0,
	CRC_RST_CPUG_CLR_CPU1 = 0x1 << 1,
	CRC_RST_CPUG_CLR_CPU2 = 0x1 << 2,
	CRC_RST_CPUG_CLR_CPU3 = 0x1 << 3,
	CRC_RST_CPUG_CLR_DBG0 = 0x1 << 12,
	CRC_RST_CPUG_CLR_DBG1 = 0x1 << 13,
	CRC_RST_CPUG_CLR_DBG2 = 0x1 << 14,
	CRC_RST_CPUG_CLR_DBG3 = 0x1 << 15,
	CRC_RST_CPUG_CLR_CORE0 = 0x1 << 16,
	CRC_RST_CPUG_CLR_CORE1 = 0x1 << 17,
	CRC_RST_CPUG_CLR_CORE2 = 0x1 << 18,
	CRC_RST_CPUG_CLR_CORE3 = 0x1 << 19,
	CRC_RST_CPUG_CLR_CX0 = 0x1 << 20,
	CRC_RST_CPUG_CLR_CX1 = 0x1 << 21,
	CRC_RST_CPUG_CLR_CX2 = 0x1 << 22,
	CRC_RST_CPUG_CLR_CX3 = 0x1 << 23,
	CRC_RST_CPUG_CLR_L2 = 0x1 << 24,
	CRC_RST_CPUG_CLR_NONCPU = 0x1 << 29,
	CRC_RST_CPUG_CLR_PDBG = 0x1 << 30,
};

#endif	/* _TEGRA124_CLK_RST_H_ */
