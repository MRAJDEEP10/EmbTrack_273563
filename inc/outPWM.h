/**
 * @file outPWM.h
 * @author Mihir Rajdeep(273563)
 * @brief Header File for Activity 3
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define OUTPWM_H_INCLUDED
#include <avr/io.h>

void OutPWM(uint16_t temp_value);
void InitPWM(void);





#endif // OUTPWM_H_INCLUDED
