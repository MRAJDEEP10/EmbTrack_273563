/**
 * @file setup.c
 * @author Mihir Rajdeep (273563)
 * @brief Set the Ports and Pins
 * @version 0.1
 * @date 2021-04-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<avr/io.h>
#include "setter.h"

void setup(){

DDRB|=(1<<PB0);         //Set B0=1
    PORTB&= ~(1<<PB0);
    DDRD&= ~(1<<PD0);       // clear bit
    PORTD|= (1<<PD0);       // Set Bit
    DDRD&= ~(1<<PD1);       // clear bit
    PORTD|= (1<<PD1);       // Set Bit
}
