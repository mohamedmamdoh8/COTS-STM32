#ifndef STD_TYPES_H
#define STD_TYPES_H


#define NULL (void *) 0X00


/*
 *
 * Signed Data Types
 */
typedef unsigned char           u8;
typedef unsigned short int      u16;
typedef unsigned long int       u32;

/*
 * Unsigned Data Types
 */
typedef signed char             s8;
typedef signed short int        s16;
typedef signed long int         s32;

/*
 * Floating point Types
 */
typedef float                   f32;
typedef double                  f64;

/*
 * Address NULL
 */

#define ADDRESS_NULL ( (void *) 0x00)

typedef enum {
	STD_NOK = 0,
	STD_OK  = 1,
} enuErrorState_t;
#endif /* STD_TYPES_H */
