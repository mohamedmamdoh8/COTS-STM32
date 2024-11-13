/*
 * HTPS_prg.c
 *
 *  Created on: sept 13, 2022
 *      Author: Mohamed mamdoh
 */
#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include"HTPS_int.h"
#include"MGPIO_int.h"
#include"HTPS_confg.h"

void HTPS_vInit(void){

	MGPIO_vSetPinDir(SERIAL_DATA_INPUT ,GPIO_OUTPUT_PP_VeryHighSpeed);
	MGPIO_vSetPinDir(SHIFT_REGISTER_CLK_INPUT ,GPIO_OUTPUT_PP_VeryHighSpeed);
	MGPIO_vSetPinDir(STORAGE_REGISTER_CLK_INPUT,GPIO_OUTPUT_PP_VeryHighSpeed);

}

void HTPS_vSendData (u8 Copy_u8Data){

	MGPIO_vSetPinVal(STORAGE_REGISTER_CLK_INPUT,Gpio_Pin_LOW);
	for(s8 i=7; i>=0; i--){
	MGPIO_vSetPinVal(SERIAL_DATA_INPUT ,GET_BIT(Copy_u8Data,i));
	MGPIO_vSetPinVal(SHIFT_REGISTER_CLK_INPUT,Gpio_Pin_High);
	MSTK_vSetBusyWait(1000);
	MGPIO_vSetPinVal(STORAGE_REGISTER_CLK_INPUT,Gpio_Pin_LOW);
	}
	MGPIO_vSetPinVal(STORAGE_REGISTER_CLK_INPUT,Gpio_Pin_High);

}
