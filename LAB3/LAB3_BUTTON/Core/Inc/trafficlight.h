/*
 * trafficlight.h
 *
 *  Created on: Oct 29, 2024
 *      Author: dangq
 */

#ifndef INC_TRAFFICLIGHT_H_
#define INC_TRAFFICLIGHT_H_

#include "Global.h"


#define LED_RED1 GPIO_PIN_2
#define LED_GREEN1 GPIO_PIN_3
#define LED_YELLOW1 GPIO_PIN_4

#define LED_RED GPIO_PIN_5

#define LED_RED2 GPIO_PIN_6
#define LED_GREEN2 GPIO_PIN_7
#define LED_YELLOW2 GPIO_PIN_8

void displayTFL();


#endif /* INC_TRAFFICLIGHT_H_ */
