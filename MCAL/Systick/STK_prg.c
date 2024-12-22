/*
 * STK_prg.c
 *
 *  Created on: sep 7, 2022
 *      Author: Mohamed mamdoh
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "STK_int.h"
#include "STK_prv.h"
#include "STK_confg.h"

static void (*G_pfTimerNotifaction)(void) = NULL;
static Mode_t G_enuintervalModeFlag = SINGLE_INTERVAL;

void MSTK_vInit(void){

	system_timer->STK_CTRL = 0x00000000;

}
void MSTK_vSetBusyWait(u32 Copy_u32Ticks){

	//Set Timer
	system_timer->STK_LOAD = Copy_u32Ticks;
	SET_BIT(system_timer -> STK_CTRL,0);

	while(GET_BIT(system_timer->STK_CTRL,16)==0);


	//Disable Timer
		CLR_BIT(system_timer -> STK_CTRL,0);
	//CLR Load & VAL
	system_timer->STK_LOAD=0;
	system_timer->STK_VAL =0;



}

void MSTK_vSetIntervalPeriodic (u32 A_u32Ticks , void (*copy_ptr)(void)){
	/* Loading the ticks number to load register */
	system_timer->STK_LOAD = A_u32Ticks;
	/* Enable The Timer */
	SET_BIT(system_timer->STK_CTRL ,0);
	/*Update Notification*/
	G_pfTimerNotifaction = copy_ptr;
	/*Setting Periodic Mode */
	G_enuintervalModeFlag = PERIODIC_INTERVAL; //enum
	/*Enable Exception Request */
	SET_BIT(system_timer->STK_CTRL ,1);
}

void MSTK_vSetIntervalSingle (u32 A_u32Ticks , void (*copy_ptr)(void)){
	/* Loading the ticks number to load register */
	system_timer->STK_LOAD = A_u32Ticks;
	system_timer->STK_VAL = 0;
	/* Enable The Timer */
	SET_BIT(system_timer->STK_CTRL ,0);
	/*Update Notification*/
	G_pfTimerNotifaction = copy_ptr;
	/*Setting Periodic Mode */
	G_enuintervalModeFlag = SINGLE_INTERVAL; //enum
	/*Enable Exception Request */
	SET_BIT(system_timer->STK_CTRL ,1);
}


void SysTick_Handler(void)  {
	if(G_pfTimerNotifaction != NULL) {
		switch(G_enuintervalModeFlag) {
		case SINGLE_INTERVAL:
			G_pfTimerNotifaction();
			CLR_BIT(system_timer->STK_CTRL ,1);
			break;
		case PERIODIC_INTERVAL:
			G_pfTimerNotifaction();
			break;
		}
	}
}

u32  MSTK_u32GetElapsedTime (void){

	return  system_timer->STK_LOAD -  system_timer->STK_VAL ;
}

void MSTK_vStopInterval (void){

}
