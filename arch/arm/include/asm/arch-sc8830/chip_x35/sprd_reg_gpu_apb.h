/*
 * Copyright (C) 2014-2015 Spreadtrum Communications Inc.
 *
 * This file is dual-licensed: you can use it either under the terms
 * of the GPL or the X11 license, at your option. Note that this dual
 * licensing only applies to this file, and not this project as a
 * whole.
 *
 */

#ifndef __REGS_GPU_APB_H__
#define __REGS_GPU_APB_H__

#define REGS_GPU_APB

/* registers definitions for controller REGS_GPU_APB */
#define REG_GPU_APB_APB_RST             SCI_ADDR(REGS_GPU_APB_BASE, 0x0000)
#define REG_GPU_APB_APB_CLK_CTRL        SCI_ADDR(REGS_GPU_APB_BASE, 0x0004)

/* bits definitions for register REG_GPU_APB_APB_RST */
#define BIT_GPU_SOFT_RST                ( BIT(0) )

/* bits definitions for register REG_GPU_APB_APB_CLK_CTRL */
#define BITS_CLK_GPU_DIV(_x_)           ( (_x_) << 2 & (BIT(2)|BIT(3)) )
#define BITS_CLK_GPU_SEL(_x_)           ( (_x_) << 0 & (BIT(0)|BIT(1)) )

/* vars definitions for controller REGS_GPU_APB */

#endif //__REGS_GPU_APB_H__
