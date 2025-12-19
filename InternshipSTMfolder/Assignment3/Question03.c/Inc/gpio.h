/*
 * gpio.h
 *
 *  Created on: Dec 17, 2025
 *      Author: ADMIN
 */

#ifndef GPIO_H_
#define GPIO_H_
#include <stdint.h>
#include <stdio.h>
#include"stm32f407xx.h"
void led_init(void);
int switch_status(void);
void switch_init(void);
void led_on(int num);
void led_off(void);
#endif /* GPIO_H_ */
