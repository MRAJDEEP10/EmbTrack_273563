/**
 * @file UART.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "WriteUART.h"

void InitUART(uint16_t ubrr_value){

    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&(0x00ff);
    UCSR0C = (1<<UCSZ01)|(1<<UCSZ00);

    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}

void UARTwrite(char data)
{
    while(!(UCSR0A & (1<<UDRE0)));

    UDR0 = data;
}
