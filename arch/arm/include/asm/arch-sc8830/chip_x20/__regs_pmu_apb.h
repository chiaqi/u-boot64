/*
 * Copyright (C) 2014-2015 Spreadtrum Communications Inc.
 *
 * This file is dual-licensed: you can use it either under the terms
 * of the GPL or the X11 license, at your option. Note that this dual
 * licensing only applies to this file, and not this project as a
 * whole.
 *
 */

//#ifndef __SCI_GLB_REGS_H__  
//#error  "Don't include this file directly, Pls include sci_glb_regs.h" 
//#endif 

#ifndef __H_REGS_PMU_APB_HEADFILE_H__
#define __H_REGS_PMU_APB_HEADFILE_H__ __FILE__

#define  REGS_PMU_APB

/* registers definitions for PMU_APB */
#define REG_PMU_APB_PD_CA7_TOP_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0000)	/*PD_CA7_TOP_CFG */
#define REG_PMU_APB_PD_CA7_C0_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0004)	/*PD_CA7_C0_CFG */
#define REG_PMU_APB_PD_CA7_C1_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0008)	/*PD_CA7_C1_CFG */
#define REG_PMU_APB_PD_CA7_C2_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x000C)	/*PD_CA7_C2_CFG */
#define REG_PMU_APB_PD_CA7_C3_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0010)	/*PD_CA7_C3_CFG */
#define REG_PMU_APB_PD_AP_DISP_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0014)	/*PD_AP_DISP_CFG */
#define REG_PMU_APB_PD_AP_SYS_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0018)	/*PD_AP_SYS_CFG */
#define REG_PMU_APB_PD_MM_TOP_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x001C)	/*PD_MM_TOP_CFG */
#define REG_PMU_APB_PD_GPU_TOP_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0020)	/*PD_GPU_TOP_CFG */
#define REG_PMU_APB_PD_CP0_ARM9_0_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0024)	/*PD_CP0_ARM9_0_CFG */
#define REG_PMU_APB_PD_CP0_ARM9_1_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0028)	/*PD_CP0_ARM9_1_CFG */
#define REG_PMU_APB_PD_CP0_ARM9_2_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x002C)	/*PD_CP0_ARM9_2_CFG */
#define REG_PMU_APB_PD_CP0_HU3GE_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0030)	/*PD_CP0_HU3GE_CFG */
#define REG_PMU_APB_PD_CP0_GSM_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0034)	/*PD_CP0_GSM_CFG */
#define REG_PMU_APB_PD_CP0_TD_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0038)	/*PD_CP0_TD_CFG */
#define REG_PMU_APB_PD_CP0_CEVA_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x003C)	/*PD_CP0_CEVA_CFG */
#define REG_PMU_APB_PD_CP0_HARQ_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0040)	/*PD_CP0_HARQ_CFG */
#define REG_PMU_APB_PD_CP0_SYS_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0044)	/*PD_CP0_SYS_CFG */
#define REG_PMU_APB_PD_CP1_ARM9_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0048)	/*PD_CP1_ARM9_CFG */
#define REG_PMU_APB_PD_CP1_GSM_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x004C)	/*PD_CP1_GSM_CFG */
#define REG_PMU_APB_PD_CP1_TD_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0050)	/*PD_CP1_TD_CFG */
#define REG_PMU_APB_PD_CP1_L1RAM_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0054)	/*PD_CP1_L1RAM_CFG */
#define REG_PMU_APB_PD_CP1_SYS_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0058)	/*PD_CP1_SYS_CFG */
#define REG_PMU_APB_PD_CP2_ARM9_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x005C)	/*PD_CP2_ARM9_CFG */
#define REG_PMU_APB_PD_CP2_WIFI_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0060)	/*PD_CP2_WIFI_CFG */
#define REG_PMU_APB_AP_WAKEUP_POR_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0064)	/*AP_WAKEUP_POR_CFG */
#define REG_PMU_APB_PD_CP2_SYS_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0068)	/*PD_CP2_SYS_CFG */
#define REG_PMU_APB_PD_PUB_SYS_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x006C)	/*PD_PUB_SYS_CFG */
#define REG_PMU_APB_XTL_WAIT_CNT			SCI_ADDR(REGS_PMU_APB_BASE, 0x0070)	/*XTL_WAIT_CNT */
#define REG_PMU_APB_XTLBUF_WAIT_CNT			SCI_ADDR(REGS_PMU_APB_BASE, 0x0074)	/*XTLBUF_WAIT_CNT */
#define REG_PMU_APB_PLL_WAIT_CNT1			SCI_ADDR(REGS_PMU_APB_BASE, 0x0078)	/*PLL_WAIT_CNT1 */
#define REG_PMU_APB_PLL_WAIT_CNT2			SCI_ADDR(REGS_PMU_APB_BASE, 0x007C)	/*PLL_WAIT_CNT2 */
#define REG_PMU_APB_XTL0_REL_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0080)	/*XTL0_REL_CFG */
#define REG_PMU_APB_XTL1_REL_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0084)	/*XTL1_REL_CFG */
#define REG_PMU_APB_XTL2_REL_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0088)	/*XTL1_REL_CFG */
#define REG_PMU_APB_XTLBUF0_REL_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x008C)	/*XTLBUF0_REL_CFG */
#define REG_PMU_APB_XTLBUF1_REL_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0090)	/*XTLBUF1_REL_CFG */
#define REG_PMU_APB_MPLL_REL_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0094)	/*MPLL_REL_CFG */
#define REG_PMU_APB_DPLL_REL_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0098)	/*DPLL_REL_CFG */
#define REG_PMU_APB_TDPLL_REL_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x009C)	/*TDPLL_REL_CFG */
#define REG_PMU_APB_WPLL_REL_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x00A0)	/*WPLL_REL_CFG */
#define REG_PMU_APB_CPLL_REL_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x00A4)	/*CPLL_REL_CFG */
#define REG_PMU_APB_WIFIPLL1_REL_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x00A8)	/*WIFIPLL1_REL_CFG */
#define REG_PMU_APB_WIFIPLL2_REL_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x00AC)	/*WIFIPLL2_REL_CFG */
#define REG_PMU_APB_CP_SOFT_RST				SCI_ADDR(REGS_PMU_APB_BASE, 0x00B0)	/*CP_SOFT_RST */
#define REG_PMU_APB_CP_SLP_STATUS_DBG0			SCI_ADDR(REGS_PMU_APB_BASE, 0x00B4)	/*CP_SLP_STATUS_DBG0 */
#define REG_PMU_APB_CP_SLP_STATUS_DBG1			SCI_ADDR(REGS_PMU_APB_BASE, 0x00B8)	/*CP_SLP_STATUS_DBG1 */
#define REG_PMU_APB_PWR_STATUS0_DBG			SCI_ADDR(REGS_PMU_APB_BASE, 0x00BC)	/*PWR_STATUS0_DBG */
#define REG_PMU_APB_PWR_STATUS1_DBG			SCI_ADDR(REGS_PMU_APB_BASE, 0x00C0)	/*PWR_STATUS1_DBG */
#define REG_PMU_APB_PWR_STATUS2_DBG			SCI_ADDR(REGS_PMU_APB_BASE, 0x00C4)	/*PWR_STATUS2_DBG */
#define REG_PMU_APB_PWR_STATUS3_DBG			SCI_ADDR(REGS_PMU_APB_BASE, 0x00C8)	/*PWR_STATUS3_DBG */
#define REG_PMU_APB_SLEEP_CTRL				SCI_ADDR(REGS_PMU_APB_BASE, 0x00CC)	/*SLEEP_CTRL */
#define REG_PMU_APB_DDR_SLEEP_CTRL			SCI_ADDR(REGS_PMU_APB_BASE, 0x00D0)	/*DDR_SLEEP_CTRL */
#define REG_PMU_APB_SLEEP_STATUS			SCI_ADDR(REGS_PMU_APB_BASE, 0x00D4)	/*SLEEP_STATUS */
#define REG_PMU_APB_PLL_DIV_AUTO_GATE_EN		SCI_ADDR(REGS_PMU_APB_BASE, 0x00D8)	/*PLL_DIV_AUTO_GATE_EN */
#define REG_PMU_APB_PLL_DIV_EN1				SCI_ADDR(REGS_PMU_APB_BASE, 0x00DC)	/*PLL_DIV_EN1 */
#define REG_PMU_APB_PLL_DIV_EN2				SCI_ADDR(REGS_PMU_APB_BASE, 0x00E0)	/*PLL_DIV_EN2 */
#define REG_PMU_APB_CA7_TOP_CFG				SCI_ADDR(REGS_PMU_APB_BASE, 0x00E4)	/*CA7_TOP_CFG */
#define REG_PMU_APB_CA7_C0_CFG				SCI_ADDR(REGS_PMU_APB_BASE, 0x00E8)	/*CA7_C0_CFG */
#define REG_PMU_APB_CA7_C1_CFG				SCI_ADDR(REGS_PMU_APB_BASE, 0x00EC)	/*CA7_C1_CFG */
#define REG_PMU_APB_CA7_C2_CFG				SCI_ADDR(REGS_PMU_APB_BASE, 0x00F0)	/*CA7_C2_CFG */
#define REG_PMU_APB_CA7_C3_CFG				SCI_ADDR(REGS_PMU_APB_BASE, 0x00F4)	/*CA7_C3_CFG */
#define REG_PMU_APB_DDR_CHN_SLEEP_CTRL0			SCI_ADDR(REGS_PMU_APB_BASE, 0x00F8)	/*DDR_CHN_SLEEP_CTRL0 */
#define REG_PMU_APB_DDR_CHN_SLEEP_CTRL1			SCI_ADDR(REGS_PMU_APB_BASE, 0x00FC)	/*DDR_CHN_SLEEP_CTRL1 */
#define REG_PMU_APB_BISR_CFG				SCI_ADDR(REGS_PMU_APB_BASE, 0x0100)	/*BISR_CFG */
#define REG_PMU_APB_CGM_AP_AUTO_GATE_EN			SCI_ADDR(REGS_PMU_APB_BASE, 0x0104)	/*CGM_AP_AUTO_GATE_EN */
#define REG_PMU_APB_CGM_GPU_MM_AUTO_GATE_EN		SCI_ADDR(REGS_PMU_APB_BASE, 0x0108)	/*CGM_GPU_MM_AUTO_GATE_EN */
#define REG_PMU_APB_CGM_CP0_AUTO_GATE_EN		SCI_ADDR(REGS_PMU_APB_BASE, 0x010C)	/*CGM_CP0_AUTO_GATE_EN */
#define REG_PMU_APB_CGM_CP1_AUTO_GATE_EN		SCI_ADDR(REGS_PMU_APB_BASE, 0x0110)	/*CGM_CP1_AUTO_GATE_EN */
#define REG_PMU_APB_CGM_CP2_AUTO_GATE_EN		SCI_ADDR(REGS_PMU_APB_BASE, 0x0114)	/*CGM_CP2_AUTO_GATE_EN */
#define REG_PMU_APB_CGM_AP_EN				SCI_ADDR(REGS_PMU_APB_BASE, 0x0118)	/*CGM_AP_EN */
#define REG_PMU_APB_CGM_GPU_MM_EN			SCI_ADDR(REGS_PMU_APB_BASE, 0x011C)	/*CGM_GPU_MM_EN */
#define REG_PMU_APB_CGM_CP0_EN				SCI_ADDR(REGS_PMU_APB_BASE, 0x0120)	/*CGM_CP0_EN */
#define REG_PMU_APB_CGM_CP1_EN				SCI_ADDR(REGS_PMU_APB_BASE, 0x0124)	/*CGM_CP1_EN */
#define REG_PMU_APB_CGM_CP2_EN				SCI_ADDR(REGS_PMU_APB_BASE, 0x0128)	/*CGM_CP2_EN */
#define REG_PMU_APB_DDR_OP_MODE_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x012C)	/*DDR_OP_MODE_CFG */
#define REG_PMU_APB_DDR_PHY_RET_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0130)	/*DDR_PHY_RET_CFG */
#define REG_PMU_APB_26M_SEL_CFG				SCI_ADDR(REGS_PMU_APB_BASE, 0x0134)	/*26M_SEL_CFG */
#define REG_PMU_APB_MEM_PD_CFG0				SCI_ADDR(REGS_PMU_APB_BASE, 0x0138)	/*MEM_PD_CFG0 */
#define REG_PMU_APB_MEM_PD_CFG1				SCI_ADDR(REGS_PMU_APB_BASE, 0x013C)	/*MEM_PD_CFG1 */
#define REG_PMU_APB_PD_DDR_PUBL_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0140)	/*PD_DDR_PUBL_CFG */
#define REG_PMU_APB_PD_DDR_PHY_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0144)	/*PD_DDR_PHY_CFG */
#define REG_PMU_APB_BISR_CFG2				SCI_ADDR(REGS_PMU_APB_BASE, 0x0148)	/*BISR_CFG2 */
#define REG_PMU_APB_DEBUG_PD0				SCI_ADDR(REGS_PMU_APB_BASE, 0x014C)	/*DEBUG_PD0 */
#define REG_PMU_APB_DEBUG_PD1				SCI_ADDR(REGS_PMU_APB_BASE, 0x0150)	/*DEBUG_PD1 */
#define REG_PMU_APB_DEBUG_PD2				SCI_ADDR(REGS_PMU_APB_BASE, 0x0154)	/*DEBUG_PD2 */
#define REG_PMU_APB_DEBUG_PD3				SCI_ADDR(REGS_PMU_APB_BASE, 0x0158)	/*DEBUG_PD3 */
#define REG_PMU_APB_INT_DISABLE				SCI_ADDR(REGS_PMU_APB_BASE, 0x015C)	/*INT_DIABLE */
#define REG_PMU_APB_PMU_DEBUG_CFG			SCI_ADDR(REGS_PMU_APB_BASE, 0x0160)	/*PMU_DEBUG_CFG */

