/*
 * TWI_Types.h
 *
 *  Created on: Oct 4, 2022
 *      Author: lione
 */

#ifndef TWI_TYPES_H_
#define TWI_TYPES_H_
#include "std_Types.h"

typedef struct
{
u8 TWCR_TWIE:1;
u8  TWCR_Reserved_Bit:1;
u8 TWCR_TWEN:1;
u8 TWCR_TWWC:1;
u8 TWCR_TWSTO:1;
u8 TWCR_TWSTA:1;
u8 TWCR_TWEA:1;
u8 TWCR_TWINT:1;
}TWCR_BITS;

typedef union
{
u8 TWCR_All;
TWCR_BITS TWCR_Bits;
}TWCR;








typedef struct
{
u8 TWSR_TWPS:2;
u8  TWSR_Reserved_Bit:1;
u8 TWSR_TWS:5;
}TWSR_BITS;

typedef union
{
u8 TWSR_All;
TWSR_BITS TWSR_Bits;
}TWSR;




typedef struct
{
u8 TWAR_TWGCE:1;
u8 TWAR_TWA:7;
}TWAR_BITS;

typedef union
{
u8 TWAR_All;
TWAR_BITS TWAR_Bits;
}TWAR;







typedef struct
{
u8 TWBR_Reg;
TWSR TWSR_Reg;
TWAR TWAR_Reg;
u8 TWDR_Reg;
u8 reserved[50];
TWCR TWCR_Reg;
}TWI_Reg;










enum
{
START_SUCESS=0x08,
WRITE_ADRESS_SUCESS=0x18,
WRITE_DATA_SUCESS=0x28,
REAPT_START_SUCESS=0x10,
READ_ADRESS_SUCESS=0x40,
READ_DATA_SUCESS=0x50,
};





#endif /* TWI_TYPES_H_ */
