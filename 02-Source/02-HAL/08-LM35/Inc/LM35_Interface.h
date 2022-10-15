/*
 * LM35_Interface.h
 *
 *  Created on: Jul 1, 2022
 *      Author: lione
 */

#ifndef LM35_INTERFACE_H_
#define LM35_INTERFACE_H_
#include "ADC_Interface.h"
#include "LM35_Cfg.h"
void LM35_Int(void);
u16 LM35_Read(void);

#endif /* LM35_INTERFACE_H_ */
