
#include <avr/io.h>
#include"setter.h"

int main(void)
{


 setup();

    while(1){

            if(!(PIND&(1<<PD0))) // SEAT IS OCCUPIED
        {


        if(!(PIND&(1<<PD1))) //WHEN SEAT IS OCCUPIED AND HEATER IN ON
        {
            PORTB|= (1<<PB0); // LED TURNED ON

        }
        else{               // WHEN SEAT IS OCCUPIED BUT HEATER IS OFF

        PORTB&= ~(1<<PB0);

    }
        }else{              //WHEN SEAT IS NOT OCCUPIED
            PORTB&= ~(1<<PB0);

        }

    }

    return 0;
}


