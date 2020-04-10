/*
 * led_control.h
 *
 *  Created on: Feb 8, 2020
 *      Author: Dhruva
 */

#ifndef LED_CONTROL_H_
#define LED_CONTROL_H_

#include <stdint.h>

void Delay(volatile uint32_t number);
void LED_init(void);
void LED_on(uint8_t color);
void LED_off(uint8_t color);

#endif /* LED_CONTROL_H_ */
