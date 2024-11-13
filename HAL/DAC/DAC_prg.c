/*
 * DAC_prg.c
 *
 *  Created on: jun 8, 2022
 *      Author: Mohamed mamdoh
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "MGPIO_int.h"
#include "STK_int.h"
#include "song.h"


u32 i=0;
void HDAC_Init (void){
	MGPIO_vSetPinDir( GPIOA_PORT, MGPIO_Pin0, GPIO_OUTPUT_PP_LowSpeed )	;
	MGPIO_vSetPinDir( GPIOA_PORT, MGPIO_Pin1, GPIO_OUTPUT_PP_LowSpeed )	;
	MGPIO_vSetPinDir( GPIOA_PORT, MGPIO_Pin2, GPIO_OUTPUT_PP_LowSpeed )	;
	MGPIO_vSetPinDir( GPIOA_PORT, MGPIO_Pin3, GPIO_OUTPUT_PP_LowSpeed )	;
	MGPIO_vSetPinDir( GPIOA_PORT, MGPIO_Pin4, GPIO_OUTPUT_PP_LowSpeed )	;
	MGPIO_vSetPinDir( GPIOA_PORT, MGPIO_Pin5, GPIO_OUTPUT_PP_LowSpeed )	;
	MGPIO_vSetPinDir( GPIOA_PORT, MGPIO_Pin6, GPIO_OUTPUT_PP_LowSpeed )	;
	MGPIO_vSetPinDir( GPIOA_PORT, MGPIO_Pin7, GPIO_OUTPUT_PP_LowSpeed )	;

	MSTK_vInit();
}

void HDAC_Callback(void){
	 MGPIO_vSetPortVal(GPIOA_PORT, song[i]);

	 if(i==79010){
	 	i=0;
	 }
	 else
	 {
		 i++;
	 }

}

void HDAC_Song (void){
	;
}

