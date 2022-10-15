/*
 * Lcd.c
 *
 *  Created on: Jun 24, 2022
 *      Author: lione
 */
#include "Lcd_Interface.h"
extern u8 customChar[NO_CSTOM_CHAR][NO_CSTOM_CHAR_BYTES];

void Lcd_Pulse()
{
Dio_Write_Channel(DIO_PORTB, DIO_PIN3, DIO_HIGH);
_delay_us(1);
Dio_Write_Channel(DIO_PORTB, DIO_PIN3, DIO_LOW);
_delay_ms(2);
}

 void Lcd_Write_Custom(void)
{
	u8 loc_ByteIndex=0;
		u8 loc_CharIndx=0;

		for (loc_CharIndx=0;loc_CharIndx<NO_CSTOM_CHAR;loc_CharIndx++)
		{
			Lcd_Cmd(_LCD_CGRAM_START_ADDRESS +(loc_CharIndx*8));
				for (loc_ByteIndex =0; loc_ByteIndex<NO_CSTOM_CHAR_BYTES;loc_ByteIndex++)
				{
					Lcd_Display_chr(customChar[loc_CharIndx][loc_ByteIndex]);
				}
		}

}

void Lcd_Int(void)
{

	/*	Configure LCD Control Lines as Output	*/
		Dio_Configure_Channel(DIO_PORTB, DIO_PIN1, DIO_OUTPUT);
		Dio_Configure_Channel(DIO_PORTB, DIO_PIN2, DIO_OUTPUT);
		Dio_Configure_Channel(DIO_PORTB, DIO_PIN3, DIO_OUTPUT);

		/*	Configure LCD Data Lines as Output		*/
		Dio_Configure_Channel(DIO_PORTA, DIO_PIN4, DIO_OUTPUT);
		Dio_Configure_Channel(DIO_PORTA, DIO_PIN5, DIO_OUTPUT);
		Dio_Configure_Channel(DIO_PORTA, DIO_PIN6, DIO_OUTPUT);
		Dio_Configure_Channel(DIO_PORTA, DIO_PIN7, DIO_OUTPUT);

		/*	Set LCD For Write Mode	*/
		Dio_Write_Channel(DIO_PORTB, DIO_PIN2, DIO_LOW);

		_delay_ms(15);

		Lcd_Cmd(0x03);
		_delay_ms(5);

		Lcd_Cmd(0x03);
		_delay_us(100);

		Lcd_Cmd(0x03);
		Lcd_Cmd(0x02);
		Lcd_Cmd(0x02);
		Lcd_Write_Custom();
		Lcd_Goto_Row_Column(0, 0);

}






void Lcd_Cmd(lcd_Cmd_Type command)
{
	/* sending command in two times*/
		u8 Loc_High_Nipple=command;
		u8 Loc_Low_Nipple=command<<LCD_Shift;

		/*RS =0*/

		Dio_Write_Channel(DIO_PORTB, DIO_PIN1, DIO_LOW);

		/*write the high nipple */

		Dio_Write_Channel_Group(DIO_PORTA, LCD_MASK, Loc_High_Nipple);

		/*Enable Pulse*/
Lcd_Pulse();

/*write low nipple*/

Dio_Write_Channel_Group(DIO_PORTA, LCD_MASK, Loc_Low_Nipple);

/*enable pulse*/

Lcd_Pulse();

}


void Lcd_Data(u8 data)
{
	/* sending data in two times*/
			u8 Loc_High_Nipple=data;
			u8 Loc_Low_Nipple=data<<LCD_Shift;

			/*RS =1*/

			Dio_Write_Channel(DIO_PORTB, DIO_PIN1, DIO_HIGH);

			/*write the high nipple */

			Dio_Write_Channel_Group(DIO_PORTA, LCD_MASK, Loc_High_Nipple);

			/*Enable Pulse*/
	Lcd_Pulse();

	/*write low nipple*/

	Dio_Write_Channel_Group(DIO_PORTA, LCD_MASK, Loc_Low_Nipple);

	/*enable pulse*/

	Lcd_Pulse();
}

void Lcd_Display_chr(u8 chr)
{
	Lcd_Data(chr);
}
void Lcd_Display_str(u8 str[])
{
while(*str!='\0')
{
Lcd_Display_chr(*str);
str++;
}
}
void Lcd_Goto_Row_Column(u8 row, u8 column)
{
	switch (row)
	{
	case 0:
		Lcd_Cmd(0x80+column);
		break;

	case 1:
		Lcd_Cmd(0xC0+column);
		break;
	}
}