/* bits definitions for register REG_PMU_APB_PD_CA7_TOP_CFG */
#define BIT_PD_CA7_TOP_DBG_SHUTDOWN_EN				( BIT(28) )
#define BIT_PD_CA7_TOP_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_CA7_TOP_AUTO_SHUTDOWN_EN				( BIT(24) )
#define BITS_PD_CA7_TOP_PWR_ON_DLY(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CA7_TOP_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CA7_TOP_ISO_ON_DLY(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CA7_C0_CFG */
#define BIT_PD_CA7_C0_DBG_SHUTDOWN_EN				( BIT(28) )
#define BIT_PD_CA7_C0_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_CA7_C0_AUTO_SHUTDOWN_EN				( BIT(24) )
#define BITS_PD_CA7_C0_PWR_ON_DLY(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CA7_C0_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CA7_C0_ISO_ON_DLY(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CA7_C1_CFG */
#define BIT_PD_CA7_C1_DBG_SHUTDOWN_EN				( BIT(28) )
#define BIT_PD_CA7_C1_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_CA7_C1_AUTO_SHUTDOWN_EN				( BIT(24) )
#define BITS_PD_CA7_C1_PWR_ON_DLY(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CA7_C1_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CA7_C1_ISO_ON_DLY(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CA7_C2_CFG */
#define BIT_PD_CA7_C2_DBG_SHUTDOWN_EN				( BIT(28) )
#define BIT_PD_CA7_C2_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_CA7_C2_AUTO_SHUTDOWN_EN				( BIT(24) )
#define BITS_PD_CA7_C2_PWR_ON_DLY(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CA7_C2_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CA7_C2_ISO_ON_DLY(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CA7_C3_CFG */
#define BIT_PD_CA7_C3_DBG_SHUTDOWN_EN				( BIT(28) )
#define BIT_PD_CA7_C3_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_CA7_C3_AUTO_SHUTDOWN_EN				( BIT(24) )
#define BITS_PD_CA7_C3_PWR_ON_DLY(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CA7_C3_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CA7_C3_ISO_ON_DLY(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_AP_DISP_CFG */

