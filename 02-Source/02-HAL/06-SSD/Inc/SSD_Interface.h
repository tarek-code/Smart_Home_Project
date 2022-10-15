/*
 * SSD_Interface.h
 *
 *  Created on: Jun 24, 2022
 *      Author: lione
 */

#ifndef SSD_INTERFACE_H_
#define SSD_INTERFACE_H_
#include "std_Types.h"
#include "Dio_Interface.h"
#include <util/delay.h>
void SSD_Int();
void SSD_Display(u8 number);
void SSD_Display_With_Delay(u8 number,u32 delay);

#endif /* SSD_INTERFACE_H_ */
