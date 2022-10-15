/*
 * ADC_Interface.h
 *
 *  Created on: Jun 25, 2022
 *      Author: lione
 */

#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_
#include "ADC_Reg.h"
#include "ADC_Types.h"
#include "std_Types.h"
#include "Bit_Math.h"
#include "Dio_Types.h"
void ADC_Int(void);
u16 ADC_Read(adc_channel channel);


#define ADC_ENABLE				 		((u8)1<<7)     //ADC
#define ADCPS_128       (7)
#define AVCC5V_REF    					((u8)1)
#define ADIF_BIT_NO		(4)
#define ADC_START_CONVERSION_BIT_NO     ((u8)6)     	//ADC start
#endif /* ADC_INTERFACE_H_ */
