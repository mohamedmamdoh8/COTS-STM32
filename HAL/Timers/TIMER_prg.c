/*
 * TIMER_prg.c

 * created on: 28 feb 2024
 * author :mohamed mamdoh
 **/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "Timers_int.h"
#include "Timers_prv.h"

void TIMER_vInit(void){
	//set prescaler
	         TIM1 ->TIM1_PSC = PRESCALER;
	//auto reload
	         TIM1 ->TIM1_ARR = AUTO_RELOAD;
	//set counter
	         TIM1 ->TIM1_CNT = COUNTERUP_MODE;
	//set repetaion counter
	         TIM1 ->TIM1_RCR = REPETATION_COUNTER;
}