/* bits definitions for register REG_PMU_APB_PD_AP_SYS_CFG */
#define BIT_PD_AP_SYS_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_AP_SYS_AUTO_SHUTDOWN_EN				( BIT(24) )
#define BITS_PD_AP_SYS_PWR_ON_DLY(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_AP_SYS_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_AP_SYS_ISO_ON_DLY(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_MM_TOP_CFG */
#define BIT_PD_MM_TOP_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_MM_TOP_AUTO_SHUTDOWN_EN				( BIT(24) )
#define BITS_PD_MM_TOP_PWR_ON_DLY(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_MM_TOP_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_MM_TOP_ISO_ON_DLY(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_GPU_TOP_CFG */
#define BIT_PD_GPU_TOP_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_GPU_TOP_AUTO_SHUTDOWN_EN				( BIT(24) )
#define BITS_PD_GPU_TOP_PWR_ON_DLY(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_GPU_TOP_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_GPU_TOP_ISO_ON_DLY(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CP0_ARM9_0_CFG */
#define BIT_PD_CP0_ARM9_0_FORCE_SHUTDOWN			( BIT(25) )
#define BIT_PD_CP0_ARM9_0_AUTO_SHUTDOWN_EN			( BIT(24) )
#define BITS_PD_CP0_ARM9_0_PWR_ON_DLY(_X_)			( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP0_ARM9_0_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP0_ARM9_0_ISO_ON_DLY(_X_)			( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CP0_ARM9_1_CFG */
#define BIT_PD_CP0_ARM9_1_FORCE_SHUTDOWN			( BIT(25) )
#define BIT_PD_CP0_ARM9_1_AUTO_SHUTDOWN_EN			( BIT(24) )
#define BITS_PD_CP0_ARM9_1_PWR_ON_DLY(_X_)			( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP0_ARM9_1_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP0_ARM9_1_ISO_ON_DLY(_X_)			( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CP0_ARM9_2_CFG */
#define BIT_PD_CP0_ARM9_2_FORCE_SHUTDOWN			( BIT(25) )
#define BIT_PD_CP0_ARM9_2_AUTO_SHUTDOWN_EN			( BIT(24) )
#define BITS_PD_CP0_ARM9_2_PWR_ON_DLY(_X_)			( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP0_ARM9_2_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP0_ARM9_2_ISO_ON_DLY(_X_)			( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CP0_HU3GE_CFG */
#define BIT_PD_CP0_HU3GE_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_CP0_HU3GE_AUTO_SHUTDOWN_EN			( BIT(24) )
#define BITS_PD_CP0_HU3GE_PWR_ON_DLY(_X_)			( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP0_HU3GE_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP0_HU3GE_ISO_ON_DLY(_X_)			( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CP0_GSM_CFG */
#define BIT_PD_CP0_GSM_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_CP0_GSM_AUTO_SHUTDOWN_EN				( BIT(24) )
#define BITS_PD_CP0_GSM_PWR_ON_DLY(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP0_GSM_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP0_GSM_ISO_ON_DLY(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CP0_TD_CFG */
#define BIT_PD_CP0_TD_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_CP0_TD_AUTO_SHUTDOWN_EN				( BIT(24) )
#define BITS_PD_CP0_TD_PWR_ON_DLY(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP0_TD_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP0_TD_ISO_ON_DLY(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CP0_CEVA_CFG */
#define BIT_PD_CP0_CEVA_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_CP0_CEVA_AUTO_SHUTDOWN_EN			( BIT(24) )
#define BITS_PD_CP0_CEVA_PWR_ON_DLY(_X_)			( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP0_CEVA_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP0_CEVA_ISO_ON_DLY(_X_)			( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CP0_HARQ_CFG */
#define BIT_PD_CP0_HARQ_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_CP0_HARQ_AUTO_SHUTDOWN_EN			( BIT(24) )
#define BITS_PD_CP0_HARQ_PWR_ON_DLY(_X_)			( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP0_HARQ_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP0_HARQ_ISO_ON_DLY(_X_)			( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CP0_SYS_CFG */
#define BIT_CP0_FORCE_DEEP_SLEEP				( BIT(28) )
#define BIT_PD_CP0_SYS_FORCE_SHUTDOWN				( BIT(25) )
#define BITS_PD_CP0_SYS_PWR_ON_DLY(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP0_SYS_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP0_SYS_ISO_ON_DLY(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CP1_ARM9_CFG */
#define BIT_PD_CP1_ARM9_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_CP1_ARM9_AUTO_SHUTDOWN_EN			( BIT(24) )
#define BITS_PD_CP1_ARM9_PWR_ON_DLY(_X_)			( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP1_ARM9_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP1_ARM9_ISO_ON_DLY(_X_)			( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CP1_GSM_CFG */
#define BIT_PD_CP1_GSM_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_CP1_GSM_AUTO_SHUTDOWN_EN				( BIT(24) )
#define BITS_PD_CP1_GSM_PWR_ON_DLY(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP1_GSM_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP1_GSM_ISO_ON_DLY(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CP1_TD_CFG */
#define BIT_PD_CP1_TD_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_CP1_TD_AUTO_SHUTDOWN_EN				( BIT(24) )
#define BITS_PD_CP1_TD_PWR_ON_DLY(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP1_TD_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP1_TD_ISO_ON_DLY(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CP1_L1RAM_CFG */
#define BIT_PD_CP1_L1RAM_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_CP1_L1RAM_AUTO_SHUTDOWN_EN			( BIT(24) )
#define BITS_PD_CP1_L1RAM_PWR_ON_DLY(_X_)			( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP1_L1RAM_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP1_L1RAM_ISO_ON_DLY(_X_)			( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CP1_SYS_CFG */
#define BIT_CP1_FORCE_DEEP_SLEEP				( BIT(28) )
#define BIT_PD_CP1_SYS_FORCE_SHUTDOWN				( BIT(25) )
#define BITS_PD_CP1_SYS_PWR_ON_DLY(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP1_SYS_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP1_SYS_ISO_ON_DLY(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CP2_ARM9_CFG */
#define BIT_PD_CP2_ARM9_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_CP2_ARM9_AUTO_SHUTDOWN_EN			( BIT(24) )
#define BITS_PD_CP2_ARM9_PWR_ON_DLY(_X_)			( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP2_ARM9_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP2_ARM9_ISO_ON_DLY(_X_)			( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_CP2_WIFI_CFG */
#define BIT_PD_CP2_WIFI_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_CP2_WIFI_AUTO_SHUTDOWN_EN			( BIT(24) )
#define BITS_PD_CP2_WIFI_PWR_ON_DLY(_X_)			( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP2_WIFI_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP2_WIFI_ISO_ON_DLY(_X_)			( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_AP_WAKEUP_POR_CFG */
#define BIT_AP_WAKEUP_POR_N					( BIT(0) )

/* bits definitions for register REG_PMU_APB_PD_CP2_SYS_CFG */
#define BIT_CP2_FORCE_DEEP_SLEEP				( BIT(28) )
#define BIT_PD_CP2_SYS_FORCE_SHUTDOWN				( BIT(25) )
#define BITS_PD_CP2_SYS_PWR_ON_DLY(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP2_SYS_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP2_SYS_ISO_ON_DLY(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_PUB_SYS_CFG */
#define BIT_PD_PUB_SYS_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_PUB_SYS_AUTO_SHUTDOWN_EN				( BIT(24) )
#define BITS_PD_PUB_SYS_PWR_ON_DLY(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_PUB_SYS_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_PUB_SYS_ISO_ON_DLY(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_XTL_WAIT_CNT */
#define BITS_XTL1_WAIT_CNT(_X_)					( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_XTL0_WAIT_CNT(_X_)					( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_XTLBUF_WAIT_CNT */
#define BITS_XTLBUF1_WAIT_CNT(_X_)				( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_XTLBUF0_WAIT_CNT(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PLL_WAIT_CNT1 */
#define BITS_WPLL_WAIT_CNT(_X_)					( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)|BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_TDPLL_WAIT_CNT(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DPLL_WAIT_CNT(_X_)					( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_MPLL_WAIT_CNT(_X_)					( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PLL_WAIT_CNT2 */
#define BITS_WIFIPLL2_WAIT_CNT(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_WIFIPLL1_WAIT_CNT(_X_)				( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_CPLL_WAIT_CNT(_X_)					( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_XTL0_REL_CFG */
#define BIT_XTL0_CP2_SEL					( BIT(3) )
#define BIT_XTL0_CP1_SEL					( BIT(2) )
#define BIT_XTL0_CP0_SEL					( BIT(1) )
#define BIT_XTL0_AP_SEL						( BIT(0) )

/* bits definitions for register REG_PMU_APB_XTL1_REL_CFG */
#define BIT_XTL1_CP2_SEL					( BIT(3) )
#define BIT_XTL1_CP1_SEL					( BIT(2) )
#define BIT_XTL1_CP0_SEL					( BIT(1) )
#define BIT_XTL1_AP_SEL						( BIT(0) )

/* bits definitions for register REG_PMU_APB_XTL2_REL_CFG */
#define BIT_XTL2_CP2_SEL					( BIT(3) )
#define BIT_XTL2_CP1_SEL					( BIT(2) )
#define BIT_XTL2_CP0_SEL					( BIT(1) )
#define BIT_XTL2_AP_SEL						( BIT(0) )

/* bits definitions for register REG_PMU_APB_XTLBUF0_REL_CFG */
#define BIT_XTLBUF0_CP2_SEL					( BIT(3) )
#define BIT_XTLBUF0_CP1_SEL					( BIT(2) )
#define BIT_XTLBUF0_CP0_SEL					( BIT(1) )
#define BIT_XTLBUF0_AP_SEL					( BIT(0) )

/* bits definitions for register REG_PMU_APB_XTLBUF1_REL_CFG */
#define BIT_XTLBUF1_CP2_SEL					( BIT(3) )
#define BIT_XTLBUF1_CP1_SEL					( BIT(2) )
#define BIT_XTLBUF1_CP0_SEL					( BIT(1) )
#define BIT_XTLBUF1_AP_SEL					( BIT(0) )

/* bits definitions for register REG_PMU_APB_MPLL_REL_CFG */
#define BIT_MPLL_REF_SEL					( BIT(4) )
#define BIT_MPLL_CP2_SEL					( BIT(3) )
#define BIT_MPLL_CP1_SEL					( BIT(2) )
#define BIT_MPLL_CP0_SEL					( BIT(1) )
#define BIT_MPLL_AP_SEL						( BIT(0) )

/* bits definitions for register REG_PMU_APB_DPLL_REL_CFG */
#define BIT_DPLL_REF_SEL					( BIT(4) )
#define BIT_DPLL_CP2_SEL					( BIT(3) )
#define BIT_DPLL_CP1_SEL					( BIT(2) )
#define BIT_DPLL_CP0_SEL					( BIT(1) )
#define BIT_DPLL_AP_SEL						( BIT(0) )

/* bits definitions for register REG_PMU_APB_TDPLL_REL_CFG */
#define BIT_TDPLL_REF_SEL					( BIT(4) )
#define BIT_TDPLL_CP2_SEL					( BIT(3) )
#define BIT_TDPLL_CP1_SEL					( BIT(2) )
#define BIT_TDPLL_CP0_SEL					( BIT(1) )
#define BIT_TDPLL_AP_SEL					( BIT(0) )

/* bits definitions for register REG_PMU_APB_WPLL_REL_CFG */
#define BIT_WPLL_REF_SEL					( BIT(4) )
#define BIT_WPLL_CP2_SEL					( BIT(3) )
#define BIT_WPLL_CP1_SEL					( BIT(2) )
#define BIT_WPLL_CP0_SEL					( BIT(1) )
#define BIT_WPLL_AP_SEL						( BIT(0) )

/* bits definitions for register REG_PMU_APB_CPLL_REL_CFG */
#define BIT_CPLL_REF_SEL					( BIT(4) )
#define BIT_CPLL_CP2_SEL					( BIT(3) )
#define BIT_CPLL_CP1_SEL					( BIT(2) )
#define BIT_CPLL_CP0_SEL					( BIT(1) )
#define BIT_CPLL_AP_SEL						( BIT(0) )

/* bits definitions for register REG_PMU_APB_WIFIPLL1_REL_CFG */
#define BIT_WIFIPLL1_REF_SEL					( BIT(4) )
#define BIT_WIFIPLL1_CP2_SEL					( BIT(3) )
#define BIT_WIFIPLL1_CP1_SEL					( BIT(2) )
#define BIT_WIFIPLL1_CP0_SEL					( BIT(1) )
#define BIT_WIFIPLL1_AP_SEL					( BIT(0) )

/* bits definitions for register REG_PMU_APB_WIFIPLL2_REL_CFG */
#define BIT_WIFIPLL2_REF_SEL					( BIT(4) )
#define BIT_WIFIPLL2_CP2_SEL					( BIT(3) )
#define BIT_WIFIPLL2_CP1_SEL					( BIT(2) )
#define BIT_WIFIPLL2_CP0_SEL					( BIT(1) )
#define BIT_WIFIPLL2_AP_SEL					( BIT(0) )

