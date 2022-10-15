/*
 * SPI_Types.h
 *
 *  Created on: Oct 3, 2022
 *      Author: lione
 */

#ifndef SPI_TYPES_H_
#define SPI_TYPES_H_
#include "std_Types.h"
typedef enum
{
	SLAVE=0,
	MUSTER
}options;


typedef struct
{
u8 SPR0:1;		//SPI Clock Rate Select 1 and 0
u8 SPR1:1;		//SPI Clock Rate Select 1 and 0
u8 CPHA:1;		// Clock Phase
u8 CPOL:1;		//Clock Polarity
u8 MSTR:1;		//Master/Slave Select
u8 DORD:1;		//Data Order
u8 SPE:1;		//SPI Enable
u8 SPIE:1;		//SPI Interrupt Enable
}SPI_SPCR_Bits;


typedef union
{
u8 AllReg;
SPI_SPCR_Bits SPCR_Bits;
}SPI_SPCR;

typedef struct
{
u8 SPI2X:1;             //   Double SPI Speed Bit
u8 Reserved_Bits:5;
u8 WCOL:1;				//Write COLlision Flag
u8 SPIF:1;				//SPI Interrupt Flag
}SPI_SPSR_Bits;

typedef union
{
u8 AllReg;
SPI_SPSR_Bits SPSR_Bits;
}SPI_SPSR;

typedef struct
{
	SPI_SPCR SPCR;
	SPI_SPSR SPSR;
    u8 SPDR;
}SPI_Reg;

#endif /* SPI_TYPES_H_ */
