/*****************************************/
/*	Author : Khaled Mohsen				 */
/*	Date   : 1-7-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : EXTI_private.h		         */
/*****************************************/


#ifndef _EXTI_PRIVATE_H_
#define _EXTI_PRIVATE_H_

#define MCUCR *((volatile u8*)0x55)
#define MCUCSR *((volatile u8*)0x54)
#define GICR *((volatile u8*)0x5B)
#define GIFR *((volatile u8*)0x5A)


#define	EXTI0_U8_RISING     0
#define	EXTI0_U8_FALLING    1
#define	EXTI0_U8_ANY_CHANGE 2
#define EXTI0_U8_LOW_LEVEL  3

#endif