/* bits definitions for register REG_PMU_APB_CP_SOFT_RST */
#define BIT_PUB_SOFT_RST					( BIT(6) )
#define BIT_AP_SOFT_RST						( BIT(5) )
#define BIT_GPU_SOFT_RST					( BIT(4) )
#define BIT_MM_SOFT_RST						( BIT(3) )
#define BIT_CP2_SOFT_RST					( BIT(2) )
#define BIT_CP1_SOFT_RST					( BIT(1) )
#define BIT_CP0_SOFT_RST					( BIT(0) )

/* bits definitions for register REG_PMU_APB_CP_SLP_STATUS_DBG0 */
#define BITS_CP1_DEEP_SLP_DBG(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)|BIT(24)|BIT(25)|BIT(26)|BIT(27)|BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_CP0_DEEP_SLP_DBG(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_PMU_APB_CP_SLP_STATUS_DBG1 */
#define BITS_CP2_DEEP_SLP_DBG(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)|BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )

/* bits definitions for register REG_PMU_APB_PWR_STATUS0_DBG */
#define BITS_PD_MM_TOP_STATE(_X_)				( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_PD_GPU_TOP_STATE(_X_)				( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_PD_CA7_C3_STATE(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_PD_CA7_C2_STATE(_X_)				( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CA7_C1_STATE(_X_)				( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_PD_CA7_C0_STATE(_X_)				( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_PD_CA7_TOP_STATE(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PMU_APB_PWR_STATUS1_DBG */
#define BITS_PD_CP0_SYS_STATE(_X_)				( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_PD_CP0_GSM_STATE(_X_)				( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP0_HU3GE_STATE(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_PD_CP0_ARM9_2_STATE(_X_)				( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP0_ARM9_1_STATE(_X_)				( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_PD_CP0_ARM9_0_STATE(_X_)				( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_PD_AP_SYS_STATE(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PMU_APB_PWR_STATUS2_DBG */
#define BITS_PD_CP2_WIFI_STATE(_X_)				( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_PD_CP2_ARM9_STATE(_X_)				( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP1_SYS_STATE(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_PD_CP1_L1RAM_STATE(_X_)				( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_CP1_TD_STATE(_X_)				( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_PD_CP1_GSM_STATE(_X_)				( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_PD_CP1_ARM9_STATE(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PMU_APB_PWR_STATUS3_DBG */
#define BITS_PD_CP0_HARQ_STATE(_X_)				( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_PD_CP0_CEVA_STATE(_X_)				( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_CP0_TD_STATE(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_PD_DDR_PHY_STATE(_X_)				( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_DDR_PUBL_STATE(_X_)				( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_PD_PUB_SYS_STATE(_X_)				( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_PD_CP2_SYS_STATE(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PMU_APB_SLEEP_CTRL */
#define BIT_CP0_FORCE_SLEEP					( BIT(12) )
#define BIT_CP2_SLEEP_XTL_ON					( BIT(11) )
#define BIT_CP1_SLEEP_XTL_ON					( BIT(10) )
#define BIT_CP0_SLEEP_XTL_ON					( BIT(9) )
#define BIT_AP_SLEEP_XTL_ON					( BIT(8) )
#define BIT_DISP_DEEP_SLEEP					( BIT(6) )
#define BIT_GPU_DEEP_SLEEP					( BIT(5) )
#define BIT_MM_DEEP_SLEEP					( BIT(4) )
#define BIT_CP2_DEEP_SLEEP					( BIT(3) )
#define BIT_CP1_DEEP_SLEEP					( BIT(2) )
#define BIT_CP0_DEEP_SLEEP					( BIT(1) )
#define BIT_AP_DEEP_SLEEP					( BIT(0) )

/* bits definitions for register REG_PMU_APB_DDR_SLEEP_CTRL */
#define BIT_DDR_PUBL_APB_SOFT_RST				( BIT(12) )
#define BIT_DDR_UMCTL_APB_SOFT_RST				( BIT(11) )
#define BIT_DDR_PUBL_SOFT_RST					( BIT(10) )
#define BIT_DDR_UMCTL_SOFT_RST					( BIT(9) )
#define BIT_DDR_PHY_SOFT_RST					( BIT(8) )
#define BIT_DDR_PHY_AUTO_GATE_EN				( BIT(6) )
#define BIT_DDR_PUBL_AUTO_GATE_EN				( BIT(5) )
#define BIT_DDR_UMCTL_AUTO_GATE_EN				( BIT(4) )
#define BIT_DDR_PHY_EB						( BIT(2) )
#define BIT_DDR_UMCTL_EB					( BIT(1) )
#define BIT_DDR_PUBL_EB						( BIT(0) )

/* bits definitions for register REG_PMU_APB_SLEEP_STATUS */
#define BITS_CP2_SLP_STATUS(_X_)				( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_CP1_SLP_STATUS(_X_)				( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_CP0_SLP_STATUS(_X_)				( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_AP_SLP_STATUS(_X_)					( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

/* bits definitions for register REG_PMU_APB_PLL_DIV_AUTO_GATE_EN */
#define BIT_WIFIPLL2_DIV_AUTO_GATE_EN				( BIT(6) )
#define BIT_WIFIPLL1_DIV_AUTO_GATE_EN				( BIT(5) )
#define BIT_WPLL_DIV_AUTO_GATE_EN				( BIT(4) )
#define BIT_TDPLL_DIV_AUTO_GATE_EN				( BIT(3) )
#define BIT_CPLL_DIV_AUTO_GATE_EN				( BIT(2) )
#define BIT_DPLL_DIV_AUTO_GATE_EN				( BIT(1) )
#define BIT_MPLL_DIV_AUTO_GATE_EN				( BIT(0) )

/* bits definitions for register REG_PMU_APB_PLL_DIV_EN1 */
#define BIT_WIFIPLL2_80M_EN					( BIT(31) )
#define BIT_WIFIPLL2_160M_EN					( BIT(30) )
#define BIT_WIFIPLL2_120M_EN					( BIT(29) )
#define BIT_WIFIPLL1_20M_EN					( BIT(28) )
#define BIT_WIFIPLL1_40M_EN					( BIT(27) )
#define BIT_WIFIPLL1_80M_EN					( BIT(26) )
#define BIT_WIFIPLL1_44M_EN					( BIT(25) )
#define BIT_WPLL_76M8_EN					( BIT(24) )
#define BIT_WPLL_51M2_EN					( BIT(23) )
#define BIT_WPLL_102M4_EN					( BIT(22) )
#define BIT_WPLL_307M2_EN					( BIT(21) )
#define BIT_WPLL_460M8_EN					( BIT(20) )
#define BIT_CPLL_52M_EN						( BIT(19) )
#define BIT_CPLL_104M_EN					( BIT(18) )
#define BIT_CPLL_208M_EN					( BIT(17) )
#define BIT_CPLL_312M_EN					( BIT(16) )
#define BIT_TDPLL_38M4_EN					( BIT(15) )
#define BIT_TDPLL_76M8_EN					( BIT(14) )
#define BIT_TDPLL_51M2_EN					( BIT(13) )
#define BIT_TDPLL_153M6_EN					( BIT(12) )
#define BIT_TDPLL_64M_EN					( BIT(11) )
#define BIT_TDPLL_128M_EN					( BIT(10) )
#define BIT_TDPLL_256M_EN					( BIT(9) )
#define BIT_TDPLL_12M_EN					( BIT(8) )
#define BIT_TDPLL_24M_EN					( BIT(7) )
#define BIT_TDPLL_48M_EN					( BIT(6) )
#define BIT_TDPLL_96M_EN					( BIT(5) )
#define BIT_TDPLL_192M_EN					( BIT(4) )
#define BIT_TDPLL_384M_EN					( BIT(3) )
#define BIT_DPLL_44M_EN						( BIT(2) )
#define BIT_MPLL_37M5_EN					( BIT(1) )
#define BIT_MPLL_300M_EN					( BIT(0) )

/* bits definitions for register REG_PMU_APB_PLL_DIV_EN2 */
#define BIT_DPLL_533M_EN					( BIT(2) )
#define BIT_WIFIPLL2_20M_EN					( BIT(1) )
#define BIT_WIFIPLL2_40M_EN					( BIT(0) )

/* bits definitions for register REG_PMU_APB_CA7_TOP_CFG */
#define BIT_CA7_L2RSTDISABLE					( BIT(0) )

/* bits definitions for register REG_PMU_APB_CA7_C0_CFG */
#define BIT_CA7_VINITHI_C0					( BIT(0) )

/* bits definitions for register REG_PMU_APB_CA7_C1_CFG */
#define BIT_CA7_VINITHI_C1					( BIT(0) )

/* bits definitions for register REG_PMU_APB_CA7_C2_CFG */
#define BIT_CA7_VINITHI_C2					( BIT(0) )

/* bits definitions for register REG_PMU_APB_CA7_C3_CFG */
#define BIT_CA7_VINITHI_C3					( BIT(0) )

