/*
 * SPI.c
 *
 *  Created on: Oct 3, 2022
 *      Author: lione
 */

#include "SPI_Interface.h"


void SPI_Init(options Options)
{
	//SPI Interrupt Enable
//SPI->SPCR.SPCR_Bits.SPIE=1;
//SPI Enable
switch(Options)
{
case MUSTER:

Dio_Configure_Channel(DIO_PORTB, MISO, DIO_INPUT);
Dio_Configure_Channel(DIO_PORTB, MOSI, DIO_OUTPUT);
Dio_Configure_Channel(DIO_PORTB, SS, DIO_OUTPUT);
Dio_Configure_Channel(DIO_PORTB, SCK, DIO_OUTPUT);
SPI->SPCR.SPCR_Bits.MSTR=1;
	SPI->SPCR.SPCR_Bits.SPE=1;
break;
case SLAVE:

	Dio_Configure_Channel(DIO_PORTB, MISO, DIO_OUTPUT);
	Dio_Configure_Channel(DIO_PORTB, MOSI, DIO_INPUT);
	Dio_Configure_Channel(DIO_PORTB, SS, DIO_INPUT);
	Dio_Configure_Channel(DIO_PORTB, SCK, DIO_INPUT);
	SPI->SPCR.SPCR_Bits.MSTR=0;
		SPI->SPCR.SPCR_Bits.SPE=1;
}

}

u8 SPI_TxRx(u8 data)
{
SPI->SPDR=data;
while(SPI->SPSR.SPSR_Bits.SPIF==0); // wait the flag to be one
return SPI->SPDR;
}

void SPI_Slave_Enable()
{
	//Active Low
Dio_Write_Channel(DIO_PORTB, SS, DIO_LOW);
}

void SPI_Slave_Disable()
{
	Dio_Write_Channel(DIO_PORTB, SS, DIO_HIGH);
}

