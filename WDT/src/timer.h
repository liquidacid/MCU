/****************************************************************************
 *   $Id:: timer.h 5752 2010-12-01 00:01:10Z usb00423                       $
 *   Project: NXP LPC17xx Timer example
 *
 *   Description:
 *     This file contains Timer code header definition.
 *
 ****************************************************************************
 * Software that is described herein is for illustrative purposes only
 * which provides customers with programming information regarding the
 * products. This software is supplied "AS IS" without any warranties.
 * NXP Semiconductors assumes no responsibility or liability for the
 * use of the software, conveys no license or title under any patent,
 * copyright, or mask work right to the product. NXP Semiconductors
 * reserves the right to make changes in the software without
 * notification. NXP Semiconductors also make no representation or
 * warranty that such application will be suitable for the specified
 * use without further testing or modification.
****************************************************************************/
#ifndef __TIMER_H 
#define __TIMER_H

/* depending on the CCLK and PCLK setting, e.g. CCLK = 60Mhz, 
PCLK = 1/4 CCLK, then, 10mSec = 150.000-1 counts */
// #define TIME_INTERVAL	149999
//#define TIME_INTERVAL	(Fpclk/100 - 1)	
#define TIME_INTERVAL	(18000000/100 - 1)

extern void delayMs(uint8_t timer_num, uint32_t delayInMs);
extern uint32_t init_timer( uint8_t timer_num, uint32_t timerInterval );
extern void enable_timer( uint8_t timer_num );
extern void disable_timer( uint8_t timer_num );
extern void reset_timer( uint8_t timer_num );
extern void TIMER0_IRQHandler (void);
extern void TIMER1_IRQHandler (void);

#endif /* end __TIMER_H */
/*****************************************************************************
**                            End Of File
******************************************************************************/
