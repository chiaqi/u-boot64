/*
 * Copyright (C) 2014-2015 Spreadtrum Communications Inc.
 *
 * This file is dual-licensed: you can use it either under the terms
 * of the GPL or the X11 license, at your option. Note that this dual
 * licensing only applies to this file, and not this project as a
 * whole.
 *
 */

#ifndef __H_REGS_PUB_APB_HEADFILE_H__
#define __H_REGS_PUB_APB_HEADFILE_H__ __FILE__

#define  REGS_PUB_APB

/* registers definitions for PUB_APB */
#define REG_PUB_APB_BUSMON_CNT_START			SCI_ADDR(REGS_PUB_APB_BASE, 0x0000)/*BUSMON_CNT_START*/
#define REG_PUB_APB_BUSMON_CFG				SCI_ADDR(REGS_PUB_APB_BASE, 0x0004)/*BUSMON_CFG*/
#define REG_PUB_APB_DDR_EB				SCI_ADDR(REGS_PUB_APB_BASE, 0x0008)/*DDR_EB*/
#define REG_PUB_APB_DDR_SOFT_RST			SCI_ADDR(REGS_PUB_APB_BASE, 0x000C)/*DDR_SOFT_RST*/
#define REG_PUB_APB_DDR_QOS_CFG1			SCI_ADDR(REGS_PUB_APB_BASE, 0x0010)/*DDR_QOS_CFG1*/
#define REG_PUB_APB_DDR_QOS_CFG2			SCI_ADDR(REGS_PUB_APB_BASE, 0x0014)/*DDR_QOS_CFG2*/
#define REG_PUB_APB_DDR_QOS_CFG3			SCI_ADDR(REGS_PUB_APB_BASE, 0x0018)/*DDR_QOS_CFG3*/
#define REG_PUB_APB_DDR_MRR_STATUS			SCI_ADDR(REGS_PUB_APB_BASE, 0x001C)/*DDR_MRR_STATUS*/
#define REG_PUB_APB_DDR_ID2QOS_SEL			SCI_ADDR(REGS_PUB_APB_BASE, 0x003C)/*DDR_ID2QOS_SEL*/
#define REG_PUB_APB_DDR_ID2QOS_RCFG0			SCI_ADDR(REGS_PUB_APB_BASE, 0x0040)/*DDR_ID2QOS_RCFG0*/
#define REG_PUB_APB_DDR_ID2QOS_RCFG1			SCI_ADDR(REGS_PUB_APB_BASE, 0x0044)/*DDR_ID2QOS_RCFG1*/
#define REG_PUB_APB_DDR_ID2QOS_RCFG2			SCI_ADDR(REGS_PUB_APB_BASE, 0x0048)/*DDR_ID2QOS_RCFG2*/
#define REG_PUB_APB_DDR_ID2QOS_RCFG3			SCI_ADDR(REGS_PUB_APB_BASE, 0x004c)/*DDR_ID2QOS_RCFG3*/
#define REG_PUB_APB_DDR_ID2QOS_RCFG4			SCI_ADDR(REGS_PUB_APB_BASE, 0x0050)/*DDR_ID2QOS_RCFG4*/
#define REG_PUB_APB_DDR_ID2QOS_RCFG5			SCI_ADDR(REGS_PUB_APB_BASE, 0x0054)/*DDR_ID2QOS_RCFG5*/
#define REG_PUB_APB_DDR_ID2QOS_RCFG6			SCI_ADDR(REGS_PUB_APB_BASE, 0x0058)/*DDR_ID2QOS_RCFG6*/
#define REG_PUB_APB_DDR_ID2QOS_RCFG7			SCI_ADDR(REGS_PUB_APB_BASE, 0x005c)/*DDR_ID2QOS_RCFG7*/
#define REG_PUB_APB_DDR_ID2QOS_RCFG8			SCI_ADDR(REGS_PUB_APB_BASE, 0x0060)/*DDR_ID2QOS_RCFG8*/
#define REG_PUB_APB_DDR_ID2QOS_RCFG9			SCI_ADDR(REGS_PUB_APB_BASE, 0x0064)/*DDR_ID2QOS_RCFG9*/
#define REG_PUB_APB_DDR_ID2QOS_WCFG0			SCI_ADDR(REGS_PUB_APB_BASE, 0x0080)/*DDR_ID2QOS_WCFG0*/
#define REG_PUB_APB_DDR_ID2QOS_WCFG1			SCI_ADDR(REGS_PUB_APB_BASE, 0x0084)/*DDR_ID2QOS_WCFG1*/
#define REG_PUB_APB_DDR_ID2QOS_WCFG2			SCI_ADDR(REGS_PUB_APB_BASE, 0x0088)/*DDR_ID2QOS_WCFG2*/
#define REG_PUB_APB_DDR_ID2QOS_WCFG3			SCI_ADDR(REGS_PUB_APB_BASE, 0x008c)/*DDR_ID2QOS_WCFG3*/
#define REG_PUB_APB_DDR_ID2QOS_WCFG4			SCI_ADDR(REGS_PUB_APB_BASE, 0x0090)/*DDR_ID2QOS_WCFG4*/
#define REG_PUB_APB_DDR_ID2QOS_WCFG5			SCI_ADDR(REGS_PUB_APB_BASE, 0x0094)/*DDR_ID2QOS_WCFG5*/
#define REG_PUB_APB_DDR_ID2QOS_WCFG6			SCI_ADDR(REGS_PUB_APB_BASE, 0x0098)/*DDR_ID2QOS_WCFG6*/
#define REG_PUB_APB_DDR_ID2QOS_WCFG7			SCI_ADDR(REGS_PUB_APB_BASE, 0x009c)/*DDR_ID2QOS_WCFG7*/
#define REG_PUB_APB_DDR_ID2QOS_WCFG8			SCI_ADDR(REGS_PUB_APB_BASE, 0x00a0)/*DDR_ID2QOS_WCFG8*/
#define REG_PUB_APB_DDR_ID2QOS_WCFG9			SCI_ADDR(REGS_PUB_APB_BASE, 0x00a4)/*DDR_ID2QOS_WCFG9*/
#define REG_PUB_APB_DFI_TIMEOUT_CFG			SCI_ADDR(REGS_PUB_APB_BASE, 0x0100)/*DFI_TIMEOUT_CFG*/
#define REG_PUB_APB_DFI_TIMEOUT_STATUS			SCI_ADDR(REGS_PUB_APB_BASE, 0x0104)/*DFI_TIMEOUT_STATUS*/
#define REG_PUB_APB_DFI_TIMEOUT_EN_CNT			SCI_ADDR(REGS_PUB_APB_BASE, 0x0108)/*DFI_TIMEOUT_EN_CNT*/
#define REG_PUB_APB_DFI_TIMEOUT_VALID_CNT		SCI_ADDR(REGS_PUB_APB_BASE, 0x010c)/*DFI_TIMEOUT_VALID_CNT*/
#define REG_PUB_APB_DFI_BW_CTRL				SCI_ADDR(REGS_PUB_APB_BASE, 0x0110)/*DFI_BW_CTRL*/
#define REG_PUB_APB_DFI_BW_STS				SCI_ADDR(REGS_PUB_APB_BASE, 0x0114)/*DFI_BW_STS*/
#define REG_PUB_APB_DFI_BW_THR0				SCI_ADDR(REGS_PUB_APB_BASE, 0x0118)/*DFI_BW_THR0*/
#define REG_PUB_APB_DFI_BW_THR1				SCI_ADDR(REGS_PUB_APB_BASE, 0x011c)/*DFI_BW_THR1*/
#define REG_PUB_APB_DFI_BW_THR2				SCI_ADDR(REGS_PUB_APB_BASE, 0x0120)/*DFI_BW_THR2*/
#define REG_PUB_APB_DFI_BW_THR3				SCI_ADDR(REGS_PUB_APB_BASE, 0x0124)/*DFI_BW_THR3*/
#define REG_PUB_APB_DFI_BW_TWIN				SCI_ADDR(REGS_PUB_APB_BASE, 0x0128)/*DFI_BW_TWIN*/
#define REG_PUB_APB_DMC_PORT_REMAP_EN			SCI_ADDR(REGS_PUB_APB_BASE, 0x3000)/*DMC_PORT_REMAP_EN*/
#define REG_PUB_APB_DMC_PORTS_MPU_EN			SCI_ADDR(REGS_PUB_APB_BASE, 0x3004)/*DMC_PORTS_MPU_EN*/
#define REG_PUB_APB_DMC_PORT0_ADDR_REMAP		SCI_ADDR(REGS_PUB_APB_BASE, 0x3008)/*DMC_PORT0_ADDR_REMAP*/
#define REG_PUB_APB_DMC_PORT1_ADDR_REMAP		SCI_ADDR(REGS_PUB_APB_BASE, 0x300C)/*DMC_PORT1_ADDR_REMAP*/
#define REG_PUB_APB_DMC_PORT2_ADDR_REMAP		SCI_ADDR(REGS_PUB_APB_BASE, 0x3010)/*DMC_PORT2_ADDR_REMAP*/
#define REG_PUB_APB_DMC_PORT3_ADDR_REMAP		SCI_ADDR(REGS_PUB_APB_BASE, 0x3014)/*DMC_PORT3_ADDR_REMAP*/
#define REG_PUB_APB_DMC_PORT4_ADDR_REMAP		SCI_ADDR(REGS_PUB_APB_BASE, 0x3018)/*DMC_PORT4_ADDR_REMAP*/
#define REG_PUB_APB_DMC_PORT5_ADDR_REMAP		SCI_ADDR(REGS_PUB_APB_BASE, 0x301C)/*DMC_PORT5_ADDR_REMAP*/
#define REG_PUB_APB_DMC_PORT6_ADDR_REMAP		SCI_ADDR(REGS_PUB_APB_BASE, 0x3020)/*DMC_PORT6_ADDR_REMAP*/
#define REG_PUB_APB_DMC_PORT7_ADDR_REMAP		SCI_ADDR(REGS_PUB_APB_BASE, 0x3024)/*DMC_PORT7_ADDR_REMAP*/
#define REG_PUB_APB_DMC_PORT8_ADDR_REMAP		SCI_ADDR(REGS_PUB_APB_BASE, 0x3028)/*DMC_PORT8_ADDR_REMAP*/
#define REG_PUB_APB_DMC_PORT9_ADDR_REMAP		SCI_ADDR(REGS_PUB_APB_BASE, 0x302C)/*DMC_PORT9_ADDR_REMAP*/
#define REG_PUB_APB_DMC_PORT0_MPU_RANGE			SCI_ADDR(REGS_PUB_APB_BASE, 0x3030)/*DMC_PORT0_MPU_RANGE*/
#define REG_PUB_APB_DMC_PORT1_MPU_RANGE			SCI_ADDR(REGS_PUB_APB_BASE, 0x3034)/*DMC_PORT1_MPU_RANGE*/
#define REG_PUB_APB_DMC_PORT2_MPU_RANGE			SCI_ADDR(REGS_PUB_APB_BASE, 0x3038)/*DMC_PORT2_MPU_RANGE*/
#define REG_PUB_APB_DMC_PORT3_MPU_RANGE			SCI_ADDR(REGS_PUB_APB_BASE, 0x303C)/*DMC_PORT3_MPU_RANGE*/
#define REG_PUB_APB_DMC_PORT4_MPU_RANGE			SCI_ADDR(REGS_PUB_APB_BASE, 0x3040)/*DMC_PORT4_MPU_RANGE*/
#define REG_PUB_APB_DMC_PORT5_MPU_RANGE			SCI_ADDR(REGS_PUB_APB_BASE, 0x3044)/*DMC_PORT5_MPU_RANGE*/
#define REG_PUB_APB_DMC_PORT6_MPU_RANGE			SCI_ADDR(REGS_PUB_APB_BASE, 0x3048)/*DMC_PORT6_MPU_RANGE*/
#define REG_PUB_APB_DMC_PORT7_MPU_RANGE			SCI_ADDR(REGS_PUB_APB_BASE, 0x3050)/*DMC_PORT7_MPU_RANGE*/
#define REG_PUB_APB_DMC_PORT8_MPU_RANGE			SCI_ADDR(REGS_PUB_APB_BASE, 0x3054)/*DMC_PORT8_MPU_RANGE*/
#define REG_PUB_APB_DMC_PORT9_MPU_RANGE			SCI_ADDR(REGS_PUB_APB_BASE, 0x3058)/*DMC_PORT9_MPU_RANGE*/
#define REG_PUB_APB_DMC_PORT0_DUMP_ADDR			SCI_ADDR(REGS_PUB_APB_BASE, 0x305C)/*DMC_PORT0_DUMP_ADDR*/
#define REG_PUB_APB_DMC_PORT1_DUMP_ADDR			SCI_ADDR(REGS_PUB_APB_BASE, 0x3060)/*DMC_PORT1_DUMP_ADDR*/
#define REG_PUB_APB_DMC_PORT2_DUMP_ADDR			SCI_ADDR(REGS_PUB_APB_BASE, 0x3064)/*DMC_PORT2_DUMP_ADDR*/
#define REG_PUB_APB_DMC_PORT3_DUMP_ADDR			SCI_ADDR(REGS_PUB_APB_BASE, 0x3068)/*DMC_PORT3_DUMP_ADDR*/
#define REG_PUB_APB_DMC_PORT4_DUMP_ADDR			SCI_ADDR(REGS_PUB_APB_BASE, 0x306C)/*DMC_PORT4_DUMP_ADDR*/
#define REG_PUB_APB_DMC_PORT5_DUMP_ADDR			SCI_ADDR(REGS_PUB_APB_BASE, 0x3070)/*DMC_PORT5_DUMP_ADDR*/
#define REG_PUB_APB_DMC_PORT6_DUMP_ADDR			SCI_ADDR(REGS_PUB_APB_BASE, 0x3074)/*DMC_PORT6_DUMP_ADDR*/
#define REG_PUB_APB_DMC_PORT7_DUMP_ADDR			SCI_ADDR(REGS_PUB_APB_BASE, 0x3078)/*DMC_PORT7_DUMP_ADDR*/
#define REG_PUB_APB_DMC_PORT8_DUMP_ADDR			SCI_ADDR(REGS_PUB_APB_BASE, 0x307C)/*DMC_PORT8_DUMP_ADDR*/
#define REG_PUB_APB_DMC_PORT9_DUMP_ADDR			SCI_ADDR(REGS_PUB_APB_BASE, 0x3080)/*DMC_PORT9_DUMP_ADDR*/