/* bits definitions for register REG_PMU_APB_DDR_CHN_SLEEP_CTRL0 */
#define BIT_DDR_CTRL_AXI_LP_EN					( BIT(31) )
#define BIT_DDR_CTRL_CGM_SEL					( BIT(30) )
#define BIT_DDR_CHN9_AXI_LP_EN					( BIT(25) )
#define BIT_DDR_CHN8_AXI_LP_EN					( BIT(24) )
#define BIT_DDR_CHN7_AXI_LP_EN					( BIT(23) )
#define BIT_DDR_CHN6_AXI_LP_EN					( BIT(22) )
#define BIT_DDR_CHN5_AXI_LP_EN					( BIT(21) )
#define BIT_DDR_CHN4_AXI_LP_EN					( BIT(20) )
#define BIT_DDR_CHN3_AXI_LP_EN					( BIT(19) )
#define BIT_DDR_CHN2_AXI_LP_EN					( BIT(18) )
#define BIT_DDR_CHN1_AXI_LP_EN					( BIT(17) )
#define BIT_DDR_CHN0_AXI_LP_EN					( BIT(16) )
#define BIT_DDR_CHN9_CGM_SEL					( BIT(9) )
#define BIT_DDR_CHN8_CGM_SEL					( BIT(8) )
#define BIT_DDR_CHN7_CGM_SEL					( BIT(7) )
#define BIT_DDR_CHN6_CGM_SEL					( BIT(6) )
#define BIT_DDR_CHN5_CGM_SEL					( BIT(5) )
#define BIT_DDR_CHN4_CGM_SEL					( BIT(4) )
#define BIT_DDR_CHN3_CGM_SEL					( BIT(3) )
#define BIT_DDR_CHN2_CGM_SEL					( BIT(2) )
#define BIT_DDR_CHN1_CGM_SEL					( BIT(1) )
#define BIT_DDR_CHN0_CGM_SEL					( BIT(0) )

/* bits definitions for register REG_PMU_APB_DDR_CHN_SLEEP_CTRL1 */
#define BIT_DDR_CHN9_AXI_STOP_SEL				( BIT(9) )
#define BIT_DDR_CHN8_AXI_STOP_SEL				( BIT(8) )
#define BIT_DDR_CHN7_AXI_STOP_SEL				( BIT(7) )
#define BIT_DDR_CHN6_AXI_STOP_SEL				( BIT(6) )
#define BIT_DDR_CHN5_AXI_STOP_SEL				( BIT(5) )
#define BIT_DDR_CHN4_AXI_STOP_SEL				( BIT(4) )
#define BIT_DDR_CHN3_AXI_STOP_SEL				( BIT(3) )
#define BIT_DDR_CHN2_AXI_STOP_SEL				( BIT(2) )
#define BIT_DDR_CHN1_AXI_STOP_SEL				( BIT(1) )
#define BIT_DDR_CHN0_AXI_STOP_SEL				( BIT(0) )

/* bits definitions for register REG_PMU_APB_BISR_CFG */
#define BIT_PD_CP0_CEVA_BISR_DONE				( BIT(31) )
#define BIT_PD_CP0_TD_BISR_DONE					( BIT(30) )
#define BIT_PD_CP1_TD_BISR_DONE					( BIT(29) )
#define BIT_PD_CP1_SYS_BISR_DONE				( BIT(28) )
#define BIT_PD_CP0_HU3GE_BISR_DONE				( BIT(27) )
#define BIT_PD_CP0_SYS_BISR_DONE				( BIT(26) )
#define BIT_PD_MM_TOP_BISR_DONE					( BIT(25) )
#define BIT_PD_GPU_TOP_BISR_DONE				( BIT(24) )
#define BIT_PD_CP0_CEVA_BISR_BUSY				( BIT(23) )
#define BIT_PD_CP0_TD_BISR_BUSY					( BIT(22) )
#define BIT_PD_CP1_TD_BISR_BUSY					( BIT(21) )
#define BIT_PD_CP1_SYS_BISR_BUSY				( BIT(20) )
#define BIT_PD_CP0_HU3GE_BISR_BUSY				( BIT(19) )
#define BIT_PD_CP0_SYS_BISR_BUSY				( BIT(18) )
#define BIT_PD_MM_TOP_BISR_BUSY					( BIT(17) )
#define BIT_PD_GPU_TOP_BISR_BUSY				( BIT(16) )
#define BIT_PD_CP0_CEVA_BISR_FORCE_EN				( BIT(15) )
#define BIT_PD_CP0_TD_BISR_FORCE_EN				( BIT(14) )
#define BIT_PD_CP1_TD_BISR_FORCE_EN				( BIT(13) )
#define BIT_PD_CP1_SYS_BISR_FORCE_EN				( BIT(12) )
#define BIT_PD_CP0_HU3GE_BISR_FORCE_EN				( BIT(11) )
#define BIT_PD_CP0_SYS_BISR_FORCE_EN				( BIT(10) )
#define BIT_PD_MM_TOP_BISR_FORCE_EN				( BIT(9) )
#define BIT_PD_GPU_TOP_BISR_FORCE_EN				( BIT(8) )
#define BIT_PD_CP1_TD_BISR_FORCE_BYP				( BIT(7) )
#define BIT_PD_CP0_CEVA_BISR_FORCE_BYP				( BIT(6) )
#define BIT_PD_CP0_TD_BISR_FORCE_BYP				( BIT(5) )
#define BIT_PD_CP1_SYS_BISR_FORCE_BYP				( BIT(4) )
#define BIT_PD_CP0_HU3GE_BISR_FORCE_BYP				( BIT(3) )
#define BIT_PD_CP0_SYS_BISR_FORCE_BYP				( BIT(2) )
#define BIT_PD_MM_TOP_BISR_FORCE_BYP				( BIT(1) )
#define BIT_PD_GPU_TOP_BISR_FORCE_BYP				( BIT(0) )

/* bits definitions for register REG_PMU_APB_CGM_AP_AUTO_GATE_EN */
#define BIT_CGM_307M2_AP_AUTO_GATE_EN				( BIT(21) )
#define BIT_CGM_208M_AP_AUTO_GATE_EN				( BIT(20) )
#define BIT_CGM_12M_AP_AUTO_GATE_EN				( BIT(19) )
#define BIT_CGM_24M_AP_AUTO_GATE_EN				( BIT(18) )
#define BIT_CGM_48M_AP_AUTO_GATE_EN				( BIT(17) )
#define BIT_CGM_51M2_AP_AUTO_GATE_EN				( BIT(16) )
#define BIT_CGM_64M_AP_AUTO_GATE_EN				( BIT(15) )
#define BIT_CGM_76M8_AP_AUTO_GATE_EN				( BIT(14) )
#define BIT_CGM_96M_AP_AUTO_GATE_EN				( BIT(13) )
#define BIT_CGM_128M_AP_AUTO_GATE_EN				( BIT(12) )
#define BIT_CGM_153M6_AP_AUTO_GATE_EN				( BIT(11) )
#define BIT_CGM_192M_AP_AUTO_GATE_EN				( BIT(10) )
#define BIT_CGM_256M_AP_AUTO_GATE_EN				( BIT(9) )
#define BIT_CGM_384M_AP_AUTO_GATE_EN				( BIT(8) )
#define BIT_CGM_312M_AP_AUTO_GATE_EN				( BIT(7) )
#define BIT_CGM_MPLL_AP_AUTO_GATE_EN				( BIT(6) )
#define BIT_CGM_WPLL_AP_AUTO_GATE_EN				( BIT(5) )
#define BIT_CGM_WIFIPLL1_AP_AUTO_GATE_EN			( BIT(4) )
#define BIT_CGM_TDPLL_AP_AUTO_GATE_EN				( BIT(3) )
#define BIT_CGM_CPLL_AP_AUTO_GATE_EN				( BIT(2) )
#define BIT_CGM_DPLL_AP_AUTO_GATE_EN				( BIT(1) )
#define BIT_CGM_26M_AP_AUTO_GATE_EN				( BIT(0) )

/* bits definitions for register REG_PMU_APB_CGM_GPU_MM_AUTO_GATE_EN */
#define BIT_CGM_312M_MM_AUTO_GATE_EN				( BIT(27) )
#define BIT_CGM_12M_MM_AUTO_GATE_EN				( BIT(26) )
#define BIT_CGM_24M_MM_AUTO_GATE_EN				( BIT(25) )
#define BIT_CGM_48M_MM_AUTO_GATE_EN				( BIT(24) )
#define BIT_CGM_64M_MM_AUTO_GATE_EN				( BIT(23) )
#define BIT_CGM_76M8_MM_AUTO_GATE_EN				( BIT(22) )
#define BIT_CGM_96M_MM_AUTO_GATE_EN				( BIT(21) )
#define BIT_CGM_128M_MM_AUTO_GATE_EN				( BIT(20) )
#define BIT_CGM_153M6_MM_AUTO_GATE_EN				( BIT(19) )
#define BIT_CGM_192M_MM_AUTO_GATE_EN				( BIT(18) )
#define BIT_CGM_256M_MM_AUTO_GATE_EN				( BIT(17) )
#define BIT_CGM_26M_MM_AUTO_GATE_EN				( BIT(16) )
#define BIT_CGM_153_6M_GPU_AUTO_GATE_EN				( BIT(6) )
#define BIT_CGM_384M_GPU_AUTO_GATE_EN				( BIT(5) )
#define BIT_CGM_460_8M_GPU_AUTO_GATE_EN				( BIT(4) )
#define BIT_CGM_256M_GPU_AUTO_GATE_EN				( BIT(3) )
#define BIT_CGM_208M_GPU_AUTO_GATE_EN				( BIT(2) )
#define BIT_CGM_312M_GPU_AUTO_GATE_EN				( BIT(1) )
#define BIT_CGM_512M_GPU_AUTO_GATE_EN				( BIT(0) )

