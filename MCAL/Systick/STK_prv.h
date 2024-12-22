#ifndef STK_PRV_H
#define STK_PRV_H

typedef struct
{
	u32 STK_CTRL;
	u32 STK_LOAD;
	u32 STK_VAL;
	u32 STK_CALIB;
}MSTK_H;
#define  system_timer ((volatile MSTK_H *)0xE000E010)

typedef enum {
	SINGLE_INTERVAL = 0,
	PERIODIC_INTERVAL,
} Mode_t;




#endif /*STK_PRV_H*/
