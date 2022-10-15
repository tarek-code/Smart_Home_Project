/*
 * ADC.c
 *
 *  Created on: Jun 25, 2022
 *      Author: lione
 */
#include "Adc_Interface.h"

void ADC_Int(void)
{
	/* prescaler 128 */
	ADC_SRA_REG|=7;

	/* choosing Vref  */
	SIT_BIT(ADC_MUX_REG, DIO_PIN6);

	/* choosing left adj or right adj */
//	Dio_Write_Channel(ADC_MUX_REG, DIO_PIN5, DIO_LOW);

	/* ADC Enable */
SIT_BIT(ADC_SRA_REG, DIO_PIN7);


}

u16 ADC_Read(adc_channel channel)
{
	/*choosing the pin which ADC will read from and convert*/
ADC_MUX_REG=(ADC_MUX_REG & 0xF8)|channel;
/*container to have the resuly from ADC*/
u16 result;
/*start conversion*/
SIT_BIT(ADC_SRA_REG, DIO_PIN6);

/*waiting until ADC finish*/

while(CHECK_BIT(ADC_SRA_REG, DIO_PIN4)!=1)
{
/* do nothing*/
}
result=ADCL_REG|(ADCH_REG<<8);
return result;
}