/* bits definitions for register REG_PMU_APB_CGM_CP0_AUTO_GATE_EN */
#define BIT_CGM_312M_CP0_AUTO_GATE_EN				( BIT(16) )
#define BIT_CGM_208M_CP0_AUTO_GATE_EN				( BIT(15) )
#define BIT_CGM_256M_CP0_AUTO_GATE_EN				( BIT(14) )
#define BIT_CGM_460M8_CP0W_AUTO_GATE_EN				( BIT(13) )
#define BIT_CGM_307M2_CP0W_AUTO_GATE_EN				( BIT(12) )
#define BIT_CGM_51M2_CP0W_AUTO_GATE_EN				( BIT(11) )
#define BIT_CGM_76M8_CP0W_AUTO_GATE_EN				( BIT(10) )
#define BIT_CGM_102M4_CP0W_AUTO_GATE_EN				( BIT(9) )
#define BIT_CGM_192M_CP0_AUTO_GATE_EN				( BIT(8) )
#define BIT_CGM_51M2_CP0_AUTO_GATE_EN				( BIT(7) )
#define BIT_CGM_76M8_CP0_AUTO_GATE_EN				( BIT(6) )
#define BIT_CGM_153M6_CP0_AUTO_GATE_EN				( BIT(5) )
#define BIT_CGM_48M_CP0_AUTO_GATE_EN				( BIT(4) )
#define BIT_CGM_64M_CP0_AUTO_GATE_EN				( BIT(3) )
#define BIT_CGM_96M_CP0_AUTO_GATE_EN				( BIT(2) )
#define BIT_CGM_128M_CP0_AUTO_GATE_EN				( BIT(1) )
#define BIT_CGM_26M_CP0_AUTO_GATE_EN				( BIT(0) )

/* bits definitions for register REG_PMU_APB_CGM_CP1_AUTO_GATE_EN */
#define BIT_CGM_312M_CP1_AUTO_GATE_EN				( BIT(10) )
#define BIT_CGM_256M_CP1_AUTO_GATE_EN				( BIT(9) )
#define BIT_CGM_192M_CP1_AUTO_GATE_EN				( BIT(8) )
#define BIT_CGM_51M2_CP1_AUTO_GATE_EN				( BIT(7) )
#define BIT_CGM_76M8_CP1_AUTO_GATE_EN				( BIT(6) )
#define BIT_CGM_153M6_CP1_AUTO_GATE_EN				( BIT(5) )
#define BIT_CGM_48M_CP1_AUTO_GATE_EN				( BIT(4) )
#define BIT_CGM_96M_CP1_AUTO_GATE_EN				( BIT(3) )
#define BIT_CGM_64M_CP1_AUTO_GATE_EN				( BIT(2) )
#define BIT_CGM_128M_CP1_AUTO_GATE_EN				( BIT(1) )
#define BIT_CGM_26M_CP1_AUTO_GATE_EN				( BIT(0) )

/* bits definitions for register REG_PMU_APB_CGM_CP2_AUTO_GATE_EN */
#define BIT_CGM_153M6_CP2_AUTO_GATE_EN				( BIT(12) )
#define BIT_CGM_20M_CP2WF2_AUTO_GATE_EN				( BIT(11) )
#define BIT_CGM_80M_CP2WF2_AUTO_GATE_EN				( BIT(10) )
#define BIT_CGM_120M_CP2WF2_AUTO_GATE_EN			( BIT(9) )
#define BIT_CGM_160M_CP2WF2_AUTO_GATE_EN			( BIT(8) )
#define BIT_CGM_20M_CP2WF1_AUTO_GATE_EN				( BIT(7) )
#define BIT_CGM_44M_CP2WF1_AUTO_GATE_EN				( BIT(6) )
#define BIT_CGM_80M_CP2WF1_AUTO_GATE_EN				( BIT(5) )
#define BIT_CGM_256M_CP2_AUTO_GATE_EN				( BIT(4) )
#define BIT_CGM_104M_CP2_AUTO_GATE_EN				( BIT(3) )
#define BIT_CGM_208M_CP2_AUTO_GATE_EN				( BIT(2) )
#define BIT_CGM_312M_CP2_AUTO_GATE_EN				( BIT(1) )
#define BIT_CGM_26M_CP2_AUTO_GATE_EN				( BIT(0) )

/* bits definitions for register REG_PMU_APB_CGM_AP_EN */
#define BIT_CGM_307M2_AP_EN					( BIT(21) )
#define BIT_CGM_208M_AP_EN					( BIT(20) )
#define BIT_CGM_12M_AP_EN					( BIT(19) )
#define BIT_CGM_24M_AP_EN					( BIT(18) )
#define BIT_CGM_48M_AP_EN					( BIT(17) )
#define BIT_CGM_51M2_AP_EN					( BIT(16) )
#define BIT_CGM_64M_AP_EN					( BIT(15) )
#define BIT_CGM_76M8_AP_EN					( BIT(14) )
#define BIT_CGM_96M_AP_EN					( BIT(13) )
#define BIT_CGM_128M_AP_EN					( BIT(12) )
#define BIT_CGM_153M6_AP_EN					( BIT(11) )
#define BIT_CGM_192M_AP_EN					( BIT(10) )
#define BIT_CGM_256M_AP_EN					( BIT(9) )
#define BIT_CGM_384M_AP_EN					( BIT(8) )
#define BIT_CGM_312M_AP_EN					( BIT(7) )
#define BIT_CGM_MPLL_AP_EN					( BIT(6) )
#define BIT_CGM_WPLL_AP_EN					( BIT(5) )
#define BIT_CGM_WIFIPLL1_AP_EN					( BIT(4) )
#define BIT_CGM_TDPLL_AP_EN					( BIT(3) )
#define BIT_CGM_CPLL_AP_EN					( BIT(2) )
#define BIT_CGM_DPLL_AP_EN					( BIT(1) )
#define BIT_CGM_26M_AP_EN					( BIT(0) )

/* bits definitions for register REG_PMU_APB_CGM_GPU_MM_EN */
#define BIT_CGM_312M_MM_EN					( BIT(27) )
#define BIT_CGM_12M_MM_EN					( BIT(26) )
#define BIT_CGM_24M_MM_EN					( BIT(25) )
#define BIT_CGM_48M_MM_EN					( BIT(24) )
#define BIT_CGM_64M_MM_EN					( BIT(23) )
#define BIT_CGM_76M8_MM_EN					( BIT(22) )
#define BIT_CGM_96M_MM_EN					( BIT(21) )
#define BIT_CGM_128M_MM_EN					( BIT(20) )
#define BIT_CGM_153M6_MM_EN					( BIT(19) )
#define BIT_CGM_192M_MM_EN					( BIT(18) )
#define BIT_CGM_256M_MM_EN					( BIT(17) )
#define BIT_CGM_26M_MM_EN					( BIT(16) )
#define BIT_CGM_153_6M_GPU_EN					( BIT(6) )
#define BIT_CGM_384M_GPU_EN					( BIT(5) )
#define BIT_CGM_460_8M_GPU_EN					( BIT(4) )
#define BIT_CGM_256M_GPU_EN					( BIT(3) )
#define BIT_CGM_208M_GPU_EN					( BIT(2) )
#define BIT_CGM_312M_GPU_EN					( BIT(1) )
#define BIT_CGM_512M_GPU_EN					( BIT(0) )

/* bits definitions for register REG_PMU_APB_CGM_CP0_EN */
#define BIT_CGM_312M_CP0_EN					( BIT(16) )
#define BIT_CGM_208M_CP0_EN					( BIT(15) )
#define BIT_CGM_256M_CP0_EN					( BIT(14) )
#define BIT_CGM_460M8_CP0W_EN					( BIT(13) )
#define BIT_CGM_307M2_CP0W_EN					( BIT(12) )
#define BIT_CGM_51M2_CP0W_EN					( BIT(11) )
#define BIT_CGM_76M8_CP0W_EN					( BIT(10) )
#define BIT_CGM_102M4_CP0W_EN					( BIT(9) )
#define BIT_CGM_192M_CP0_EN					( BIT(8) )
#define BIT_CGM_51M2_CP0_EN					( BIT(7) )
#define BIT_CGM_76M8_CP0_EN					( BIT(6) )
#define BIT_CGM_153M6_CP0_EN					( BIT(5) )
#define BIT_CGM_48M_CP0_EN					( BIT(4) )
#define BIT_CGM_64M_CP0_EN					( BIT(3) )
#define BIT_CGM_96M_CP0_EN					( BIT(2) )
#define BIT_CGM_128M_CP0_EN					( BIT(1) )
#define BIT_CGM_26M_CP0_EN					( BIT(0) )

/* bits definitions for register REG_PMU_APB_CGM_CP1_EN */
#define BIT_CGM_312M_CP1_EN					( BIT(10) )
#define BIT_CGM_256M_CP1_EN					( BIT(9) )
#define BIT_CGM_192M_CP1_EN					( BIT(8) )
#define BIT_CGM_51M2_CP1_EN					( BIT(7) )
#define BIT_CGM_76M8_CP1_EN					( BIT(6) )
#define BIT_CGM_153M6_CP1_EN					( BIT(5) )
#define BIT_CGM_48M_CP1_EN					( BIT(4) )
#define BIT_CGM_96M_CP1_EN					( BIT(3) )
#define BIT_CGM_64M_CP1_EN					( BIT(2) )
#define BIT_CGM_128M_CP1_EN					( BIT(1) )
#define BIT_CGM_26M_CP1_EN					( BIT(0) )

/* bits definitions for register REG_PMU_APB_CGM_CP2_EN */
#define BIT_CGM_153M6_CP2_EN					( BIT(12) )
#define BIT_CGM_20M_CP2WF2_EN					( BIT(11) )
#define BIT_CGM_80M_CP2WF2_EN					( BIT(10) )
#define BIT_CGM_120M_CP2WF2_EN					( BIT(9) )
#define BIT_CGM_160M_CP2WF2_EN					( BIT(8) )
#define BIT_CGM_20M_CP2WF1_EN					( BIT(7) )
#define BIT_CGM_44M_CP2WF1_EN					( BIT(6) )
#define BIT_CGM_80M_CP2WF1_EN					( BIT(5) )
#define BIT_CGM_256M_CP2_EN					( BIT(4) )
#define BIT_CGM_104M_CP2_EN					( BIT(3) )
#define BIT_CGM_208M_CP2_EN					( BIT(2) )
#define BIT_CGM_312M_CP2_EN					( BIT(1) )
#define BIT_CGM_26M_CP2_EN					( BIT(0) )

