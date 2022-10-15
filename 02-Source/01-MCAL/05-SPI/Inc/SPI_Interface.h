/*
 * SPI_Interface.h
 *
 *  Created on: Oct 3, 2022
 *      Author: lione
 */

#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_
#include "Bit_Math.h"
#include "std_Types.h"
#include "SPI_Reg.h"
#include "SPI_Types.h"
#include "Dio_Interface.h"
#define SS 4
#define MOSI 5
#define MISO 6
#define SCK 7

void SPI_Init(options Options);
u8 SPI_TxRx(u8 data);
void SPI_Slave_Enable();
void SPI_Slave_Disable();


#endif /* SPI_INTERFACE_H_ */
