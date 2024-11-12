/*
 * button.h
 *
 *  Created on: Oct 5, 2023
 *      Author: KAI
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "global.h"
#define NORMAL_STATE SET
#define PRESSED_STATE RESET

extern int button_flag[3];
extern int BUTTON[3];
void getKeyInput();
int isButtonPressed(int buttonIndex);

#define BUTTON0 GPIO_PIN_9
#define BUTTON1 GPIO_PIN_10
#define BUTTON2 GPIO_PIN_11
#define BUTTON_COUNT 3


#endif /* INC_BUTTON_H_ */

