/*
 * Buzzer.c
 *
 *  Created on: Jun 23, 2022
 *      Author: lione
 */

#include "Buzzer_Interface.h"
void Buzzer_Int()
{
Dio_Configure_Channel(DIO_PORTA, DIO_PIN3, DIO_OUTPUT);
Dio_Write_Channel(DIO_PORTA, DIO_PIN3, DIO_LOW);
}

void Buzzer_ON(buzzer_id_t id)
{
	switch(id)
	{
	case BUZZER0:
Dio_Write_Channel(DIO_PORTA, DIO_PIN3, DIO_HIGH);
break;
}
}

void Buzzer_OFF(buzzer_id_t id)
{
	switch(id)
	{
		case BUZZER0:
	Dio_Write_Channel(DIO_PORTA, DIO_PIN3, DIO_LOW);
break;
}
}



void Buzzer_Toggle(buzzer_id_t id)
{
	switch(id)
	{
			case BUZZER0:
		Dio_Flip_Channel(DIO_PORTA, DIO_PIN3);
}
}
