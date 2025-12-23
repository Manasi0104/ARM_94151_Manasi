/*
 * switch.h
 *
 *  Created on: Dec 17, 2025
 *      Author: ADMIN
 */

#ifndef SWITCH_H_
#define SWITCH_H_

#include <stdio.h>
#define BV(n) (1 << (n))

void switch_init(void);
int switch_status(void);

#endif /* SWITCH_H_ */
