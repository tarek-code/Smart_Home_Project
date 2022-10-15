/*
 * Timer1_Interface.h
 *
 *  Created on: Sep 27, 2022
 *      Author: lione
 */

#ifndef TIMER1_INTERFACE_H_
#define TIMER1_INTERFACE_H_

#include "Bit_Math.h"
#include "Timer_Reg.h"
#include "GLBINT_Interface.h"

void Timer1_Int(void);
void Timer1_SetTime(u32 time_delay);
void Timer1_Start(void);
void Timer1_Stop(void);



void Timer1_FPWM_Stop();
void Timer1_FPWM_Start();
void Timer1_FPWM_SetTime(u8 duty_cycle);
void Timer1_FPWM_Int();

#endif /* TIMER1_INTERFACE_H_ */