/* bits definitions for register REG_PUB_APB_BUSMON_CNT_START */
#define BIT_PUB_BUSMON_CNT_START                          ( BIT(0) )

/* bits definitions for register REG_PUB_APB_BUSMON_CFG */
#define BIT_PUB_BUSMON9_EB                                ( BIT(25) )
#define BIT_PUB_BUSMON8_EB                                ( BIT(24) )
#define BIT_PUB_BUSMON7_EB                                ( BIT(23) )
#define BIT_PUB_BUSMON6_EB                                ( BIT(22) )
#define BIT_PUB_BUSMON5_EB                                ( BIT(21) )
#define BIT_PUB_BUSMON4_EB                                ( BIT(20) )
#define BIT_PUB_BUSMON3_EB                                ( BIT(19) )
#define BIT_PUB_BUSMON2_EB                                ( BIT(18) )
#define BIT_PUB_BUSMON1_EB                                ( BIT(17) )
#define BIT_PUB_BUSMON0_EB                                ( BIT(16) )
#define BIT_PUB_BUSMON9_SOFT_RST                          ( BIT(9) )
#define BIT_PUB_BUSMON8_SOFT_RST                          ( BIT(8) )
#define BIT_PUB_BUSMON7_SOFT_RST                          ( BIT(7) )
#define BIT_PUB_BUSMON6_SOFT_RST                          ( BIT(6) )
#define BIT_PUB_BUSMON5_SOFT_RST                          ( BIT(5) )
#define BIT_PUB_BUSMON4_SOFT_RST                          ( BIT(4) )
#define BIT_PUB_BUSMON3_SOFT_RST                          ( BIT(3) )
#define BIT_PUB_BUSMON2_SOFT_RST                          ( BIT(2) )
#define BIT_PUB_BUSMON1_SOFT_RST                          ( BIT(1) )
#define BIT_PUB_BUSMON0_SOFT_RST                          ( BIT(0) )

