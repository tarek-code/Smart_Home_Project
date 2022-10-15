/*
 * TWI_Interface.h
 *
 *  Created on: Oct 4, 2022
 *      Author: lione
 */

#ifndef TWI_INTERFACE_H_
#define TWI_INTERFACE_H_
#include "TWI_Reg.h"
#include "TWI_Types.h"
#include "std_Types.h"
#include "Bit_Math.h"
#include <avr/io.h>

#define F_TWI 400000UL
#define MyTWPS 1
#define MyTWBR (((F_CPU/F_TWI)-16)/(2*4))

void TWI_Init(u8 address);
u8 TWI_Status(void);
u8 TWI_Start();
void TWI_Stop();
u8 TWI_Send(u8 data);
u8 TWI_Read_ACK(u8 * data);
u8 TWI_Read_NACK(u8 * data);


#endif /* TWI_INTERFACE_H_ */