/* bits definitions for register REG_PMU_APB_DDR_OP_MODE_CFG */
#define BIT_DDR_PHY_RET_EN					( BIT(28) )
#define BIT_DDR_PUBL_RET_EN					( BIT(27) )
#define BIT_DDR_PHY_ISO_RST_EN					( BIT(26) )
#define BIT_DDR_UMCTL_RET_EN					( BIT(25) )
#define BIT_DDR_PHY_AUTO_RET_EN					( BIT(24) )
#define BITS_DDR_OPERATE_MODE_CNT_LMT(_X_)			( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_DDR_OPERATE_MODE(_X_)				( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)) )
#define BITS_DDR_OPERATE_MODE_IDLE(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)) )

/* bits definitions for register REG_PMU_APB_DDR_PHY_RET_CFG */
#define BIT_DDR_PHY_CKE_RET_EN					( BIT(0) )

/* bits definitions for register REG_PMU_APB_26M_SEL_CFG */
#define BIT_CLK26MHZ_REF_1_SEL					( BIT(10) )
#define BIT_AON_MEM_PD_EN_CP2					( BIT(9) )
#define BIT_AON_MEM_PD_EN_CP0					( BIT(8) )
#define BIT_AON_MEM_PD_EN_AP					( BIT(7) )
#define BIT_LPLL_REF_SEL					( BIT(6) )
#define BIT_PUB_26M_SEL						( BIT(5) )
#define BIT_AON_26M_SEL						( BIT(4) )
#define BIT_CP2_26M_SEL						( BIT(3) )
#define BIT_CP1_26M_SEL						( BIT(2) )
#define BIT_CP0_26M_SEL						( BIT(1) )
#define BIT_AP_26M_SEL						( BIT(0) )

/* bits definitions for register REG_PMU_APB_MEM_PD_CFG0 */
#define BITS_CP0_W_MEM_PD_CFG_HARQ(_X_)				( (_X_) << 24 & (BIT(24)|BIT(25)) )
#define BITS_CP0_W_MEM_PD_CFG_UART1(_X_)			( (_X_) << 22 & (BIT(22)|BIT(23)) )
#define BITS_CP0_W_MEM_PD_CFG_UART0(_X_)			( (_X_) << 20 & (BIT(20)|BIT(21)) )
#define BITS_CP0_W_MEM_PD_CFG_IRAM(_X_)				( (_X_) << 18 & (BIT(18)|BIT(19)) )
#define BITS_CP0_W_MEM_PD_CFG_PERIF(_X_)			( (_X_) << 16 & (BIT(16)|BIT(17)) )
#define BITS_AON_MEM_PD_CFG_IRAM(_X_)				( (_X_) << 14 & (BIT(14)|BIT(15)) )
#define BITS_AON_MEM_PD_CFG_IMC3(_X_)				( (_X_) << 12 & (BIT(12)|BIT(13)) )
#define BITS_AON_MEM_PD_CFG_IMC2(_X_)				( (_X_) << 10 & (BIT(10)|BIT(11)) )
#define BITS_AON_MEM_PD_CFG_IMC1(_X_)				( (_X_) << 8 & (BIT(8)|BIT(9)) )
#define BITS_AON_MEM_PD_CFG_IMC0(_X_)				( (_X_) << 6 & (BIT(6)|BIT(7)) )
#define BITS_AON_MEM_PD_CFG_VBC(_X_)				( (_X_) << 4 & (BIT(4)|BIT(5)) )
#define BITS_AON_MEM_PD_CFG_AUD(_X_)				( (_X_) << 2 & (BIT(2)|BIT(3)) )
#define BITS_AON_MEM_PD_CFG_FM(_X_)				( (_X_) & (BIT(0)|BIT(1)) )

/* bits definitions for register REG_PMU_APB_MEM_PD_CFG1 */
#define BITS_CP0_DSP_MEM_PD_CFG_DMA(_X_)			( (_X_) << 24 & (BIT(24)|BIT(25)) )
#define BITS_CP0_DSP_MEM_PD_CFG_SHM(_X_)			( (_X_) << 22 & (BIT(22)|BIT(23)) )
#define BITS_CP0_DSP_MEM_PD_CFG_RFT(_X_)			( (_X_) << 20 & (BIT(20)|BIT(21)) )
#define BITS_CP0_DSP_MEM_PD_CFG_STC(_X_)			( (_X_) << 18 & (BIT(18)|BIT(19)) )
#define BITS_CP0_ARM_MEM_PD_CFG_IIS3(_X_)			( (_X_) << 16 & (BIT(16)|BIT(17)) )
#define BITS_CP0_ARM_MEM_PD_CFG_IIS2(_X_)			( (_X_) << 14 & (BIT(14)|BIT(15)) )
#define BITS_CP0_ARM_MEM_PD_CFG_IIS1(_X_)			( (_X_) << 12 & (BIT(12)|BIT(13)) )
#define BITS_CP0_ARM_MEM_PD_CFG_IIS0(_X_)			( (_X_) << 10 & (BIT(10)|BIT(11)) )
#define BITS_CP0_ARM_MEM_PD_CFG_UART1(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)) )
#define BITS_CP0_ARM_MEM_PD_CFG_UART0(_X_)			( (_X_) << 6 & (BIT(6)|BIT(7)) )
#define BITS_CP0_ARM_MEM_PD_CFG_EPT(_X_)			( (_X_) << 4 & (BIT(4)|BIT(5)) )
#define BITS_CP0_ARM_MEM_PD_CFG_LZMA(_X_)			( (_X_) << 2 & (BIT(2)|BIT(3)) )
#define BITS_CP0_ARM_MEM_PD_CFG_DMA(_X_)			( (_X_) & (BIT(0)|BIT(1)) )

/* bits definitions for register REG_PMU_APB_PD_DDR_PUBL_CFG */
#define BIT_PD_DDR_PUBL_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_DDR_PUBL_AUTO_SHUTDOWN_EN			( BIT(24) )
#define BITS_PD_DDR_PUBL_PWR_ON_DLY(_X_)			( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_DDR_PUBL_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_DDR_PUBL_ISO_ON_DLY(_X_)			( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_PD_DDR_PHY_CFG */
#define BIT_PD_DDR_PHY_FORCE_SHUTDOWN				( BIT(25) )
#define BIT_PD_DDR_PHY_AUTO_SHUTDOWN_EN				( BIT(24) )
#define BITS_PD_DDR_PHY_PWR_ON_DLY(_X_)				( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)|BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_PD_DDR_PHY_PWR_ON_SEQ_DLY(_X_)			( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_PD_DDR_PHY_ISO_ON_DLY(_X_)				( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4)|BIT(5)|BIT(6)|BIT(7)) )

/* bits definitions for register REG_PMU_APB_BISR_CFG2 */
#define BIT_PD_CA7_TOP_BISR_DONE				( BIT(15) )
#define BIT_PD_CA7_TOP_BISR_BUSY				( BIT(14) )
#define BIT_PD_CA7_TOP_BISR_FORCE_EN				( BIT(13) )
#define BIT_PD_CA7_TOP_BISR_FORCE_BYP				( BIT(12) )
#define BIT_PD_CP0_HARQ_BISR_DONE				( BIT(11) )
#define BIT_PD_CP0_HARQ_BISR_BUSY				( BIT(10) )
#define BIT_PD_CP0_HARQ_BISR_FORCE_EN				( BIT(9) )
#define BIT_PD_CP0_HARQ_BISR_FORCE_BYP				( BIT(8) )
#define BIT_PD_CP2_WIFI_BISR_DONE				( BIT(7) )
#define BIT_PD_AP_SYS_BISR_DONE					( BIT(6) )
#define BIT_PD_CP2_WIFI_BISR_BUSY				( BIT(5) )
#define BIT_PD_AP_SYS_BISR_BUSY					( BIT(4) )
#define BIT_PD_CP2_WIFI_BISR_FORCE_EN				( BIT(3) )
#define BIT_PD_AP_SYS_BISR_FORCE_EN				( BIT(2) )
#define BIT_PD_CP2_WIFI_BISR_FORCE_BYP				( BIT(1) )
#define BIT_PD_AP_SYS_BISR_FORCE_BYP				( BIT(0) )

