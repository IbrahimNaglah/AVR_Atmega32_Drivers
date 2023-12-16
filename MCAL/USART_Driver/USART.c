/*
 * USART Driver
 *
 *  Created on: Dec 16, 2023
 *      Author: https://github.com/IbrahimNaglah
 */
#include "../Services/STD_Types.h"

#include "USART_private.h"
#include "USART.h"

void USART_init(void)
{

#if(USART_MODE == POOLING)
	UCSRB |= (1 << RXEN) | (1 << TXEN);	/* Turn on transmission and reception */
	UCSRC |= (1 << URSEL) | (1 << UCSZ0) | (1 << UCSZ1);/* Use 8-bit char size */
	UBRRL = BAUD_RATE_REGISTER;			/* Load lower 8-bits of the baud rate */
	UBRRH = (BAUD_RATE_REGISTER >> 8);		/* Load upper 8-bits*/
#elif(USART_MODE == INTERRUPT)
	UCSRB |= (1 << RXEN) | (1 << RXCIE) |  (1 << TXEN);/* Turn on the transmission and reception */
	UCSRC |= (1 << URSEL) | (1 << UCSZ0) | (1 << UCSZ1);/* Use 8-bit character sizes */

	UBRRL = BAUD_RATE_REGISTER;		/* Load lower 8-bits of the baud rate */
	UBRRH = (BAUD_RATE_REGISTER >> 8);	/* Load upper 8-bits */
#endif

}

u8 USART_RxReadByte(void)
{
	while ((UCSRA & (1 << RXC)) == 0);/* Wait till data is received */
	return(UDR);		/* Return the byte */
}

void USART_TxSendByte(u8 Str)
{
	while (! (UCSRA & (1<<UDRE)));  /* Wait for empty transmit buffer */
	UDR = Str ;
}

void USART_SendString(char *str)
{
	u8 j=0;

	while (str[j]!=0)		/* Send string till null */
	{
		USART_TxSendByte(str[j]);
		j++;
	}
}
