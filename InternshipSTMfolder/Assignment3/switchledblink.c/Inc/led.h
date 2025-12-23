/*
 * led.h
 *
 *  Created on: Dec 17, 2025
 *      Author: ADMIN
 */
#include <stdint.h>
#include <stdio.h>
#include"stm32f407xx.h"
#ifndef LED_H_
#define LED_H_

void led_init(void);
void led_on(void);
void led_off(void);

#endif /* LED_H_ */
