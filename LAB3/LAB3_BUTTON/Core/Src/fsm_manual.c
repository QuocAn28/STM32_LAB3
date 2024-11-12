/*
 * fsm_manual.c
 *
 *  Created on: Oct 29, 2024
 *      Author: dangq
 */

#include "fsm_manual.h"

void display_modetemp(int temp){
	switch(num){
	case 0:
		num = 1;
		setTimer5(50);
		break;
	case 1:
		setEN(1);
		display7SEG1(mode/10);
		display7SEG2(temp/10);
		if(timer5_flag == 1){
			setTimer5(50);
			num = 2;
		}
		break;
	case 2:
		setEN(2);
		display7SEG1(mode%10);
		display7SEG2(temp%10);
		if(timer5_flag == 1){
			setTimer5(50);
			num = 1;
		}
		break;
	default:
		break;

	}
}

void fsm_manual(){
	switch (mode){
	case MODE1:
		fsm_automatic();
		if(isButtonPressed(0)==1){
			mode = MODE2;
			setTimer4(25);
		}
		break;
	case MODE2:
		display_modetemp(temp_RED);
		if(timer4_flag == 1){
			HAL_GPIO_TogglePin(GPIOA,LED_RED1);
			HAL_GPIO_TogglePin(GPIOA,LED_RED2);
			HAL_GPIO_WritePin(GPIOA, LED_GREEN1, RESET);
			HAL_GPIO_WritePin(GPIOA, LED_GREEN2, RESET);
			HAL_GPIO_WritePin(GPIOA, LED_YELLOW1, RESET);
			HAL_GPIO_WritePin(GPIOA, LED_YELLOW2, RESET);
			setTimer4(25);
		}

		if(isButtonPressed(0)==1){
			mode = MODE3;
			temp_RED =0;
			setTimer4(25);
		}

		if(isButtonPressed(1)==1){
			temp_RED++;
			if(temp_RED >99){
				temp_RED = 0;
			}
		}

		if(isButtonPressed(2)== 1){
			if(temp_RED <= YELLOW_TIME){
				temp_RED =RED_TIME;
			}
			RED_TIME = temp_RED;
			GREEN_TIME = RED_TIME - YELLOW_TIME;
			temp_RED =0;
			initLedBuffer();
			status =0;
			num_EN =0;
			mode = MODE1;
		}
		break;

	case MODE3:
		display_modetemp(temp_GREEN);
		if(timer4_flag == 1){
			HAL_GPIO_TogglePin(GPIOA,LED_GREEN1);
			HAL_GPIO_TogglePin(GPIOA,LED_GREEN2);
			HAL_GPIO_WritePin(GPIOA, LED_RED1, RESET);
			HAL_GPIO_WritePin(GPIOA, LED_RED2, RESET);
			HAL_GPIO_WritePin(GPIOA, LED_YELLOW1, RESET);
			HAL_GPIO_WritePin(GPIOA, LED_YELLOW2, RESET);
			setTimer4(25);
		}

		if(isButtonPressed(0)==1){
			mode = MODE4;
			temp_GREEN =0;
			setTimer4(25);
		}

		if(isButtonPressed(1)==1){
			temp_GREEN++;
			if(temp_GREEN >98){
				temp_GREEN = 0;
			}
		}

		if(isButtonPressed(2)== 1 && temp_GREEN !=0){
			GREEN_TIME = temp_GREEN;
			RED_TIME = YELLOW_TIME + GREEN_TIME;
			temp_GREEN =0;
			if(RED_TIME >99){
				RED_TIME = 99;
				YELLOW_TIME = RED_TIME - GREEN_TIME;
			}
			initLedBuffer();
			status=0;
			num_EN =0;
			mode = MODE1;
		}
		break;

	case MODE4:
		display_modetemp(temp_YELLOW);
		if(timer4_flag == 1){
			HAL_GPIO_TogglePin(GPIOA,LED_YELLOW1);
			HAL_GPIO_TogglePin(GPIOA,LED_YELLOW2);
			HAL_GPIO_WritePin(GPIOA, LED_GREEN1, RESET);
			HAL_GPIO_WritePin(GPIOA, LED_GREEN2, RESET);
			HAL_GPIO_WritePin(GPIOA, LED_RED1, RESET);
			HAL_GPIO_WritePin(GPIOA, LED_RED2, RESET);
			setTimer4(25);
		}

		if(isButtonPressed(0)==1){
			temp_YELLOW =0;
			mode = MODE1;
			initLedBuffer();
			status =0;
			num_EN =0;
		}

		if(isButtonPressed(1)==1){
			temp_YELLOW++;
			if(temp_YELLOW > 98){
				temp_YELLOW = 0;
			}
		}

		if(isButtonPressed(2)== 1 && temp_YELLOW != 0){
			YELLOW_TIME = temp_YELLOW;
			temp_YELLOW =0;
			RED_TIME=GREEN_TIME + YELLOW_TIME;
			if(RED_TIME >99){
				RED_TIME = 99;
				GREEN_TIME = RED_TIME -YELLOW_TIME;
			}
			initLedBuffer();
			status =0;
			num_EN =0;
			mode = MODE1;
		}
		break;

	default:
		break;
	}

}
