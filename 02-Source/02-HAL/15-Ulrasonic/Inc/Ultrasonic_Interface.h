/*
 * Ultrasonic_Interface.h
 *
 *  Created on: Sep 30, 2022
 *      Author: lione
 */

#ifndef ULTRASONIC_INTERFACE_H_
#define ULTRASONIC_INTERFACE_H_
#include "Timer1_Interface.h"
#include "util/delay.h"
#include <avr/interrupt.h>
#include "GLBINT_Interface.h"

#define F_CPU 16000000UL
#define PRESCALER 8
#define T_TIMER ((double)PRESCALER/F_CPU)
#define SOUND_SPEED 34300
#define DISTANCE_EXEPT_COUNTER ((double)(SOUND_SPEED*T_TIMER)/2)

double Ultrasonic_Read(void);

#endif /* ULTRASONIC_INTERFACE_H_ */