/* bits definitions for register REG_PUB_APB_DDR_EB */

/* bits definitions for register REG_PUB_APB_DDR_SOFT_RST */

/* bits definitions for register REG_PUB_APB_DDR_QOS_CFG1 */
#define BITS_DMC_ARQOS_3(_X_)                             ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_AWQOS_3(_X_)                             ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_ARQOS_2(_X_)                             ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_AWQOS_2(_X_)                             ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_ARQOS_1(_X_)                             ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_AWQOS_1(_X_)                             ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_ARQOS_0(_X_)                             ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_AWQOS_0(_X_)                             ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_QOS_CFG2 */
#define BITS_DMC_ARQOS_7(_X_)                             ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_AWQOS_7(_X_)                             ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_ARQOS_6(_X_)                             ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_AWQOS_6(_X_)                             ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_ARQOS_5(_X_)                             ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_AWQOS_5(_X_)                             ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_ARQOS_4(_X_)                             ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_AWQOS_4(_X_)                             ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_QOS_CFG3 */
#define BITS_DMC_ARQOS_9(_X_)                             ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_AWQOS_9(_X_)                             ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_ARQOS_8(_X_)                             ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_AWQOS_8(_X_)                             ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_MRR_STATUS */
#define BIT_DDRC_CO_RD_MRR_DATA_VALID                     ( BIT(8) )
#define BITS_DDRC_CO_RD_MRR_DATA(_X_)                     ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_SEL */
#define BITS_DMC_ID_SEL(_X_)                              ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)|BIT(24)|BIT(25)) )
#define BITS_DMC_QOS_SEL(_X_)                             ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_RCFG0 */
#define BITS_DMC_ARQOS_0_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_ARQOS_0_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_ARQOS_0_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_ARQOS_0_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_ARQOS_0_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_ARQOS_0_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_ARQOS_0_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_ARQOS_0_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_RCFG1 */
#define BITS_DMC_ARQOS_1_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_ARQOS_1_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_ARQOS_1_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_ARQOS_1_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_ARQOS_1_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_ARQOS_1_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_ARQOS_1_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_ARQOS_1_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_RCFG2 */
#define BITS_DMC_ARQOS_2_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_ARQOS_2_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_ARQOS_2_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_ARQOS_2_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_ARQOS_2_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_ARQOS_2_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_ARQOS_2_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_ARQOS_2_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_RCFG3 */
#define BITS_DMC_ARQOS_3_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_ARQOS_3_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_ARQOS_3_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_ARQOS_3_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_ARQOS_3_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_ARQOS_3_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_ARQOS_3_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_ARQOS_3_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_RCFG4 */
#define BITS_DMC_ARQOS_4_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_ARQOS_4_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_ARQOS_4_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_ARQOS_4_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_ARQOS_4_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_ARQOS_4_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_ARQOS_4_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_ARQOS_4_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_RCFG5 */
#define BITS_DMC_ARQOS_5_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_ARQOS_5_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_ARQOS_5_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_ARQOS_5_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_ARQOS_5_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_ARQOS_5_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_ARQOS_5_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_ARQOS_5_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_RCFG6 */
#define BITS_DMC_ARQOS_6_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_ARQOS_6_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_ARQOS_6_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_ARQOS_6_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_ARQOS_6_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_ARQOS_6_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_ARQOS_6_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_ARQOS_6_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_RCFG7 */
#define BITS_DMC_ARQOS_7_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_ARQOS_7_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_ARQOS_7_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_ARQOS_7_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_ARQOS_7_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_ARQOS_7_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_ARQOS_7_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_ARQOS_7_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_RCFG8 */
#define BITS_DMC_ARQOS_8_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_ARQOS_8_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_ARQOS_8_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_ARQOS_8_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_ARQOS_8_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_ARQOS_8_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_ARQOS_8_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_ARQOS_8_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_RCFG9 */
#define BITS_DMC_ARQOS_9_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_ARQOS_9_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_ARQOS_9_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_ARQOS_9_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_ARQOS_9_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_ARQOS_9_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_ARQOS_9_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_ARQOS_9_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_WCFG0 */
#define BITS_DMC_AWQOS_0_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_AWQOS_0_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_AWQOS_0_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_AWQOS_0_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_AWQOS_0_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_AWQOS_0_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_AWQOS_0_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_AWQOS_0_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_WCFG1 */
#define BITS_DMC_AWQOS_1_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_AWQOS_1_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_AWQOS_1_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_AWQOS_1_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_AWQOS_1_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_AWQOS_1_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_AWQOS_1_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_AWQOS_1_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_WCFG2 */
#define BITS_DMC_AWQOS_2_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_AWQOS_2_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_AWQOS_2_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_AWQOS_2_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_AWQOS_2_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_AWQOS_2_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_AWQOS_2_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_AWQOS_2_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_WCFG3 */
#define BITS_DMC_AWQOS_3_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_AWQOS_3_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_AWQOS_3_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_AWQOS_3_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_AWQOS_3_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_AWQOS_3_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_AWQOS_3_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_AWQOS_3_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_WCFG4 */
#define BITS_DMC_AWQOS_4_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_AWQOS_4_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_AWQOS_4_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_AWQOS_4_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_AWQOS_4_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_AWQOS_4_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_AWQOS_4_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_AWQOS_4_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_WCFG5 */
#define BITS_DMC_AWQOS_5_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_AWQOS_5_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_AWQOS_5_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_AWQOS_5_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_AWQOS_5_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_AWQOS_5_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_AWQOS_5_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_AWQOS_5_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_WCFG6 */
#define BITS_DMC_AWQOS_6_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_AWQOS_6_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_AWQOS_6_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_AWQOS_6_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_AWQOS_6_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_AWQOS_6_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_AWQOS_6_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_AWQOS_6_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_WCFG7 */
#define BITS_DMC_AWQOS_7_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_AWQOS_7_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_AWQOS_7_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_AWQOS_7_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_AWQOS_7_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_AWQOS_7_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_AWQOS_7_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_AWQOS_7_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_WCFG8 */
#define BITS_DMC_AWQOS_8_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_AWQOS_8_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_AWQOS_8_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_AWQOS_8_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_AWQOS_8_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_AWQOS_8_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_AWQOS_8_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_AWQOS_8_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DDR_ID2QOS_WCFG9 */
#define BITS_DMC_AWQOS_9_ID7(_X_)                         ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DMC_AWQOS_9_ID6(_X_)                         ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_DMC_AWQOS_9_ID5(_X_)                         ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DMC_AWQOS_9_ID4(_X_)                         ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_DMC_AWQOS_9_ID3(_X_)                         ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DMC_AWQOS_9_ID2(_X_)                         ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_DMC_AWQOS_9_ID1(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DMC_AWQOS_9_ID0(_X_)                         ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DFI_TIMEOUT_CFG */
#define BITS_DFI_TIMEOUT_THRESHOLD(_X_)                   ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DFI_TIMEOUT_CLR(_X_)                         ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_DFI_TIMEOUT_EN(_X_)                          ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DFI_TIMEOUT_STATUS */
#define BITS_DFI_TIMEOUT_STATUS(_X_)                      ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PUB_APB_DFI_TIMEOUT_EN_CNT */
#define BITS_DFI_TIMEOUT_EN3_CNT(_X_)                     ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)|BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DFI_TIMEOUT_EN2_CNT(_X_)                     ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DFI_TIMEOUT_EN1_CNT(_X_)                     ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DFI_TIMEOUT_EN0_CNT(_X_)                     ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PUB_APB_DFI_TIMEOUT_VALID_CNT */
#define BITS_DFI_TIMEOUT_VALID3_CNT(_X_)                  ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)|BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_DFI_TIMEOUT_VALID2_CNT(_X_)                  ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DFI_TIMEOUT_VALID1_CNT(_X_)                  ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_DFI_TIMEOUT_VALID0_CNT(_X_)                  ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PUB_APB_DFI_BW_CTRL */
#define BITS_PUB_APB_DFI_BW_INT_THR(_X_)			( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)|BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BIT_PUB_APB_DFI_BW_INT_EN				( BIT(16) )
#define BITS_PUB_APB_DFI_BW_THR_SEL(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)) )
#define BIT_PUB_APB_DFI_BW_EN					( BIT(0) )

