/******************************************************************************
 ** File Name:    timer_reg_v3.h                                            *
 ** Author:       mingwei.zhang                                                 *
 ** DATE:         06/11/2010                                                  *
 ** Copyright:    2010 Spreatrum, Incoporated. All Rights Reserved.           *
 ** Description:                                                              *
 ******************************************************************************/
/******************************************************************************
 **                   Edit    History                                         *
 **---------------------------------------------------------------------------*
 ** DATE          NAME            DESCRIPTION                                 *
 ** 06/11/2010    mingwei.zhang   Create.                                     *
 ******************************************************************************/
#ifndef _TIMER_REG_V3_H_
#define _TIMER_REG_V3_H_
/*----------------------------------------------------------------------------*
 **                         Dependencies                                      *
 **------------------------------------------------------------------------- */
 #include <asm/arch/sprd_reg.h>
/**---------------------------------------------------------------------------*
 **                             Compiler Flag                                 *
 **--------------------------------------------------------------------------*/
#ifdef   __cplusplus
extern   "C"
{
#endif
/**---------------------------------------------------------------------------*
**                               Micro Define                                **
**---------------------------------------------------------------------------*/

/*----------Timer Control Register----------*/
#define TIMER_CTL_BASE        				SPRD_AON_TIMER_PHYS //0x40050000
#define TIMER0_BASE                     (TIMER_CTL_BASE + 0x0000)
#define TM0_LOAD                        (TIMER0_BASE + 0x0000)          //Write to this register will reload the timer with the new value.
#define TM0_VALUE                       (TIMER0_BASE + 0x0004)          //Return the current timer value.
#define TM0_CTL                         (TIMER0_BASE + 0x0008)
#define TM0_CLR                         (TIMER0_BASE + 0x000C)          //Write to this register will clear the interrupt generated by this timer.

#define TIMER1_BASE                     (TIMER_CTL_BASE + 0x0020)
#define TM1_LOAD                        (TIMER1_BASE + 0x0000)          //Write to this register will reload the timer with the new value.
#define TM1_VALUE                       (TIMER1_BASE + 0x0004)          //Return the current timer value.
#define TM1_CTL                         (TIMER1_BASE + 0x0008)
#define TM1_CLR                         (TIMER1_BASE + 0x000C)          //Write to this register will clear the interrupt generated by this timer.

#define TIMER2_BASE                     (TIMER_CTL_BASE + 0x0040)
#define TM2_LOAD                        (TIMER2_BASE + 0x0000)          //Write to this register will reload the timer with the new value.
#define TM2_VALUE                       (TIMER2_BASE + 0x0004)          //Return the current timer value.
#define TM2_CTL                         (TIMER2_BASE + 0x0008)
#define TM2_CLR                         (TIMER2_BASE + 0x000C)          //Write to this register will clear the interrupt generated by this timer.

//The corresponding bit of TIMER0_CTL/TIMER1_CTL/TM2_CTL register.
#define TMCTL_CLK1                      (0)             //prescale timer clk (apb clk) by 1
#define TMCTL_MODE_B                    (1 << 6)        //
#define TMCTL_EN                        (1 << 7)        //enable bit of this timer.

//The corresponding bit of TM0_CLR/TM1_CLR/TM2_CLR register.
#define TMCLR_LOAD_BUSY                 (1 << 4)
#define TMCLR_IRQ_CLR                   (1 << 3)
#define TMCLR_IRQ                       (1 << 2)
#define TMCLR_IRQ_RAW                   (1 << 1)
#define TMCLR_IRQ_EN                    (1 << 0)

/* this is depend on the SOC timer resource */
#define TIMER_PHY_NUMBER 3

//the structure of Timer register group.
typedef struct timer_tag
{
    VOLATILE uint32 load;
    VOLATILE uint32 value;
    VOLATILE uint32 ctl;
    VOLATILE uint32 clr;
} timer_s;

/**----------------------------------------------------------------------------*
**                         Compiler Flag                                      **
**----------------------------------------------------------------------------*/

#ifdef   __cplusplus
}
#endif
/**---------------------------------------------------------------------------*/
#endif // _TIMER_REG_V3_H_

