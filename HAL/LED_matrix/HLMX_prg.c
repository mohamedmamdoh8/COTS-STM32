/*
 * HLMX_prg.c
 *
 *  Created on: Sep 6, 2022
 *      Author: Mohamed mamdoh
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "MGPIO_int.h"
#include "STK_int.h"
#include "MRCC_int.h"

#include "HLMX_int.h"

void HLMX_vInit(void) {
	MRCC_voidInitSysClock();
	MRCC_voidEnablePerClock(AHB1_bus, 0);
	MRCC_voidEnablePerClock(AHB1_bus, 1);
	MRCC_voidEnablePerClock(AHB1_bus, 2);

	MSTK_vInit();

	MGPIO_vSetPinDir(PORT_ROW0, PIN_ROW0, GPIO_OUTPUT_PP_VeryHighSpeed);
	MGPIO_vSetPinDir(PORT_ROW1, PIN_ROW1, GPIO_OUTPUT_PP_VeryHighSpeed);
	MGPIO_vSetPinDir(PORT_ROW2, PIN_ROW2, GPIO_OUTPUT_PP_VeryHighSpeed);
	MGPIO_vSetPinDir(PORT_ROW3, PIN_ROW3, GPIO_OUTPUT_PP_VeryHighSpeed);
	MGPIO_vSetPinDir(PORT_ROW4, PIN_ROW4, GPIO_OUTPUT_PP_VeryHighSpeed);
	MGPIO_vSetPinDir(PORT_ROW5, PIN_ROW5, GPIO_OUTPUT_PP_VeryHighSpeed);
	MGPIO_vSetPinDir(PORT_ROW6, PIN_ROW6, GPIO_OUTPUT_PP_VeryHighSpeed);
	MGPIO_vSetPinDir(PORT_ROW7, PIN_ROW7, GPIO_OUTPUT_PP_VeryHighSpeed);


	MGPIO_vSetPinDir(PORT_COL0, PIN_COL0, GPIO_OUTPUT_PP_VeryHighSpeed);
	MGPIO_vSetPinDir(PORT_COL1, PIN_COL1, GPIO_OUTPUT_PP_VeryHighSpeed);
	MGPIO_vSetPinDir(PORT_COL2, PIN_COL2, GPIO_OUTPUT_PP_VeryHighSpeed);
	MGPIO_vSetPinDir(PORT_COL3, PIN_COL3, GPIO_OUTPUT_PP_VeryHighSpeed);
	MGPIO_vSetPinDir(PORT_COL4, PIN_COL4, GPIO_OUTPUT_PP_VeryHighSpeed);
	MGPIO_vSetPinDir(PORT_COL5, PIN_COL5, GPIO_OUTPUT_PP_VeryHighSpeed);
	MGPIO_vSetPinDir(PORT_COL6, PIN_COL6, GPIO_OUTPUT_PP_VeryHighSpeed);
	MGPIO_vSetPinDir(PORT_COL7, PIN_COL7, GPIO_OUTPUT_PP_VeryHighSpeed);


	MGPIO_vSetPinVal(PORT_COL0, PIN_COL0, Gpio_Pin_High);
	MGPIO_vSetPinVal(PORT_COL1, PIN_COL1, Gpio_Pin_High);
	MGPIO_vSetPinVal(PORT_COL2, PIN_COL2, Gpio_Pin_High);
	MGPIO_vSetPinVal(PORT_COL3, PIN_COL3, Gpio_Pin_High);
	MGPIO_vSetPinVal(PORT_COL4, PIN_COL4, Gpio_Pin_High);
	MGPIO_vSetPinVal(PORT_COL5, PIN_COL5, Gpio_Pin_High);
	MGPIO_vSetPinVal(PORT_COL6, PIN_COL6, Gpio_Pin_High);
	MGPIO_vSetPinVal(PORT_COL7, PIN_COL7, Gpio_Pin_High);


}

void HLMX_vDisplayShape(u8 *A_pu8ShapeArray) {
	/* Step 0 */
	MGPIO_vSetPinVal(PORT_COL0, PIN_COL0, Gpio_Pin_LOW);

	MGPIO_vSetPinVal(PORT_ROW0, PIN_ROW0, GET_BIT(A_pu8ShapeArray[0], 0));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW1, PIN_ROW1, GET_BIT(A_pu8ShapeArray[0], 1));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW2, PIN_ROW2, GET_BIT(A_pu8ShapeArray[0], 2));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW3, PIN_ROW3, GET_BIT(A_pu8ShapeArray[0], 3));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW4, PIN_ROW4, GET_BIT(A_pu8ShapeArray[0], 4));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW5, PIN_ROW5, GET_BIT(A_pu8ShapeArray[0], 5));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW6, PIN_ROW6, GET_BIT(A_pu8ShapeArray[0], 6));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW7, PIN_ROW7, GET_BIT(A_pu8ShapeArray[0], 7));	// 0b010101010

	MSTK_vSetBusyWait(2500);
	MGPIO_vSetPinVal(PORT_COL0, PIN_COL0, Gpio_Pin_High);

	/* Step 1 */
	MGPIO_vSetPinVal(PORT_COL1, PIN_COL1, Gpio_Pin_LOW);

	MGPIO_vSetPinVal(PORT_ROW0, PIN_ROW0, GET_BIT(A_pu8ShapeArray[1], 0));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW1, PIN_ROW1, GET_BIT(A_pu8ShapeArray[1], 1));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW2, PIN_ROW2, GET_BIT(A_pu8ShapeArray[1], 2));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW3, PIN_ROW3, GET_BIT(A_pu8ShapeArray[1], 3));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW4, PIN_ROW4, GET_BIT(A_pu8ShapeArray[1], 4));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW5, PIN_ROW5, GET_BIT(A_pu8ShapeArray[1], 5));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW6, PIN_ROW6, GET_BIT(A_pu8ShapeArray[1], 6));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW7, PIN_ROW7, GET_BIT(A_pu8ShapeArray[1], 7));	// 0b010101010

	MSTK_vSetBusyWait(2500);
	MGPIO_vSetPinVal(PORT_COL1, PIN_COL1, Gpio_Pin_High);

	/* Step 2 */
	MGPIO_vSetPinVal(PORT_COL2, PIN_COL2, Gpio_Pin_LOW);

	MGPIO_vSetPinVal(PORT_ROW0, PIN_ROW0, GET_BIT(A_pu8ShapeArray[2], 0));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW1, PIN_ROW1, GET_BIT(A_pu8ShapeArray[2], 1));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW2, PIN_ROW2, GET_BIT(A_pu8ShapeArray[2], 2));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW3, PIN_ROW3, GET_BIT(A_pu8ShapeArray[2], 3));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW4, PIN_ROW4, GET_BIT(A_pu8ShapeArray[2], 4));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW5, PIN_ROW5, GET_BIT(A_pu8ShapeArray[2], 5));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW6, PIN_ROW6, GET_BIT(A_pu8ShapeArray[2], 6));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW7, PIN_ROW7, GET_BIT(A_pu8ShapeArray[2], 7));	// 0b010101010

	MSTK_vSetBusyWait(2500);
	MGPIO_vSetPinVal(PORT_COL2, PIN_COL2, Gpio_Pin_High);

	/* Step 3 */
	MGPIO_vSetPinVal(PORT_COL3, PIN_COL3, Gpio_Pin_LOW);

	MGPIO_vSetPinVal(PORT_ROW0, PIN_ROW0, GET_BIT(A_pu8ShapeArray[3], 0));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW1, PIN_ROW1, GET_BIT(A_pu8ShapeArray[3], 1));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW2, PIN_ROW2, GET_BIT(A_pu8ShapeArray[3], 2));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW3, PIN_ROW3, GET_BIT(A_pu8ShapeArray[3], 3));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW4, PIN_ROW4, GET_BIT(A_pu8ShapeArray[3], 4));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW5, PIN_ROW5, GET_BIT(A_pu8ShapeArray[3], 5));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW6, PIN_ROW6, GET_BIT(A_pu8ShapeArray[3], 6));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW7, PIN_ROW7, GET_BIT(A_pu8ShapeArray[3], 7));	// 0b010101010

	MSTK_vSetBusyWait(2500);
	MGPIO_vSetPinVal(PORT_COL3, PIN_COL3, Gpio_Pin_High);

	/* Step 4 */
	MGPIO_vSetPinVal(PORT_COL4, PIN_COL4, Gpio_Pin_LOW);

	MGPIO_vSetPinVal(PORT_ROW0, PIN_ROW0, GET_BIT(A_pu8ShapeArray[4], 0));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW1, PIN_ROW1, GET_BIT(A_pu8ShapeArray[4], 1));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW2, PIN_ROW2, GET_BIT(A_pu8ShapeArray[4], 2));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW3, PIN_ROW3, GET_BIT(A_pu8ShapeArray[4], 3));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW4, PIN_ROW4, GET_BIT(A_pu8ShapeArray[4], 4));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW5, PIN_ROW5, GET_BIT(A_pu8ShapeArray[4], 5));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW6, PIN_ROW6, GET_BIT(A_pu8ShapeArray[4], 6));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW7, PIN_ROW7, GET_BIT(A_pu8ShapeArray[4], 7));	// 0b010101010

	MSTK_vSetBusyWait(2500);
	MGPIO_vSetPinVal(PORT_COL4, PIN_COL4, Gpio_Pin_High);

	/* Step 5 */
	MGPIO_vSetPinVal(PORT_COL5, PIN_COL5, Gpio_Pin_LOW);

	MGPIO_vSetPinVal(PORT_ROW0, PIN_ROW0, GET_BIT(A_pu8ShapeArray[5], 0));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW1, PIN_ROW1, GET_BIT(A_pu8ShapeArray[5], 1));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW2, PIN_ROW2, GET_BIT(A_pu8ShapeArray[5], 2));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW3, PIN_ROW3, GET_BIT(A_pu8ShapeArray[5], 3));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW4, PIN_ROW4, GET_BIT(A_pu8ShapeArray[5], 4));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW5, PIN_ROW5, GET_BIT(A_pu8ShapeArray[5], 5));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW6, PIN_ROW6, GET_BIT(A_pu8ShapeArray[5], 6));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW7, PIN_ROW7, GET_BIT(A_pu8ShapeArray[5], 7));	// 0b010101010

	MSTK_vSetBusyWait(2500);
	MGPIO_vSetPinVal(PORT_COL5, PIN_COL5, Gpio_Pin_High);

	/* Step 6 */
	MGPIO_vSetPinVal(PORT_COL6, PIN_COL6, Gpio_Pin_LOW);

	MGPIO_vSetPinVal(PORT_ROW0, PIN_ROW0, GET_BIT(A_pu8ShapeArray[6], 0));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW1, PIN_ROW1, GET_BIT(A_pu8ShapeArray[6], 1));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW2, PIN_ROW2, GET_BIT(A_pu8ShapeArray[6], 2));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW3, PIN_ROW3, GET_BIT(A_pu8ShapeArray[6], 3));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW4, PIN_ROW4, GET_BIT(A_pu8ShapeArray[6], 4));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW5, PIN_ROW5, GET_BIT(A_pu8ShapeArray[6], 5));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW6, PIN_ROW6, GET_BIT(A_pu8ShapeArray[6], 6));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW7, PIN_ROW7, GET_BIT(A_pu8ShapeArray[6], 7));	// 0b010101010

	MSTK_vSetBusyWait(2500);
	MGPIO_vSetPinVal(PORT_COL6, PIN_COL6, Gpio_Pin_High);

	/* Step 7 */
	MGPIO_vSetPinVal(PORT_COL7, PIN_COL7, Gpio_Pin_LOW);

	MGPIO_vSetPinVal(PORT_ROW0, PIN_ROW0, GET_BIT(A_pu8ShapeArray[7], 0));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW1, PIN_ROW1, GET_BIT(A_pu8ShapeArray[7], 1));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW2, PIN_ROW2, GET_BIT(A_pu8ShapeArray[7], 2));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW3, PIN_ROW3, GET_BIT(A_pu8ShapeArray[7], 3));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW4, PIN_ROW4, GET_BIT(A_pu8ShapeArray[7], 4));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW5, PIN_ROW5, GET_BIT(A_pu8ShapeArray[7], 5));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW6, PIN_ROW6, GET_BIT(A_pu8ShapeArray[7], 6));	// 0b010101010
	MGPIO_vSetPinVal(PORT_ROW7, PIN_ROW7, GET_BIT(A_pu8ShapeArray[7], 7));	// 0b010101010

	MSTK_vSetBusyWait(2500);
	MGPIO_vSetPinVal(PORT_COL7, PIN_COL7, Gpio_Pin_High);


}
//void SHAPE_vWithDelay  (u8 *A_pu8ShapeArrayDelay){
//
//}
//void SHAPE (u8 *A_pu8ShapeArray) {
//	for(u8 i=0; i<=7; i++){
//		for(u8 j=0; j<=7; j++ ){
//			MGPIO_vSetPinVal(PORT_COL(j) , PIN_COL(i), Gpio_Pin_LOW);
//
//			MGPIO_vSetPinVal(PORT_ROW(j), PIN_ROW(j), GET_BIT(A_pu8ShapeArray[i], (j)));	// 0b010101010
//
//			MSTK_vSetBusyWait(2500);
//			MGPIO_vSetPinVal(PORT_COL(i), PIN_COL(i), Gpio_Pin_High);
//		}
//	}
//}
