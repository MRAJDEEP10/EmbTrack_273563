#include <avr/io.h>
#include"setter.h"
#include"readadc.h"
#include "outPWM.h"



uint16_t temp;
int main(void)
{


 setup();
 InitADC();

 InitPWM();

    while(1){

            if(!(PIND&(1<<PD0))) // SEAT IS OCCUPIED
        {


        if(!(PIND&(1<<PD1))) //WHEN SEAT IS OCCUPIED AND HEATER IN ON
        {
            PORTB|= (1<<PB0); // LED TURNED ON
            temp=ReadADC(0);
            OutPWM(temp);


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


