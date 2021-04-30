/**
 * @file project_main.c
 * @author Mihir Rajdeep (273563)
 * @brief Final Project
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include<util/delay.h>
#include"setter.h"
#include"readadc.h"
#include "outPWM.h"
#include"WriteUART.h"

uint16_t temp;
char temp_data;


int main(void)
{


 setup();
 InitADC();
 InitPWM();
 InitUART(103);

    while(1){

            if(!(PIND&(1<<PD0))) // SEAT IS OCCUPIED
        {


        if(!(PIND&(1<<PD1))) //WHEN SEAT IS OCCUPIED AND HEATER IN ON
        {
            PORTB|= (1<<PB0); // LED TURNED ON
            temp=ReadADC(0);
            temp_data= OutPWM(temp);
            UARTwrite(temp_data);



        }
        else{               // WHEN SEAT IS OCCUPIED BUT HEATER IS OFF

        PORTB&= ~(1<<PB0);

    }
        }else{              //WHEN SEAT IS NOT OCCUPIED
            PORTB&= ~(1<<PB0);
             OCR1A=0;

        }

    }

    return 0;
}


