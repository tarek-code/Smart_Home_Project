/*
 * EEPROM_Reg_int.h
 *
 *  Created on: Oct 8, 2022
 *      Author: lione
 */

#ifndef EEPROM_INT_INC_EEPROM_REG_INT_H_
#define EEPROM_INT_INC_EEPROM_REG_INT_H_

#define EEARH_REG  (*(volatile u8*)(0x3F))
#define EEARL_REG  (*(volatile u8*)(0x3E))
#define EEDR_REG  (*(volatile u8*)(0x3D))
#define EECR_REG  (*(volatile u8*)(0x3C))


#endif /* 02_SOURCE_01_MCAL_10_EEPROM_INT_INC_EEPROM_REG_INT_H_ */
