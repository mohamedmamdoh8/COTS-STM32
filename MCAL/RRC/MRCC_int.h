#ifndef MRCC_INT_H_
#define MRCC_INT_H_


enum SysBuses {

	AHB1_bus ,
	AHB2_bus ,
	APB1_bus ,
	APB2_bus

};




void MRCC_voidInitSysClock(void);


void MRCC_voidEnablePerClock( u8 Copy_u8BusId , u8 Copy_u8PerId );

void MRCC_voidDisablePerClock( u8 Copy_u8BusId , u8 Copy_u8PerId );

#endif /* MRCC_INT_H_ */
