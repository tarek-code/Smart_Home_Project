/*
 * Bluetooth_Interface.h
 *
 *  Created on: Oct 2, 2022
 *      Author: lione
 */

#ifndef BLUETOOTH_INTERFACE_H_
#define BLUETOOTH_INTERFACE_H_
#include "UART_Interface.h"
#include <util/delay.h>
#include "GLBINT_Interface.h"
//#define DoubleSpeed



void Bluetooth_Init();
void Bluetooth_Transmit(s8 data);
s8 Bluetooth_Receive();
void Bluetooth_TransmitString(s8 * string);
void Bluetooth_ReadString(u8 name[5]);

#endif /* BLUETOOTH_INTERFACE_H_ */
