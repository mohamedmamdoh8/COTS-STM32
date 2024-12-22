/*
 * MRCC_prg.c
 *
 *  Created on: Aug 18, 2022
 *      Author: Mohamed mamdoh
 */




#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "MRCC_int.h"
#include "MRCC_Confg.h"
#include "MRCC_prv.h"




void MRCC_voidInitSysClock(void){


#if MRCC_CLOCK_TYPE == MRCC_HSE_CRYSTAL

	//Select HSE
	MRCC -> CFGR = 0x00000001 ;
	//Enable
	MRCC -> CR   = 0x00010080 ;
	//Wait Untill HSE Stable
	while( GET_BIT(MRCC -> CR , 17) == 0 );
#elif MRCC_CLOCK_TYPE == MRCC_HSE_RC

	//Select HSE
	MRCC -> CFGR = 0x00000001 ;
	//Enable
	MRCC -> CR   = 0x00050080 ;
	//Wait Untill HSE Stable
	while( GET_BIT(MRCC -> CR , 17) == 0 );

#elif MRCC_CLOCK_TYPE == MRCC_HSI

	//Select HSI
	MRCC -> CFGR = 0x00000000 | (RCC_AHB_PRESCALLER<<AHB_Bit);
	//Enable
	MRCC -> CR   = 0x00000081 ;
	//Wait Untill HSI Stable
	while( GET_BIT(MRCC -> CR , 1) == 0 );

#elif MRCC_CLOCK_TYPE == MRCC_PLL

#if MRCC_PLL_INPUT == MRCC_PLL_IN_HSE
	/*Configure PLL Value
	 * HSE = 0x400000
	 * PLLN = PLLN_INPUT
	 * PLLP = PLLP_INPUT
	 * PLLM = PLLM_INPUT
	 *
	 * */
	MRCC -> PLLCFGR   =(0x400000)|(PLLN_INPUT<<PLLN_BIT)|
			(PLLP_INPUT<<PLLP_BIT)|(PLLM_INPUT<<PLLM_BIT) ;
	//Select HSE
	MRCC -> CFGR = 0x00000001 ;
	//Enable
	MRCC -> CR   = 0x00010080 ;
	//Wait Untill HSE Stable
	while( GET_BIT(MRCC -> CR , 17) == 0 );

#elif MRCC_PLL_INPUT == MRCC_PLL_IN_HSE_RC
	/*Configure PLL Value
	 * HSE = 0x400000
	 * PLLN = PLLN_INPUT
	 * PLLP = PLLP_INPUT
	 * PLLM = PLLM_INPUT
	 *
	 * */
	MRCC -> PLLCFGR   =(0x400000)|(PLLN_INPUT<<PLLN_BIT)|
			(PLLP_INPUT<<PLLP_BIT)|(PLLM_INPUT<<PLLM_BIT) ;
	//Select HSE
	MRCC -> CFGR = 0x00000001 ;
	//Enable
	MRCC -> CR   = 0x00050080 ;
	//Wait Untill HSE Stable
	while( GET_BIT(MRCC -> CR , 17) == 0 );

#elif MRCC_PLL_INPUT == MRCC_PLL_IN_HSI
	/*Configure PLL Value
	 * HSI = 0x000000
	 * PLLN = PLLN_INPUT
	 * PLLP = PLLP_INPUT
	 * PLLM = PLLM_INPUT
	 *
	 * */
	MRCC -> PLLCFGR   =(0x000000)|(PLLN_INPUT<<PLLN_BIT)|
			(PLLP_INPUT<<PLLP_BIT)|(PLLM_INPUT<<PLLM_BIT) ;
	//Select HSE
	MRCC -> CFGR = 0x00000000 ;
	//Enable
	MRCC -> CR   = 0x00000081 ;
	//Wait Untill HSE Stable
	while( GET_BIT(MRCC -> CR , 1) == 0 );

#endif

#endif

#if   MRCC_CS_SYS == MRCC_ENABLE_CS

	SET_BIT( MRCC -> CR , 19 );
#elif   MRCC_CS_SYS == MRCC_DISABLE_CS

	CLR_BIT( MRCC -> CR , 19 );

#endif


}


void MRCC_voidEnablePerClock( u8 Copy_u8BusId , u8 Copy_u8PerId ){

	switch( Copy_u8BusId ){

	case AHB1_bus   : SET_BIT( MRCC -> AHB1ENR  , Copy_u8PerId  );  break;
	case AHB2_bus  : SET_BIT ( MRCC -> AHB2ENR , Copy_u8PerId ) ;  break;
    case APB1_bus  : SET_BIT ( MRCC -> APB1ENR , Copy_u8PerId ) ;  break;

    case APB2_bus  : SET_BIT ( MRCC -> APB2ENR , Copy_u8PerId ) ;  break;
	}

}

void MRCC_voidDisablePerClock( u8 Copy_u8BusId , u8 Copy_u8PerId ){

	switch( Copy_u8BusId ){

	case AHB1_bus   : CLR_BIT( MRCC -> AHB1ENR  , Copy_u8PerId  );  break;
	case AHB2_bus  :  CLR_BIT( MRCC -> AHB2ENR , Copy_u8PerId );  break;
    case APB1_bus  :  CLR_BIT( MRCC -> APB1ENR , Copy_u8PerId );  break;
    case APB2_bus  :  CLR_BIT( MRCC -> APB2ENR , Copy_u8PerId );  break;

	}

}