/* bits definitions for register REG_PUB_APB_DFI_BW_STS */
#define BITS_PUB_APB_DFI_BW_THR_SEL_NEW(_X_)			( (_X_) << 30 & (BIT(30)|BIT(31)) )
#define BITS_PUB_APB_DFI_BW(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)|BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)|BIT(24)|BIT(25)|BIT(26)|BIT(27)|BIT(28)|BIT(29)) )

/* bits definitions for register REG_PUB_APB_DFI_BW_THR0 */
#define BITS_PUB_APB_DFI_BW_THR0(_X_)				(_X_)

/* bits definitions for register REG_PUB_APB_DFI_BW_THR1 */
#define BITS_PUB_APB_DFI_BW_THR1(_X_)				(_X_)

/* bits definitions for register REG_PUB_APB_DFI_BW_THR2 */
#define BITS_PUB_APB_DFI_BW_THR2(_X_)				(_X_)

/* bits definitions for register REG_PUB_APB_DFI_BW_THR3 */
#define BITS_PUB_APB_DFI_BW_THR3(_X_)				(_X_)

/* bits definitions for register REG_PUB_APB_DFI_BW_TWIN */
#define BITS_PUB_APB_DFI_BW_TWIN(_X_)				(_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT_REMAP_EN */
#define BITS_DMC_PORTS_REMAP_EN(_X_)                      ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)|BIT(16)|BIT(17)|BIT(18)|BIT(19)) )

