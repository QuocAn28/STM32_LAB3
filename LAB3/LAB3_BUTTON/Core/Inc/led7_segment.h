/*
 * led7_segment.h
 *
 *  Created on: Oct 29, 2024
 *      Author: dangq
 */

#ifndef INC_LED7_SEGMENT_H_
#define INC_LED7_SEGMENT_H_

#include "main.h"
#include "global.h"

#define EN_0 GPIO_PIN_12
#define EN_1 GPIO_PIN_13
#define EN_2 GPIO_PIN_14
#define EN_3 GPIO_PIN_15

#define SEG1_0 GPIO_PIN_0
#define SEG1_1 GPIO_PIN_1
#define SEG1_2 GPIO_PIN_2
#define SEG1_3 GPIO_PIN_3
#define SEG1_4 GPIO_PIN_4
#define SEG1_5 GPIO_PIN_5
#define SEG1_6 GPIO_PIN_6

#define SEG2_0 GPIO_PIN_7
#define SEG2_1 GPIO_PIN_8
#define SEG2_2 GPIO_PIN_9
#define SEG2_3 GPIO_PIN_10
#define SEG2_4 GPIO_PIN_11
#define SEG2_5 GPIO_PIN_12
#define SEG2_6 GPIO_PIN_13


void displaymode(int mode);
void setEN(int num);
void display7SEG1(int num_SEG1);
void display7SEG2(int num_SEG2);
void display7SEG_TFL();

void display7SEG_YELLOW_RED();
void display7SEG_GREEN_RED();
void display7SEG_RED_GREEN();
void display7SEG_RED_YELLOW();
#endif /* INC_LED7_SEGMENT_H_ */
