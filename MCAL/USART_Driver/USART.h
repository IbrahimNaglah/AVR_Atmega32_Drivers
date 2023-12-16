/*
 * USART Driver
 *
 *  Created on: Dec 16, 2023
 *      Author: https://github.com/IbrahimNaglah
 */

#ifndef USART_DRIVER_USART_H_
#define USART_DRIVER_USART_H_

#define F_CPU 16000000UL
#define USART_BAUDRATE 9600
#define BAUD_RATE_REGISTER (((F_CPU / (USART_BAUDRATE * 16UL))) - 1)

#define INTERRUPT 1
#define POOLING 2
#define USART_MODE INTERRUPT //POOLING OR INTERRUPT


void USART_init(void);
u8 USART_RxReadByte(void);
void USART_TxSendByte(u8 Str);
void USART_SendString(char *str);

#endif
