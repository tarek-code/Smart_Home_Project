/*
 * UART_Interface.h
 *
 *  Created on: Jul 29, 2022
 *      Author: lione
 */

#ifndef UART_INTERFACE_H_
#define UART_INTERFACE_H_
#include "UART_Types.h"
#include "UART_Reg.h"
#include "std_Types.h"
#include "Bit_Math.h"
#include <stddef.h>
#include <avr/interrupt.h>
#include "Led_Interface.h"
#include "GLBINT_Interface.h"
#include "Servo_Motor_Inteface.h"
#include <avr/io.h>

void UART_Int(void);
void UART_Transmit_chr(u8 data);
void UART_TransmitString(u8* str);
void EXT_INT_UASRT_Callout(void(*ptr)(u8));



void UART1_Rx_Str(u8 send[15]);

#define BAUD 9600

#endif /* UART_INTERFACE_H_ */
