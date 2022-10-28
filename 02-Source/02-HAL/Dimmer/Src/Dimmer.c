/*
 * Dimmer.c
 *
 *  Created on: Oct 27, 2022
 *      Author: lione
 */
#include "Dimmer_Interface.h"

void Dimmer_Int()
{
Timer0_Dimer();
}

void Dimmer_duty(u8 duty)
{
Timer0_Dimmer_Light(duty);
}

void Dimmer_OFF()
{
Timer0_FPWM_Stop();
Dio_Configure_Channel(DIO_PORTB, 3, DIO_INPUT);
}
