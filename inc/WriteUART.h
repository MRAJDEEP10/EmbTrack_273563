#ifndef WRITEUART_H_INCLUDED
#define WRITEUART_H_INCLUDED
#include<avr/io.h>

void InitUART(uint16_t ubrr);

/**
 * @brief To read characters from UART port
 * @return char
 */
char UARTread();
/**
 * @brief To  write characters to UART port
 *
 * @param data
 */
void UARTwrite(char data);

#endif // WRITEUART_H_INCLUDED