/* bits definitions for register REG_PUB_APB_DMC_PORTS_MPU_EN */
#define BITS_DMC_PORTS_MPU_EN(_X_)                        ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)|BIT(16)|BIT(17)|BIT(18)|BIT(19)) )

/* bits definitions for register REG_PUB_APB_DMC_PORT0_ADDR_REMAP */
#define BITS_DMC_PORT0_ADDR_REMAP(_X_)                    (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT1_ADDR_REMAP */
#define BITS_DMC_PORT1_ADDR_REMAP(_X_)                    (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT2_ADDR_REMAP */
#define BITS_DMC_PORT2_ADDR_REMAP(_X_)                    (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT3_ADDR_REMAP */
#define BITS_DMC_PORT3_ADDR_REMAP(_X_)                    (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT4_ADDR_REMAP */
#define BITS_DMC_PORT4_ADDR_REMAP(_X_)                    (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT5_ADDR_REMAP */
#define BITS_DMC_PORT5_ADDR_REMAP(_X_)                    (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT6_ADDR_REMAP */
#define BITS_DMC_PORT6_ADDR_REMAP(_X_)                    (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT7_ADDR_REMAP */
#define BITS_DMC_PORT7_ADDR_REMAP(_X_)                    (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT8_ADDR_REMAP */
#define BITS_DMC_PORT8_ADDR_REMAP(_X_)                    (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT9_ADDR_REMAP */
#define BITS_DMC_PORT9_ADDR_REMAP(_X_)                    (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT0_MPU_RANGE */
#define BITS_DMC_PORT0_MPU_RANGE(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT1_MPU_RANGE */
#define BITS_DMC_PORT1_MPU_RANGE(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT2_MPU_RANGE */
#define BITS_DMC_PORT2_MPU_RANGE(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT3_MPU_RANGE */
#define BITS_DMC_PORT3_MPU_RANGE(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT4_MPU_RANGE */
#define BITS_DMC_PORT4_MPU_RANGE(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT5_MPU_RANGE */
#define BITS_DMC_PORT5_MPU_RANGE(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT6_MPU_RANGE */
#define BITS_DMC_PORT6_MPU_RANGE(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT7_MPU_RANGE */
#define BITS_DMC_PORT7_MPU_RANGE(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT8_MPU_RANGE */
#define BITS_DMC_PORT8_MPU_RANGE(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT9_MPU_RANGE */
#define BITS_DMC_PORT9_MPU_RANGE(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT0_DUMP_ADDR */
#define BITS_DMC_PORT0_DUMP_ADDR(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT1_DUMP_ADDR */
#define BITS_DMC_PORT1_DUMP_ADDR(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT2_DUMP_ADDR */
#define BITS_DMC_PORT2_DUMP_ADDR(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT3_DUMP_ADDR */
#define BITS_DMC_PORT3_DUMP_ADDR(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT4_DUMP_ADDR */
#define BITS_DMC_PORT4_DUMP_ADDR(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT5_DUMP_ADDR */
#define BITS_DMC_PORT5_DUMP_ADDR(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT6_DUMP_ADDR */
#define BITS_DMC_PORT6_DUMP_ADDR(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT7_DUMP_ADDR */
#define BITS_DMC_PORT7_DUMP_ADDR(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT8_DUMP_ADDR */
#define BITS_DMC_PORT8_DUMP_ADDR(_X_)                     (_X_)

/* bits definitions for register REG_PUB_APB_DMC_PORT9_DUMP_ADDR */
#define BITS_DMC_PORT9_DUMP_ADDR(_X_)                     (_X_)

#endif
