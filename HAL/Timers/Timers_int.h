/*
 * TIMERs_int.h
 *
 *  Created on: Dec 3, 2023
 *      Author: Mohamed mamdoh
 */

#ifndef TIMERS_INT_H_
#define TIMERS_INT_H_

/*******************************************************************************
 *                              Module Definitions                             *
 ******************************************************************************/


typedef struct {

	    volatile u32 TIM1_CR1    ;
	    volatile u32 TIM1_CR2    ;
	    volatile u32 TIM1_SMCR   ;
	    volatile u32 TIM1_DIER   ;
	    volatile u32 TIM1_SR     ;
	    volatile u32 TIM1_EGR    ;
	    volatile u32 TIM1_CCMR1  ;
	    volatile u32 TIM1_CCMR2  ;
	    volatile u32 TIM1_CCER   ;
	    volatile u32 TIM1_CNT    ;
	    volatile u32 TIM1_PSC    ;
	    volatile u32 TIM1_ARR    ;
	    volatile u32 TIM1_RCR    ;
	    volatile u32 TIM1_CCR1   ;
	    volatile u32 TIM1_CCR2   ;
	    volatile u32 TIM1_CCR3   ;
	    volatile u32 TIM1_CCR4   ;
	    volatile u32 TIM1_BDTR   ;
	    volatile u32 TIM1_DCR    ;
	    volatile u32 TIM1_DMAR   ;

}TIM1_t;

#define AUTO_RELOAD         0x0f

#define PRESCALER           8

#define REPETATION_COUNTER  0x0f

/******************************************************************************
 * modes
 ******************************************************************************/
#define COUNTERUP_MODE     1
#define COUNTERDOWN_MODE   2

void TIMER_vInit(void);


#endif /* TIMERS_INT_H_ */
