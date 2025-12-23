/*
 * led.h
 *
 *  Created on: Dec 19, 2025
 *      Author: ADMIN
 */

#ifndef LED_H_
#define LED_H_
#include <stdint.h>
#include <stdio.h>
#include"stm32f407xx.h"
void led_init(void);
void led_on(uint8_t n);
void led_off(uint8_t n1);
void led_toggle(uint8_t n);
#endif /* LED_H_ */
