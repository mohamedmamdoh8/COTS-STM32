#ifndef STK_INT_H_
#define STK_INT_H_

void MSTK_vInit(void);
void MSTK_vSetBusyWait(u32 Copy_u32Ticks);
void MSTK_vSetIntervalSingle (u32 Copy_u32Ticks , void (*copy_ptr)(void));
void MSTK_vSetIntervalPeriodic (u32 Copy_u32Ticks , void (*copy_ptr)(void));
void MSTK_vStopInterval (void);
u32  MSTK_u32GetElapsedTime (void);
u32  MSTK_u32GetRemainingTime (void);



#endif /*STK_INT_H*/
















#endif /*STK_INT_H_ */
