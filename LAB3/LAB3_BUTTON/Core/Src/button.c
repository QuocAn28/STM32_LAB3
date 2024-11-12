#include "button.h"

int BUTTON[3]= {BUTTON0, BUTTON1, BUTTON2};

int KeyReg0[BUTTON_COUNT] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg1[BUTTON_COUNT] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg2[BUTTON_COUNT] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg3[BUTTON_COUNT] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

int TimeOutForKeyPress[BUTTON_COUNT] = {500, 500, 500};
int button_pressed[BUTTON_COUNT] = {0, 0, 0};
int button_long_pressed[BUTTON_COUNT] = {0, 0, 0};
int button_flag[BUTTON_COUNT] = {0, 0, 0};

int isButtonPressed(int buttonIndex){
	if (button_flag[buttonIndex] == 1) {
		button_flag[buttonIndex] = 0;
		return 1;
	}
	return 0;
}

int isButtonLongPressed(int buttonIndex){
	if (button_long_pressed[buttonIndex] == 1) {
		button_long_pressed[buttonIndex] = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(int buttonIndex){

	button_flag[buttonIndex] = 1;
}

void getKeyInput(){
	for (int i = 0; i < BUTTON_COUNT; i++) {
		KeyReg2[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg0[i];
		KeyReg0[i] = HAL_GPIO_ReadPin(GPIOA, BUTTON[i]);

		if ((KeyReg1[i] == KeyReg0[i]) && (KeyReg1[i] == KeyReg2[i])) {
			if (KeyReg2[i] != KeyReg3[i]) {
				KeyReg3[i] = KeyReg2[i];

				if (KeyReg3[i] == PRESSED_STATE) {
					TimeOutForKeyPress[i] = 200;
					subKeyProcess(i);
				}

			} else {
				TimeOutForKeyPress[i]--;
				if (TimeOutForKeyPress[i] == 0) {
					TimeOutForKeyPress[i] = 200;
					if (KeyReg3[i] == PRESSED_STATE) {
						subKeyProcess(i);
					}
				}
			}
		}
	}
}
