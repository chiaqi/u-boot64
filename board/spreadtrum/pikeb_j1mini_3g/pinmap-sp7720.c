/*
 * Copyright (C) 2012 Spreadtrum Communications Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

 /*
 * Version J1 MINI 3G PIKE S5N6420 SC2331 REV00
 */
 
#include <asm/io.h>
#include <asm/arch/pinmap.h>
#define BIT_PIN_SLP_ALL  (BIT_PIN_SLP_AP|BIT_PIN_SLP_CP0|BIT_PIN_SLP_CP1|BIT_PIN_SLP_CP2)
#define BIT_PIN_SLP_DCP  (BIT_PIN_SLP_CP0|BIT_PIN_SLP_CP1)
static pinmap_t pinmap[]={

{REG_PIN_CTRL0,0x01},
{REG_PIN_CTRL1,0x0},
{REG_PIN_CTRL2,0x0},
{REG_PIN_CTRL3,0x0},
{REG_PIN_CTRL4,0x0},
{REG_PIN_CTRL5,0x0},
{REG_PIN_CTRL6,0x0},
{REG_PIN_CTRL7,0x000f0000},
{REG_PIN_RFSDA0,              BIT_PIN_SLP_CP0|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_NUL|BIT_PIN_SLP_Z},//RF_SPI_DATA    
{REG_PIN_RFSCK0,              BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_Z},//RF_SPI_CLK
{REG_PIN_RFSEN0,              BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_Z},//RF_SPI_EN
{REG_PIN_RFCTL0,              BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//PA_MODE
{REG_PIN_RFCTL1,              BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//BS1
{REG_PIN_RFCTL2,              BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//PA_EN_B8
{REG_PIN_RFCTL3,              BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//BS2
{REG_PIN_RFCTL4,              BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//PA_EN_B5
{REG_PIN_RFCTL5,              BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//PA_EN_B2
{REG_PIN_RFCTL6,              BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//PA_EN_B1
{REG_PIN_RFCTL7,              BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//PA_EN_GSM
{REG_PIN_RFCTL8,              BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//PA_VMODE0
{REG_PIN_RFCTL9,              BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//PA_VMODE1
{REG_PIN_RFCTL10,             BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//NC
{REG_PIN_RFCTL11,             BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//NC
{REG_PIN_RFCTL12,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//WLAN_PWR_ON
{REG_PIN_RFCTL13,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//BT_WAKE_OUT     Marlin GPIO2
{REG_PIN_RFCTL14,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//BT_WAKE_IN      Marlin GPIO1
{REG_PIN_RFCTL15,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//WLAN_WAKE_OUT   Marlin GPIO0
{REG_PIN_PTEST,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball
{REG_PIN_ANA_INT,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball
{REG_PIN_EXT_RST_B,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_Z},//EXT_RST_N
{REG_PIN_CHIP_SLEEP,          BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball
{REG_PIN_XTL_BUF_EN0,         BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball
{REG_PIN_XTL_BUF_EN1,         BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball
{REG_PIN_CLK_32K,             BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball
{REG_PIN_AUD_SCLK,            BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//No Ball
{REG_PIN_AUD_ADD0,            BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//No Ball
{REG_PIN_AUD_ADSYNC,          BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//No Ball
{REG_PIN_AUD_DAD1,            BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//No Ball
{REG_PIN_AUD_DAD0,            BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//No Ball
{REG_PIN_AUD_DASYNC,          BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//No Ball
{REG_PIN_ADI_D,               BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//No Ball
{REG_PIN_ADI_SYNC,            BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//No Ball
{REG_PIN_ADI_SCLK,            BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//No Ball
{REG_PIN_LCD_RSTN,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//LCM_RST_N
{REG_PIN_LCD_FMARK,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//LCM_FLM
{REG_PIN_SPI1_CSN,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SPI1_DO,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SPI1_DI,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SPI1_CLK,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_NFWPN,               BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(5)|BITS_PIN_AF(1)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D(0)      GPIO146
{REG_PIN_NFRBN,               BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(5)|BITS_PIN_AF(1)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//MOVI_SD_CMD    GPIO147
{REG_PIN_NFCLE,               BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(5)|BITS_PIN_AF(1)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D(6)      GPIO148
{REG_PIN_NFALE,               BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(5)|BITS_PIN_AF(1)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D(7)      GPIO149
{REG_PIN_NFREN,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(6)|BITS_PIN_AF(1)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//MOVI_SD_CLK   GPIO152
{REG_PIN_NFD4,                BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(5)|BITS_PIN_AF(1)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D(5)      GPIO158
{REG_PIN_NFD5,                BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(5)|BITS_PIN_AF(1)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D(4)      GPIO159
{REG_PIN_NFD6,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//HW_REV0       GPIO180
{REG_PIN_NFD7,                BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(5)|BITS_PIN_AF(1)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D(3)      GPIO161
{REG_PIN_NFD10,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(1)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_RST       GPIO164
{REG_PIN_NFD11,               BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(5)|BITS_PIN_AF(1)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D(1)      GPIO165
{REG_PIN_NFD14,               BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(5)|BITS_PIN_AF(1)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D(2)      GPIO168
{REG_PIN_NFCEN0,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//LCD_ESD_DET
{REG_PIN_NFCEN1,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_NFWEN,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_NFD0,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_NFD1,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_NFD2,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_NFD3,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_NFD8,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//HW_REV1
{REG_PIN_NFD9,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//HW_REV2
{REG_PIN_NFD12,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_NFD13,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_NFD15,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//CHG_EN
{REG_PIN_CCIRMCLK,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_Z},//CAM_MCLK            CAMCLK
{REG_PIN_CCIRRST,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//CAM_RST            CAMRST
{REG_PIN_CCIRPD1,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//VTCAM_STBY         CAMPD1
{REG_PIN_CCIRPD0,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//CAM_STBY           CAMPD0
{REG_PIN_SCL0,                BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//CAM_SCL_1P8     
{REG_PIN_SDA0,                BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//CAM_SDA_1P8     
{REG_PIN_KEYOUT0,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//KEY0_OUT
{REG_PIN_KEYOUT1,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_KEYOUT2,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_KEYIN0,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//KEY0_IN
{REG_PIN_KEYIN1,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//KEY1_IN
{REG_PIN_KEYIN2,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//KEY2_IN
{REG_PIN_CLK_AUX0,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//SLEEP_CLK_32K      
{REG_PIN_CLK_AUX1,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(1)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//LCD_BL_EN          PWMA
{REG_PIN_IIS0DI,              BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//FM_I2S_D_IN       FM_RXIQD0
{REG_PIN_IIS0DO,              BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPD|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//FM_I2S_D_OUT      FM_RXIQD1
{REG_PIN_IIS0CLK,             BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//FM_I2S_BCLK       WIFI_AGC_GAIN0
{REG_PIN_IIS0LRCK,            BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//FM_I2S_LRCK       WIFI_AGC_GAIN1
{REG_PIN_MTDO,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//AP_JTAG_TDO
{REG_PIN_MTDI,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//AP_JTAG_TDI
{REG_PIN_MTCK,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//AP_JTAG_TCK
{REG_PIN_MTMS,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//AP_JTAG_TMS
{REG_PIN_MTRST_N,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//AP_JTAG_RST_N
{REG_PIN_TRACECLK,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//VTCAM_RST          GPIO230
{REG_PIN_TRACECTRL,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//SIM_MODE           GPIO231   By 10k pullup to VDD_1P8
{REG_PIN_TRACEDAT0,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//TOUCH_IRQ          GPIO232   
{REG_PIN_TRACEDAT1,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//ADC_CTRL           GPIO233
{REG_PIN_TRACEDAT2,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//CHG_STATE          GPIO234   By 100k pullup to VDD_1P8
{REG_PIN_TRACEDAT3,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//CHG_DET            GPIO235   By 100k pullup to VDD_1P8
{REG_PIN_TRACEDAT4,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//GPS_RST            GPIO236 
{REG_PIN_TRACEDAT5,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//GPS_EN             GPIO237   By 180k pullup to VDD_1P8
{REG_PIN_TRACEDAT6,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//ACC_INT_N          GPIO238
{REG_PIN_TRACEDAT7,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC                  GPIO239
{REG_PIN_U0TXD,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//BT_UART_RXD         WBTSDA
{REG_PIN_U0RXD,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//BT_UART_TXD         WBTSCK
{REG_PIN_U0CTS,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//BT_UART_RTS_N       WBTSEN
{REG_PIN_U0RTS,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//BT_UART_CTS_N
{REG_PIN_U1TXD,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//AP_UART_TXD
{REG_PIN_U1RXD,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//AP_UART_RXD
{REG_PIN_U2TXD,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//GPS_UART_TXD
{REG_PIN_U2RXD,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//GPS_UART_RXD
{REG_PIN_U2CTS,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//GPS_UART_CTS
{REG_PIN_U2RTS,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//GPS_UART_RTS
{REG_PIN_SCL2,                BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//SENSOR_SCL_1P8          By 2.2k pullup to VDD_1P8
{REG_PIN_SDA2,                BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//SENSOR_SDA_1P8          By 2.2k pullup to VDD_1P8
{REG_PIN_EXTINT0,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//T_FLASH_DET            By 100k pullup to VDD_1P8
{REG_PIN_EXTINT1,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SCL1,                BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//TSP_SCL_1P8             By 2.2k pullup to VDD_1P8
{REG_PIN_SDA1,                BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//TSP_SDA_1P8             By 2.2k pullup to VDD_1P8
{REG_PIN_SIMCLK0,             BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//SIM_CLK  
{REG_PIN_SIMDA0,              BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//SIM_DATA    
{REG_PIN_SIMRST0,             BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//SIM_RST_N
{REG_PIN_SIMCLK1,             BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//SIM2_CLK
{REG_PIN_SIMDA1,              BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//SIM2_DATA      
{REG_PIN_SIMRST1,             BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//SIM2_RST_N
{REG_PIN_SIMCLK2,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC        
{REG_PIN_SIMDA2,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC         
{REG_PIN_SIMRST2,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SD1_CLK,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//WLAN_CLK          WIFI_AGC_GAIN2
{REG_PIN_SD1_CMD,             BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//WLAN_CMD          WB_EN_A
{REG_PIN_SD1_D0,              BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//WLAN_D(0)         WB_EN_B
{REG_PIN_SD1_D1,              BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//WLAN_D(1)         GPS_REAL
{REG_PIN_SD1_D2,              BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//WLAN_D(2)         GPS_IMAG
{REG_PIN_SD1_D3,              BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//WLAN_D(3)         GPS_CLK
{REG_PIN_SD0_D3,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//T_FLASH_D(3)
{REG_PIN_SD0_D2,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//T_FLASH_D(2)
{REG_PIN_SD0_CMD,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//T_FLASH_CMD
{REG_PIN_SD0_D0,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//T_FLASH_D(0)
{REG_PIN_SD0_D1,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//T_FLASH_D(1)
{REG_PIN_SD0_CLK0,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(3)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//T_FLASH_CLK
{REG_PIN_RF_ADC_ON,           BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//LVDS_ADC_ON
{REG_PIN_RF_DAC_ON,           BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//LVDS_DAC_ON
{REG_PIN_CP2_RFCTL0,          BIT_PIN_SLP_CP2|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_CP2_RFCTL1,          BIT_PIN_SLP_CP2|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_CP2_RFCTL2,          BIT_PIN_SLP_CP2|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
};

/*here is the adie pinmap such as 2723*/
static pinmap_t adie_pinmap[]={
	{ANA_REG_PIN_EXT_XTL_EN0,               BITS_ANA_PIN_DS(1)|BIT_ANA_PIN_WPD|BIT_ANA_PIN_SLP_IE},
};

int  pin_init(void)
{

	int i;
	for (i = 0; i < sizeof(pinmap)/sizeof(pinmap[0]); i++) {
		__raw_writel(pinmap[i].val, CTL_PIN_BASE + pinmap[i].reg);
	}
	
	for (i = 0; i < sizeof(adie_pinmap)/sizeof(adie_pinmap[0]); i++) {
		sci_adi_set(adie_pinmap[i].reg, adie_pinmap[i].val);
	}

	return 0;
}