/* bits definitions for register REG_PMU_APB_DEBUG_PD0 */
#define BIT_PD_DDR_PHY_SHUTDOWN_D_B				( BIT(27) )
#define BIT_PD_DDR_PUBL_SHUTDOWN_D_B				( BIT(26) )
#define BIT_PD_PUB_SYS_SHUTDOWN_D_B				( BIT(25) )
#define BIT_PD_CP2_WIFI_SHUTDOWN_D_B				( BIT(24) )
#define BIT_PD_CP2_ARM9_SHUTDOWN_D_B				( BIT(23) )
#define BIT_PD_CP2_SYS_SHUTDOWN_D_B				( BIT(22) )
#define BIT_PD_CP1_L1RAM_SHUTDOWN_D_B				( BIT(21) )
#define BIT_PD_CP1_TD_SHUTDOWN_D_B				( BIT(20) )
#define BIT_PD_CP1_GSM_SHUTDOWN_D_B				( BIT(19) )
#define BIT_PD_CP1_ARM9_SHUTDOWN_D_B				( BIT(18) )
#define BIT_PD_CP1_SYS_SHUTDOWN_D_B				( BIT(17) )
#define BIT_PD_CP0_CEVA_SHUTDOWN_D_B				( BIT(16) )
#define BIT_PD_CP0_TD_SHUTDOWN_D_B				( BIT(15) )
#define BIT_PD_CP0_GSM_SHUTDOWN_D_B				( BIT(14) )
#define BIT_PD_CP0_HARQ_SHUTDOWN_D_B				( BIT(13) )
#define BIT_PD_CP0_HU3GE_SHUTDOWN_D_B				( BIT(12) )
#define BIT_PD_CP0_ARM9_2_SHUTDOWN_D_B				( BIT(11) )
#define BIT_PD_CP0_ARM9_1_SHUTDOWN_D_B				( BIT(10) )
#define BIT_PD_CP0_ARM9_0_SHUTDOWN_D_B				( BIT(9) )
#define BIT_PD_CP0_SYS_SHUTDOWN_D_B				( BIT(8) )
#define BIT_PD_GPU_TOP_SHUTDOWN_D_B				( BIT(7) )
#define BIT_PD_MM_TOP_SHUTDOWN_D_B				( BIT(6) )
#define BIT_PD_CA7_C3_SHUTDOWN_D_B				( BIT(5) )
#define BIT_PD_CA7_C2_SHUTDOWN_D_B				( BIT(4) )
#define BIT_PD_CA7_C1_SHUTDOWN_D_B				( BIT(3) )
#define BIT_PD_CA7_C0_SHUTDOWN_D_B				( BIT(2) )
#define BIT_PD_CA7_TOP_SHUTDOWN_D_B				( BIT(1) )
#define BIT_PD_AP_SYS_SHUTDOWN_D_B				( BIT(0) )

/* bits definitions for register REG_PMU_APB_DEBUG_PD1 */
#define BIT_PD_DDR_PHY_SHUTDOWN_M_B				( BIT(27) )
#define BIT_PD_DDR_PUBL_SHUTDOWN_M_B				( BIT(26) )
#define BIT_PD_PUB_SYS_SHUTDOWN_M_B				( BIT(25) )
#define BIT_PD_CP2_WIFI_SHUTDOWN_M_B				( BIT(24) )
#define BIT_PD_CP2_ARM9_SHUTDOWN_M_B				( BIT(23) )
#define BIT_PD_CP2_SYS_SHUTDOWN_M_B				( BIT(22) )
#define BIT_PD_CP1_L1RAM_SHUTDOWN_M_B				( BIT(21) )
#define BIT_PD_CP1_TD_SHUTDOWN_M_B				( BIT(20) )
#define BIT_PD_CP1_GSM_SHUTDOWN_M_B				( BIT(19) )
#define BIT_PD_CP1_ARM9_SHUTDOWN_M_B				( BIT(18) )
#define BIT_PD_CP1_SYS_SHUTDOWN_M_B				( BIT(17) )
#define BIT_PD_CP0_CEVA_SHUTDOWN_M_B				( BIT(16) )
#define BIT_PD_CP0_TD_SHUTDOWN_M_B				( BIT(15) )
#define BIT_PD_CP0_GSM_SHUTDOWN_M_B				( BIT(14) )
#define BIT_PD_CP0_HARQ_SHUTDOWN_M_B				( BIT(13) )
#define BIT_PD_CP0_HU3GE_SHUTDOWN_M_B				( BIT(12) )
#define BIT_PD_CP0_ARM9_2_SHUTDOWN_M_B				( BIT(11) )
#define BIT_PD_CP0_ARM9_1_SHUTDOWN_M_B				( BIT(10) )
#define BIT_PD_CP0_ARM9_0_SHUTDOWN_M_B				( BIT(9) )
#define BIT_PD_CP0_SYS_SHUTDOWN_M_B				( BIT(8) )
#define BIT_PD_GPU_TOP_SHUTDOWN_M_B				( BIT(7) )
#define BIT_PD_MM_TOP_SHUTDOWN_M_B				( BIT(6) )
#define BIT_PD_CA7_C3_SHUTDOWN_M_B				( BIT(5) )
#define BIT_PD_CA7_C2_SHUTDOWN_M_B				( BIT(4) )
#define BIT_PD_CA7_C1_SHUTDOWN_M_B				( BIT(3) )
#define BIT_PD_CA7_C0_SHUTDOWN_M_B				( BIT(2) )
#define BIT_PD_CA7_TOP_SHUTDOWN_M_B				( BIT(1) )
#define BIT_PD_AP_SYS_SHUTDOWN_M_B				( BIT(0) )

/* bits definitions for register REG_PMU_APB_DEBUG_PD2 */
#define BIT_PD_DDR_PHY_ACK_M					( BIT(27) )
#define BIT_PD_DDR_PUBL_ACK_M					( BIT(26) )
#define BIT_PD_PUB_SYS_ACK_M					( BIT(25) )
#define BIT_PD_CP2_WIFI_ACK_M					( BIT(24) )
#define BIT_PD_CP2_ARM9_ACK_M					( BIT(23) )
#define BIT_PD_CP2_SYS_ACK_M					( BIT(22) )
#define BIT_PD_CP1_L1RAM_ACK_M					( BIT(21) )
#define BIT_PD_CP1_TD_ACK_M					( BIT(20) )
#define BIT_PD_CP1_GSM_ACK_M					( BIT(19) )
#define BIT_PD_CP1_ARM9_ACK_M					( BIT(18) )
#define BIT_PD_CP1_SYS_ACK_M					( BIT(17) )
#define BIT_PD_CP0_CEVA_ACK_M					( BIT(16) )
#define BIT_PD_CP0_TD_ACK_M					( BIT(15) )
#define BIT_PD_CP0_GSM_ACK_M					( BIT(14) )
#define BIT_PD_CP0_HARQ_ACK_M					( BIT(13) )
#define BIT_PD_CP0_HU3GE_ACK_M					( BIT(12) )
#define BIT_PD_CP0_ARM9_2_ACK_M					( BIT(11) )
#define BIT_PD_CP0_ARM9_1_ACK_M					( BIT(10) )
#define BIT_PD_CP0_ARM9_0_ACK_M					( BIT(9) )
#define BIT_PD_CP0_SYS_ACK_M					( BIT(8) )
#define BIT_PD_GPU_TOP_ACK_M					( BIT(7) )
#define BIT_PD_MM_TOP_ACK_M					( BIT(6) )
#define BIT_PD_CA7_C3_ACK_M					( BIT(5) )
#define BIT_PD_CA7_C2_ACK_M					( BIT(4) )
#define BIT_PD_CA7_C1_ACK_M					( BIT(3) )
#define BIT_PD_CA7_C0_ACK_M					( BIT(2) )
#define BIT_PD_CA7_TOP_ACK_M					( BIT(1) )
#define BIT_PD_AP_SYS_ACK_M					( BIT(0) )

/* bits definitions for register REG_PMU_APB_DEBUG_PD3 */
#define BIT_PD_DDR_PHY_ACK_D					( BIT(27) )
#define BIT_PD_DDR_PUBL_ACK_D					( BIT(26) )
#define BIT_PD_PUB_SYS_ACK_D					( BIT(25) )
#define BIT_PD_CP2_WIFI_ACK_D					( BIT(24) )
#define BIT_PD_CP2_ARM9_ACK_D					( BIT(23) )
#define BIT_PD_CP2_SYS_ACK_D					( BIT(22) )
#define BIT_PD_CP1_L1RAM_ACK_D					( BIT(21) )
#define BIT_PD_CP1_TD_ACK_D					( BIT(20) )
#define BIT_PD_CP1_GSM_ACK_D					( BIT(19) )
#define BIT_PD_CP1_ARM9_ACK_D					( BIT(18) )
#define BIT_PD_CP1_SYS_ACK_D					( BIT(17) )
#define BIT_PD_CP0_CEVA_ACK_D					( BIT(16) )
#define BIT_PD_CP0_TD_ACK_D					( BIT(15) )
#define BIT_PD_CP0_GSM_ACK_D					( BIT(14) )
#define BIT_PD_CP0_HARQ_ACK_D					( BIT(13) )
#define BIT_PD_CP0_HU3GE_ACK_D					( BIT(12) )
#define BIT_PD_CP0_ARM9_2_ACK_D					( BIT(11) )
#define BIT_PD_CP0_ARM9_1_ACK_D					( BIT(10) )
#define BIT_PD_CP0_ARM9_0_ACK_D					( BIT(9) )
#define BIT_PD_CP0_SYS_ACK_D					( BIT(8) )
#define BIT_PD_GPU_TOP_ACK_D					( BIT(7) )
#define BIT_PD_MM_TOP_ACK_D					( BIT(6) )
#define BIT_PD_CA7_C3_ACK_D					( BIT(5) )
#define BIT_PD_CA7_C2_ACK_D					( BIT(4) )
#define BIT_PD_CA7_C1_ACK_D					( BIT(3) )
#define BIT_PD_CA7_C0_ACK_D					( BIT(2) )
#define BIT_PD_CA7_TOP_ACK_D					( BIT(1) )
#define BIT_PD_AP_SYS_ACK_D					( BIT(0) )

/* bits definitions for register REG_PMU_APB_INT_DISABLE */
#define BIT_CP2_INT_DISABLE					( BIT(2) )
#define BIT_CP0_INT_DISABLE					( BIT(1) )
#define BIT_AP_INT_DISABLE					( BIT(0) )

/* bits definitions for register REG_PMU_APB_PMU_DEBUG_CFG */
#define BITS_PMU_DEBUG_SEL(_X_)					( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

#endif