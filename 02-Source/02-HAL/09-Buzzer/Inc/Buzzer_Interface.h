/*
 * Buzzer_Interface.h
 *
 *  Created on: Jun 23, 2022
 *      Author: lione
 */

#ifndef BUZZER_INTERFACE_H_
#define BUZZER_INTERFACE_H_
#include "Dio_Interface.h"
#include "Buzzer_Types.h"
void Buzzer_Int();
void Buzzer_ON(buzzer_id_t id);
void Buzzer_OFF(buzzer_id_t id);
void Buzzer_Toggle(buzzer_id_t id);

#endif /* BUZZER_INTERFACE_H_ */
