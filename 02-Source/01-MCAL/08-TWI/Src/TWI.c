/*
 * TWI.c
 *
 *  Created on: Oct 4, 2022
 *      Author: lione
 */
#include "TWI_Interface.h"


void TWI_Init(u8 address)
{
TWI->TWCR_Reg.TWCR_Bits.TWCR_TWEN=1;
TWI->TWBR_Reg=MyTWBR;
TWI->TWAR_Reg.TWAR_Bits.TWAR_TWA=(address<<1);
}

u8 TWI_Status(void)
{
return (TWI->TWSR_Reg.TWSR_All & 0xF8);
}
u8 TWI_Start()
{
	TWCR = (1<<TWINT)|(1<<TWEN)|(1<<TWSTA);
while(!(TWCR & (1<<TWINT)));
	return TWI_Status();
}
void TWI_Stop()
{
	TWCR = (1<<TWINT)|(1<<TWEN)|(1<<TWSTO);
}

u8 TWI_Send(u8 data)
{
	TWI->TWDR_Reg = data;
	TWCR = (1<<TWINT)|(1<<TWEN);
		//while(!(TWCR & (1<<TWINT)));//waiting the flag to be one
	while(!(TWCR & (1<<TWINT)));
		return TWI_Status();//return the status
}

u8 TWI_Read_ACK(u8 * data)
{
	TWCR = (1<<TWINT)|(1<<TWEN)|(1<<TWEA);
		//while(!(TWCR & (1<<TWINT)));//waiting the flag to be one
	while(!(TWCR & (1<<TWINT)));
		*data = TWI->TWDR_Reg;
		return TWI_Status();//return the status
}

u8 TWI_Read_NACK(u8 * data)
{
	TWI->TWCR_Reg.TWCR_All =196;
		//while(!(TWCR & (1<<TWINT)));//waiting the flag to be one
	while(!(TWCR & (1<<TWINT)));
		*data = TWI->TWDR_Reg;
		return TWI_Status();//return the status
}
