/*****************************************/
/*	Author : Khaled Mohsen				 */
/*	Date   : 1-7-2022   		   		 */
/*	Version: 0.1				         */
/*	File   : EXTI_prog.c	             */
/*****************************************/
#include "STD_types.h"
#include "BIT_MATH.h"
#include "EXTI_int.h"
#include "EXTI_private.h"
#include "EXTI_config.h"

void EXTI0_voidInit(void)
{
	#if EXTI0_U8_ISC == EXTI0_U8_LOW_LEVEL
	CLEAR_BIT(MCUCR,0);
	CLEAR_BIT(MCUCR,1);
	#elif EXTI0_U8_ISC == EXTI0_U8_RISING
	SET_BIT(MCUCR,0);
	SET_BIT(MCUCR,1);	
	#elif EXTI0_U8_ISC == EXTI0_U8_FALLING
	CLEAR_BIT(MCUCR,0);
	SET_BIT(MCUCR,1);	
	#elif EXTI0_U8_ISC == EXTI0_U8_ANY_CHANGE
	SET_BIT(MCUCR,0);
	CLEAR_BIT(MCUCR,1);	
	#endif
}


void EXTI0_voidEnable(void)
{
	SET_BIT(GICR , 6); // PIE 0
}
void EXTI0_voidDisable(void)
{
	CLEAR_BIT(GICR , 6);
}


void EXTI1_voidInit(void)
{
	#if EXTI0_U8_ISC == EXTI0_U8_LOW_LEVEL
	CLEAR_BIT(MCUCR,3);
	CLEAR_BIT(MCUCR,2);
	#elif EXTI0_U8_ISC == EXTI0_U8_RISING
	SET_BIT(MCUCR,3);
	SET_BIT(MCUCR,2);
	#elif EXTI0_U8_ISC == EXTI0_U8_FALLING
	CLEAR_BIT(MCUCR,2);
	SET_BIT(MCUCR,3);
	#elif EXTI0_U8_ISC == EXTI0_U8_ANY_CHANGE
	SET_BIT(MCUCR,2);
	CLEAR_BIT(MCUCR,3);
	#endif
}

void EXTI1_voidEnable(void)
{
	SET_BIT(GICR , 7); // PIE 0
}
void EXTI1_voidDisable(void)
{
	CLEAR_BIT(GICR , 7);
}


void EXTI2_voidInit(void)
{
	#if EXTI0_U8_ISC == EXTI0_U8_RISING
	SET_BIT(MCUCSR,6);
	#elif EXTI0_U8_ISC == EXTI0_U8_FALLING
	CLEAR_BIT(MCUCSR,6);
	#endif
}


void EXTI2_voidEnable(void)
{
	SET_BIT(GICR , 5); // PIE 0
}
void EXTI2_voidDisable(void)
{
	CLEAR_BIT(GICR , 5);
}



