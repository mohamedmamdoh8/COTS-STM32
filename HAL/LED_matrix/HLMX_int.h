/*
 * HLMX_int.h
 *
 *  Created on: Sep 28, 2022
 *      Author: Mohamed Mamdoh
 */
#ifndef HLMX_INT_H_
#define HLMX_INT_H_


#define PORT_ROW0	GPIOA_PORT
#define PORT_ROW1	GPIOA_PORT
#define PORT_ROW2	GPIOA_PORT
#define PORT_ROW3	GPIOA_PORT
#define PORT_ROW4	GPIOA_PORT
#define PORT_ROW5	GPIOA_PORT
#define PORT_ROW6	GPIOA_PORT
#define PORT_ROW7	GPIOA_PORT

#define PORT_COL0	GPIOB_PORT
#define PORT_COL1	GPIOB_PORT
#define PORT_COL2	GPIOB_PORT
#define PORT_COL3	GPIOB_PORT
#define PORT_COL4	GPIOB_PORT
#define PORT_COL5	GPIOB_PORT
#define PORT_COL6	GPIOB_PORT
#define PORT_COL7	GPIOB_PORT




#define PIN_ROW0 	MGPIO_Pin0
#define PIN_ROW1 	MGPIO_Pin1
#define PIN_ROW2 	MGPIO_Pin2
#define PIN_ROW3 	MGPIO_Pin3
#define PIN_ROW4 	MGPIO_Pin4
#define PIN_ROW5 	MGPIO_Pin5
#define PIN_ROW6 	MGPIO_Pin6
#define PIN_ROW7 	MGPIO_Pin7

#define PIN_COL0 	MGPIO_Pin0
#define PIN_COL1 	MGPIO_Pin1
#define PIN_COL2 	MGPIO_Pin2
#define PIN_COL3 	MGPIO_Pin3
#define PIN_COL4 	MGPIO_Pin4
#define PIN_COL5 	MGPIO_Pin5
#define PIN_COL6 	MGPIO_Pin6
#define PIN_COL7 	MGPIO_Pin7


void HLMX_vInit(void);
void HLMX_vDisplayShape(u8 *A_pu8ShapeArray);
//void SHAPE_vWithDelay  (u8 *A_pu8ShapeArrayDelay);


#endif
