/*
 * EEPROM_Interface_int.h
 *
 *  Created on: Oct 8, 2022
 *      Author: lione
 */

#ifndef EEPROM_INT_INC_EEPROM_INTERFACE_INT_H_
#define EEPROM_INT_INC_EEPROM_INTERFACE_INT_H_

#include "EEPROM_Reg_int.h"
#include "std_Types.h"
#include "Bit_Math.h"
#include <avr/io.h>
void EEPROM_internal_Write(u16 address,u8 data);
u8 EEPROM_internal_Read(u16 address);

#endif /* 02_SOURCE_01_MCAL_10_EEPROM_INT_INC_EEPROM_INTERFACE_INT_H_ */
