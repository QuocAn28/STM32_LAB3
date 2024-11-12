/*
 * global.h
 *
 *  Created on: Oct 29, 2024
 *      Author: dangq
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#include "main.h"
#include "software_timer.h"
#include "button.h"
#include "trafficlight.h"
#include "led7_segment.h"
#include "fsm_automatic.h"
#include "fsm_manual.h"

void Lab3_Init(void);
extern int counter;
extern int RED_TIME;
extern int GREEN_TIME;
extern int YELLOW_TIME;
extern int num;
extern int index_led;
extern int status;
extern int num_EN;
extern int mode;
extern int temp_RED, temp_GREEN, temp_YELLOW;

#define NO_LED 0
#define RED_GREEN 1
#define RED_YELLOW 2
#define GREEN_RED 3
#define YELLOW_RED 4
#endif /* INC_GLOBAL_H_ */

#define MODE1 1
#define MODE2 2
#define MODE3 3
#define MODE4 4

extern int Led_buffer[];
void initLedBuffer();
