//This file is auto generated by coder_gen.xlsm////对齐的行配置是OK的，没有对齐的需要根据芯片内部功能配置。//

#include <asm/io.h>
#include <asm/arch/pinmap.h>
#include "adi_hal_internal.h"
#define BIT_PIN_SLP_ALL  (BIT_PIN_SLP_AP|BIT_PIN_SLP_CP0|BIT_PIN_SLP_CP1|BIT_PIN_SLP_CP2)
#define BIT_PIN_SLP_DCP  (BIT_PIN_SLP_CP0|BIT_PIN_SLP_CP1)
#define BIT_ANA_PIN_WPD                     ( BIT_6 )#define BIT_ANA_PIN_SLP_IE                  ( BIT_1 )static pinmap_t pinmap[]={

{REG_PIN_CTRL0,(1<<20)|(1<<26)|(3<<16)|0},
{REG_PIN_CTRL1,0},
{REG_PIN_CTRL2,0},
{REG_PIN_CTRL3,(1<<30)|0},
{REG_PIN_CTRL4,(1<<6)|(1<<0)|(1<<1)|(1<<4)|0},
{REG_PIN_CTRL5,0},
{REG_PIN_TRACECLK,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//WIFI_PWR_ON 
{REG_PIN_TRACECTRL,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_TRACEDAT0,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//FLASH_EN      
{REG_PIN_TRACEDAT1,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//FLASH_TORCH    
{REG_PIN_TRACEDAT2,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(1)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//LCD_BL_EN
{REG_PIN_TRACEDAT3,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_TRACEDAT4,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//LCD_ESD_DETECT 
{REG_PIN_TRACEDAT5,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//EAR_3PI5_DET 
{REG_PIN_TRACEDAT6,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//2M_CAM_RST_N     
{REG_PIN_TRACEDAT7,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//EAR_SEND_END    
{REG_PIN_U0TXD,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//BT_UART_RXD 
{REG_PIN_U0RXD,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//BT_UART_TXD
{REG_PIN_U0CTS,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//BT_UART_RTS_N 
{REG_PIN_U0RTS,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//BT_UART_CTS_N
{REG_PIN_U1TXD,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//MUIC_TXD    
{REG_PIN_U1RXD,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//MUIC_RXD        
{REG_PIN_U2TXD,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_U2RXD,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_U3TXD,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//GPS_TXD 
{REG_PIN_U3RXD,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//GPS_RXD 
{REG_PIN_U3CTS,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//GPS_CTS 
{REG_PIN_U3RTS,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//GPS_RTS 
{REG_PIN_CP2_RFCTL0,          BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_CP2_RFCTL1,          BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_CP2_RFCTL2,          BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//GND
{REG_PIN_WIFI_AGCGAIN3,       BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_WIFI_AGCGAIN4,       BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_WIFI_AGCGAIN5,       BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_WIFI_AGCGAIN6,       BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_RFSDA0,              BIT_PIN_SLP_CP0|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//W_RFSDA
{REG_PIN_RFSCK0,              BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//W_RFSCK 
{REG_PIN_RFSEN0,              BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//W_RFSEN0 
{REG_PIN_RFSDA1,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_RFSCK1,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_RFSEN1,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_CP1_RFCTL0,          BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//duplicate
{REG_PIN_CP1_RFCTL1,          BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//duplicate
{REG_PIN_CP1_RFCTL2,          BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//duplicate
{REG_PIN_CP1_RFCTL3,          BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//duplicate
{REG_PIN_CP1_RFCTL4,          BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//duplicate
{REG_PIN_CP1_RFCTL5,          BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//duplicate
{REG_PIN_CP1_RFCTL6,          BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//duplicate
{REG_PIN_CP1_RFCTL7,          BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//duplicate
{REG_PIN_CP1_RFCTL8,          BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(1)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//V_MODE_1
{REG_PIN_CP1_RFCTL9,          BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//BT_WAKE_IN
{REG_PIN_CP1_RFCTL10,         BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//BT_WAKE_OUT
{REG_PIN_CP1_RFCTL11,         BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//WF_COEXIST
{REG_PIN_CP1_RFCTL12,         BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//RFCTL26
{REG_PIN_CP1_RFCTL13,         BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//RFCTL27
{REG_PIN_CP1_RFCTL14,         BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(1)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//B_5/8_SEL
{REG_PIN_CP1_RFCTL15,         BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(1)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//B_5_PA_EN
{REG_PIN_CP0_RFCTL0,          BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//PA_MODE
{REG_PIN_CP0_RFCTL1,          BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//BS1
{REG_PIN_CP0_RFCTL2,          BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//B_8_PA_EN
{REG_PIN_CP0_RFCTL3,          BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//BS2
{REG_PIN_CP0_RFCTL4,          BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//B_2_PA_EN
{REG_PIN_CP0_RFCTL5,          BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//V_MODE_0
{REG_PIN_CP0_RFCTL6,          BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//B_1_PA_EN
{REG_PIN_CP0_RFCTL7,          BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//GSM_PA_EN
{REG_PIN_XTLEN,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//TP_XTL_EN
{REG_PIN_SCL3,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SDA3,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SPI0_CSN,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SPI0_DO,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SPI0_DI,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SPI0_CLK,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_EXTINT0,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//SD_DET_N
{REG_PIN_EXTINT1,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SCL1,                BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//TSP_SCL        By 2.2k Pullup to 1.8V
{REG_PIN_SDA1,                BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//TSP_SDA        By 2.2k Pullup to 1.8V
{REG_PIN_SIMCLK0,             BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//SIM_CLK 
{REG_PIN_SIMDA0,              BIT_PIN_SLP_CP0|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//SIM_DAT
{REG_PIN_SIMRST0,             BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//SIM_RST 
{REG_PIN_SIMCLK1,             BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//USIM2_CLK 
{REG_PIN_SIMDA1,              BIT_PIN_SLP_CP0|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//USIM2_DAT
{REG_PIN_SIMRST1,             BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//USIM2_RST
{REG_PIN_SIMCLK2,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SIMDA2,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//TOUCH_IRQ 
{REG_PIN_SIMRST2,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_MEMS_MIC_CLK0,       BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_MEMS_MIC_DATA0,      BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_MEMS_MIC_CLK1,       BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_MEMS_MIC_DATA1,      BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SD1_CLK,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//WLAN_SDIO_CLK 
{REG_PIN_SD1_CMD,             BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//WLAN_SDIO_CMD 
{REG_PIN_SD1_D0,              BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//WLAN_SDIO_D_0 
{REG_PIN_SD1_D1,              BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//WLAN_SDIO_D_1 
{REG_PIN_SD1_D2,              BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//WLAN_SDIO_D_2 
{REG_PIN_SD1_D3,              BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//WLAN_SDIO_D_3 
{REG_PIN_SD0_D3,              BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//SD_D_3 
{REG_PIN_SD0_D2,              BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//SD_D_2 
{REG_PIN_SD0_CMD,             BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//SD_CMD 
{REG_PIN_SD0_D0,              BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//SD_D_0 
{REG_PIN_SD0_D1,              BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//SD_D_1 
{REG_PIN_SD0_CLK1,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_SD0_CLK0,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//SD_CLK 
{REG_PIN_PTEST,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_Z},//GND
{REG_PIN_ANA_INT,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//ANA_INT
{REG_PIN_EXT_RST_B,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//EXT_RST_B
{REG_PIN_CHIP_SLEEP,          BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//CHIP_SLEEP
{REG_PIN_XTL_BUF_EN0,         BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//XTL_BUF_EN0
{REG_PIN_XTL_BUF_EN1,         BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//XTL_BUF_EN1
{REG_PIN_XTL_BUF_EN2,         BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//No Ball in SCH
{REG_PIN_CLK_32K,             BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//CLK_32K
#if 1
{REG_PIN_AUD_SCLK,            BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//AUD_SCLK
{REG_PIN_AUD_DANGL,           BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//No Ball in SCH
{REG_PIN_AUD_DANGR,           BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//No Ball in SCH
{REG_PIN_AUD_ADD0,            BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//AUD_ADD_0
{REG_PIN_AUD_ADSYNC,          BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//AUD_ADSYNC
{REG_PIN_AUD_DAD1,            BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//AUD_DAD_1
{REG_PIN_AUD_DAD0,            BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//AUD_DAD_0
{REG_PIN_AUD_DASYNC,          BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//AUD_DASYNC
#endif
{REG_PIN_ADI_D,               BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//ADI_D
{REG_PIN_ADI_SYNC,            BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//ADI_SYNC
{REG_PIN_ADI_SCLK,            BIT_PIN_SLP_ALL|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//ADI_SCLK
{REG_PIN_LCD_CSN1,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_LCD_CSN0,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_LCD_RSTN,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//LCD_RESET_N
{REG_PIN_LCD_CD,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_FMARK,           BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//FLM
{REG_PIN_LCD_WRN,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_RDN,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D0,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D1,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D2,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D3,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D4,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D5,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D6,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D7,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D8,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D9,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D10,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D11,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D12,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D13,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D14,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D15,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D16,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D17,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D18,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D19,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D20,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D21,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D22,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_LCD_D23,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_SPI2_CSN,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//No Ball in SCH
{REG_PIN_SPI2_DO,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_SPI2_DI,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_SPI2_CLK,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH
{REG_PIN_EMMC_CLK,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//EMMC_CLK 
{REG_PIN_EMMC_CMD,            BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_CMD               By 10k Pullup to 1.8V
{REG_PIN_EMMC_D0,             BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D0 
{REG_PIN_EMMC_D1,             BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D1 
{REG_PIN_EMMC_D2,             BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D2 
{REG_PIN_EMMC_D3,             BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D3 
{REG_PIN_EMMC_D4,             BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D4 
{REG_PIN_EMMC_D5,             BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D5 
{REG_PIN_EMMC_D6,             BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D6 
{REG_PIN_EMMC_D7,             BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_D7 
{REG_PIN_EMMC_RST,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//EMMC_RSTN             
{REG_PIN_NFWPN,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_NFRB,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//WIFI_WAKE_OUT 
{REG_PIN_NFCLE,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//MUIC_INT
{REG_PIN_NFALE,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//MUS_SDA                By 2.2k Pullup to 1.8V
{REG_PIN_NFCEN0,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//MUS_SCL                By 2.2k Pullup to 1.8V
{REG_PIN_NFCEN1,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//TSP_LDO_EN
{REG_PIN_NFREN,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_NFWEN,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_NFD0,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_NFD1,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_NFD2,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_NFD3,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//VOL_UP_N              NC
{REG_PIN_NFD4,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//IF_PMIC_SDA            By 1.5k Pullup to 1.8V
{REG_PIN_NFD5,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//IF_PMIC_SCL            By 1.5k Pullup to 1.8V
{REG_PIN_NFD6,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//IF_PMIC_INT           By 22k Pullup to 1.8V
{REG_PIN_NFD7,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//SIM_DET               By 270k Pullup to 1.8V
{REG_PIN_NFD8,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//PROXY_EN              By 100k Pulldown to GND
{REG_PIN_NFD9,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//ACC_INT
{REG_PIN_NFD10,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_NFD11,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//HW_REV_MOD_2
{REG_PIN_NFD12,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC      
{REG_PIN_NFD13,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//GPS_PWON 
{REG_PIN_NFD14,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//HW_REV_MOD_1
{REG_PIN_NFD15,               BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//HW_REV_MOD_0
{REG_PIN_CCIRCK0,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH 
{REG_PIN_CCIRCK1,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH 
{REG_PIN_CCIRMCLK,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//CAM_MCLK
{REG_PIN_CCIRHS,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH 
{REG_PIN_CCIRVS,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH 
{REG_PIN_CCIRD0,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH 
{REG_PIN_CCIRD1,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH 
{REG_PIN_CCIRD2,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH 
{REG_PIN_CCIRD3,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC TEST1 
{REG_PIN_CCIRD4,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC TEST2 
{REG_PIN_CCIRD5,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH 
{REG_PIN_CCIRD6,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//No Ball in SCH 
{REG_PIN_CCIRD7,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC TEST3
{REG_PIN_CCIRD8,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC TEST4
{REG_PIN_CCIRD9,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC TEST5
{REG_PIN_CCIRRST,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//5M_CAM_RST_N   CAM_RST
{REG_PIN_CCIRPD1,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//2M_CAM_STBY    CAM_PD1
{REG_PIN_CCIRPD0,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//5M_CAM_STBY    CAM_PD0
{REG_PIN_SCL0,                BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//CAM_SCL              By 2.2k Pullup to 1.8V
{REG_PIN_SDA0,                BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//CAM_SDA              By 2.2k Pullup to 1.8V
{REG_PIN_KEYOUT0,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//KEY_OUT_0 
{REG_PIN_KEYOUT1,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//KEY_OUT_1 
{REG_PIN_KEYOUT2,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//VCAMC_EN
{REG_PIN_KEYIN0,              BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//VOL_UP 
{REG_PIN_KEYIN1,              BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//VOL_Down
{REG_PIN_KEYIN2,              BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//HOME_KEY  
{REG_PIN_SCL2,                BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//SEN_SCL              By 2.2k Pullup to 1.8V
{REG_PIN_SDA2,                BIT_PIN_SLP_AP|BIT_PIN_WPUS|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_Z},//SEN_SDA              By 2.2k Pullup to 1.8V
{REG_PIN_CLK_AUX0,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//SLEEP_CLK_32K
{REG_PIN_IIS0DI,              BIT_PIN_SLP_AP|BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_IE},//BT_PCM_OUT 
{REG_PIN_IIS0DO,              BIT_PIN_SLP_AP|BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPD|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//BT_PCM_IN 
{REG_PIN_IIS0CLK,             BIT_PIN_SLP_AP|BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(2)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//BT_PCM_CLK 
{REG_PIN_IIS0LRCK,            BIT_PIN_SLP_AP|BIT_PIN_SLP_CP0|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//BT_PCM_SYNC 
{REG_PIN_IIS0MCK,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_IIS1DI,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_OE},//CHG_EN
{REG_PIN_IIS1DO,              BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPU|BIT_PIN_SLP_WPU|BIT_PIN_SLP_IE},//PROXY_INT
{REG_PIN_IIS1CLK,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_NUL|BIT_PIN_SLP_IE},//DS and SS           By resistance pullup or pulldown
{REG_PIN_IIS1LRCK,            BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_IIS1MCK,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(3)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//NC
{REG_PIN_MTDO,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_NUL|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//MTDO
{REG_PIN_MTDI,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//MTDI 
{REG_PIN_MTCK,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPD|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//MTCK
{REG_PIN_MTMS,                BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//MTMS 
{REG_PIN_MTRST_N,             BIT_PIN_SLP_AP|BIT_PIN_NULL|BITS_PIN_DS(1)|BITS_PIN_AF(0)|BIT_PIN_WPU|BIT_PIN_SLP_WPD|BIT_PIN_SLP_Z},//MTRSTN 
};

/*here is the adie pinmap such as 2723*/
static pinmap_t adie_pinmap[]={
//{ANA_REG_PIN_EXT_XTL_EN0,		BITS_ANA_PIN_DS(1)|BIT_ANA_PIN_WPD|BIT_ANA_PIN_SLP_IE},
	{ANA_REG_PIN_EXT_XTL_EN0,		BIT_8|BIT_ANA_PIN_WPD|BIT_ANA_PIN_SLP_IE},};

int pin_init(void)
{
	int i;
	for(i=0;i<sizeof(pinmap)/sizeof(pinmap[0]);i++){
		__raw_writel(pinmap[i].val,CTL_PIN_BASE+pinmap[i].reg);
	}

	for (i = 0; i < sizeof(adie_pinmap)/sizeof(adie_pinmap[0]); i++) {
		sci_adi_set(adie_pinmap[i].reg, adie_pinmap[i].val);
	}

	return 0;
}

