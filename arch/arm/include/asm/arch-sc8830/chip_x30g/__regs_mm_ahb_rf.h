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


#ifndef __H_REGS_MM_AHB_RF_HEADFILE_H__
#define __H_REGS_MM_AHB_RF_HEADFILE_H__ __FILE__

#define	REGS_MM_AHB_RF

/* registers definitions for MM_AHB_RF */
#define REG_MM_AHB_RF_AHB_EB                              SCI_ADDR(REGS_MM_AHB_RF_BASE, 0x0000)
#define REG_MM_AHB_RF_AHB_RST                             SCI_ADDR(REGS_MM_AHB_RF_BASE, 0x0004)
#define REG_MM_AHB_RF_GEN_CKG_CFG                         SCI_ADDR(REGS_MM_AHB_RF_BASE, 0x0008)
#define REG_MM_AHB_RF_MIPI_CSI2_CTRL                      SCI_ADDR(REGS_MM_AHB_RF_BASE, 0x000C)
#define REG_MM_AHB_RF_MM_QOS_CFG                          SCI_ADDR(REGS_MM_AHB_RF_BASE, 0x0010)



/* bits definitions for register REG_MM_AHB_RF_AHB_EB */
#define BIT_MMU_EB                                        ( BIT(7) )
#define BIT_CKG_EB                                        ( BIT(6) )
#define BIT_JPG_EB                                        ( BIT(5) )
#define BIT_CSI_EB                                        ( BIT(4) )
#define BIT_VSP_EB                                        ( BIT(3) )
#define BIT_ISP_EB                                        ( BIT(2) )
#define BIT_CCIR_EB                                       ( BIT(1) )
#define BIT_DCAM_EB                                       ( BIT(0) )

/* bits definitions for register REG_MM_AHB_RF_AHB_RST */
#define BIT_MMU_SOFT_RST                                  ( BIT(14) )
#define BIT_MM_CKG_SOFT_RST                               ( BIT(13) )
#define BIT_MM_MTX_SOFT_RST                               ( BIT(12) )
#define BIT_OR1200_SOFT_RST                               ( BIT(11) )
#define BIT_ROT_SOFT_RST                                  ( BIT(10) )
#define BIT_CAM2_SOFT_RST                                 ( BIT(9) )
#define BIT_CAM1_SOFT_RST                                 ( BIT(8) )
#define BIT_CAM0_SOFT_RST                                 ( BIT(7) )
#define BIT_JPG_SOFT_RST                                  ( BIT(6) )
#define BIT_CSI_SOFT_RST                                  ( BIT(5) )
#define BIT_VSP_SOFT_RST                                  ( BIT(4) )
#define BIT_ISP_CFG_SOFT_RST                              ( BIT(3) )
#define BIT_ISP_LOG_SOFT_RST                              ( BIT(2) )
#define BIT_CCIR_SOFT_RST                                 ( BIT(1) )
#define BIT_DCAM_SOFT_RST                                 ( BIT(0) )

/* bits definitions for register REG_MM_AHB_RF_GEN_CKG_CFG */
#define BIT_MM_MTX_AXI_CKG_EN                             ( BIT(8) )
#define BIT_MM_AXI_CKG_EN                                 ( BIT(7) )
#define BIT_JPG_AXI_CKG_EN                                ( BIT(6) )
#define BIT_VSP_AXI_CKG_EN                                ( BIT(5) )
#define BIT_ISP_AXI_CKG_EN                                ( BIT(4) )
#define BIT_DCAM_AXI_CKG_EN                               ( BIT(3) )
#define BIT_SENSOR_CKG_EN                                 ( BIT(2) )
#define BIT_MIPI_CSI_CKG_EN                               ( BIT(1) )
#define BIT_CPHY_CFG_CKG_EN                               ( BIT(0) )

/* bits definitions for register REG_MM_AHB_RF_MIPI_CSI2_CTRL */
#define BITS_MIPI_CPHY_SAMPLE_SEL(_X_)                    ( (_X_) << 3 & (BIT(3)|BIT(4)) )
#define BIT_MIPI_CPHY_SYNC_MODE                           ( BIT(2) )
#define BIT_MIPI_CPHY_TEST_CTL                            ( BIT(1) )
#define BIT_MIPI_CPHY_SEL                                 ( BIT(0) )

/* bits definitions for register REG_MM_AHB_RF_MM_QOS_CFG */
#define BITS_QOS_R_DCAM(_X_)                              ( (_X_) << 28 & (BIT(28)|BIT(29)|BIT(30)|BIT(31)) )
#define BITS_QOS_W_DCAM(_X_)                              ( (_X_) << 24 & (BIT(24)|BIT(25)|BIT(26)|BIT(27)) )
#define BITS_QOS_R_JPG(_X_)                               ( (_X_) << 20 & (BIT(20)|BIT(21)|BIT(22)|BIT(23)) )
#define BITS_QOS_W_JPG(_X_)                               ( (_X_) << 16 & (BIT(16)|BIT(17)|BIT(18)|BIT(19)) )
#define BITS_QOS_R_ISP(_X_)                               ( (_X_) << 12 & (BIT(12)|BIT(13)|BIT(14)|BIT(15)) )
#define BITS_QOS_W_ISP(_X_)                               ( (_X_) << 8 & (BIT(8)|BIT(9)|BIT(10)|BIT(11)) )
#define BITS_QOS_R_VSP(_X_)                               ( (_X_) << 4 & (BIT(4)|BIT(5)|BIT(6)|BIT(7)) )
#define BITS_QOS_W_VSP(_X_)                               ( (_X_) & (BIT(0)|BIT(1)|BIT(2)|BIT(3)) )

#endif
