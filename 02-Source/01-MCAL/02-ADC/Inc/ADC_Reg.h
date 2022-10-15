/*
 * ADC_Reg.h
 *
 *  Created on: Jul 10, 2022
 *      Author: lione
 */

#ifndef ADC_REG_H_
#define ADC_REG_H_

/*ADCL*/
#define ADCL_REG  (*(volatile u8*)(0x24))

/*ADCH*/
#define ADCH_REG  (*(volatile u8*)(0x25))

/*ADC MUX*/
#define ADC_MUX_REG  (*(volatile u8*)(0x27))

/*ADC SRA*/

#define ADC_SRA_REG  (*(volatile u8*)(0x26))

#endif /* ADC_REG_H_ */
