/*
 * led7_segment.c
 *
 *  Created on: Oct 29, 2024
 *      Author: dangq
 */

#include "led7_segment.h"


void setEN(int num){
	switch(num){
	case 1:
		HAL_GPIO_WritePin(GPIOA, EN_0, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN_1, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_2, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN_3, GPIO_PIN_SET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, EN_0, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_1, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN_2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN_3, GPIO_PIN_RESET);
		break;
//	case 3:
//		HAL_GPIO_WritePin(GPIOA, EN_0, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(GPIOA, EN_1, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(GPIOA, EN_2, GPIO_PIN_RESET);
//		HAL_GPIO_WritePin(GPIOA, EN_3, GPIO_PIN_SET);
//		break;
//	case 4:
//		HAL_GPIO_WritePin(GPIOA, EN_0, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(GPIOA, EN_1, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(GPIOA, EN_2, GPIO_PIN_SET);
//		HAL_GPIO_WritePin(GPIOA, EN_3, GPIO_PIN_RESET);
	}
}

void display7SEG2(int num_SEG2){
	switch (num_SEG2){
		case 0:
				HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_SET);

				break;
		case 1:
					HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_SET);

				break;

		case 2:
					HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);

				break;
		case 3:
					HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);

				break;
		case 4:
						HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);

					break;
		case 5:
						HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);

					break;
		case 6:
						HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);

					break;
		case 7:
						HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_SET);

					break;
		case 8:
						HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);

					break;
		case 9:
						HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);

					break;
	}

}

void display7SEG1(int num_SEG1){
	switch (num_SEG1){
		case 0:
				HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_SET);

				break;
		case 1:
					HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_SET);

				break;

		case 2:
					HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_RESET);

				break;
		case 3:
					HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_RESET);
					HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_SET);
					HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_RESET);

				break;
		case 4:
						HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_RESET);

					break;
		case 5:
						HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_RESET);

					break;
		case 6:
						HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_RESET);

					break;
		case 7:
						HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_SET);

					break;
		case 8:
						HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_RESET);

					break;
		case 9:
						HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_SET);
						HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_RESET);
						HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_RESET);

					break;
	}

}

void display7SEG_YELLOW_RED(){
	switch(num_EN){
	case 0:

		if(Led_buffer[1] < 0 && Led_buffer[0] >0){
					Led_buffer[1]=9;
					Led_buffer[0]--;
		}
		if(Led_buffer[0] == 0 && Led_buffer[1]==0){
			Led_buffer[0] = RED_TIME/10;
			Led_buffer[1] = RED_TIME%10;
		}
		if(Led_buffer[3] < 0 && Led_buffer[2] >0){
					Led_buffer[3]=9;
					Led_buffer[2]--;
		}
		if(Led_buffer[2] == 0 && Led_buffer[3]==0){
			Led_buffer[2] = GREEN_TIME/10;
			Led_buffer[3] = GREEN_TIME%10;
		}
		if(Led_buffer[5] < 0 && Led_buffer[4] >0){
					Led_buffer[5]=9;
					Led_buffer[4]--;
		}
		if(Led_buffer[4] == 0 && Led_buffer[5]==0){
			Led_buffer[4] = YELLOW_TIME/10;
			Led_buffer[5] = YELLOW_TIME%10;
		}
		setTimer3(50);
		num_EN = 1;

		break;
			case 1:
				setEN(1);
				display7SEG1(Led_buffer[4]);
				display7SEG2(Led_buffer[0]);
				if(timer3_flag == 1){
					num_EN =2;
					setTimer3(50);
				}
				break;
			case 2:
				setEN(2);
				display7SEG1(Led_buffer[5]);
				display7SEG2(Led_buffer[1]);
				if(timer3_flag == 1){
					Led_buffer[1]--;
					Led_buffer[5]--;
					num_EN =0;
				}
				break;
}
}

void display7SEG_GREEN_RED(){
	switch(num_EN){
	case 0:
		if(Led_buffer[1] < 0 && Led_buffer[0] >0){
					Led_buffer[1]=9;
					Led_buffer[0]--;
		}
		if(Led_buffer[0] == 0 && Led_buffer[1]==0){
			Led_buffer[0] = RED_TIME/10;
			Led_buffer[1] = RED_TIME%10;
		}
		if(Led_buffer[3] < 0 && Led_buffer[2] >0){
					Led_buffer[3]=9;
					Led_buffer[2]--;
		}
		if(Led_buffer[2] == 0 && Led_buffer[3]==0){
			Led_buffer[2] = GREEN_TIME/10;
			Led_buffer[3] = GREEN_TIME%10;
		}
		if(Led_buffer[5] < 0 && Led_buffer[4] >0){
					Led_buffer[5]=9;
					Led_buffer[4]--;
		}
		if(Led_buffer[4] == 0 && Led_buffer[5]==0){
			Led_buffer[4] = YELLOW_TIME/10;
			Led_buffer[5] = YELLOW_TIME%10;
		}
		setTimer3(50);
		num_EN = 1;

		break;
			case 1:
				setEN(1);
				display7SEG1(Led_buffer[2]);
				display7SEG2(Led_buffer[0]);
				if(timer3_flag == 1){
					num_EN =2;
					setTimer3(50);
				}
				break;
			case 2:
				setEN(2);
				display7SEG1(Led_buffer[3]);
				display7SEG2(Led_buffer[1]);
				if(timer3_flag == 1){
					Led_buffer[1]--;
					Led_buffer[3]--;
					num_EN =0;
				}
				break;
}
}

void display7SEG_RED_YELLOW(){
	switch(num_EN){
	case 0:
		if(Led_buffer[1] < 0 && Led_buffer[0] >0){
					Led_buffer[1]=9;
					Led_buffer[0]--;
		}
		if(Led_buffer[0] == 0 && Led_buffer[1]==0){
			Led_buffer[0] = RED_TIME/10;
			Led_buffer[1] = RED_TIME%10;
		}
		if(Led_buffer[3] < 0 && Led_buffer[2] >0){
					Led_buffer[3]=9;
					Led_buffer[2]--;
		}
		if(Led_buffer[2] == 0 && Led_buffer[3]==0){
			Led_buffer[2] = GREEN_TIME/10;
			Led_buffer[3] = GREEN_TIME%10;
		}
		if(Led_buffer[5] < 0 && Led_buffer[4] >0){
					Led_buffer[5]=9;
					Led_buffer[4]--;
		}
		if(Led_buffer[4] == 0 && Led_buffer[5]==0){
			Led_buffer[4] = YELLOW_TIME/10;
			Led_buffer[5] = YELLOW_TIME%10;
		}
		setTimer3(50);
		num_EN = 1;

		break;
			case 1:
				setEN(1);
				display7SEG1(Led_buffer[0]);
				display7SEG2(Led_buffer[4]);
				if(timer3_flag == 1){
					num_EN =2;
					setTimer3(50);
				}
				break;
			case 2:
				setEN(2);
				display7SEG1(Led_buffer[1]);
				display7SEG2(Led_buffer[5]);
				if(timer3_flag == 1){
					Led_buffer[1]--;
					Led_buffer[5]--;
					num_EN =0;
				}
				break;
}
}

void display7SEG_RED_GREEN(){
	switch(num_EN){
			case 0:
				if(Led_buffer[1] < 0 && Led_buffer[0] >0){
							Led_buffer[1]=9;
							Led_buffer[0]--;
				}
				if(Led_buffer[0] == 0 && Led_buffer[1]==0){
					Led_buffer[0] = RED_TIME/10;
					Led_buffer[1] = RED_TIME%10;
				}
				if(Led_buffer[3] < 0 && Led_buffer[2] >0){
							Led_buffer[3]=9;
							Led_buffer[2]--;
				}
				if(Led_buffer[2] == 0 && Led_buffer[3]==0){
					Led_buffer[2] = GREEN_TIME/10;
					Led_buffer[3] = GREEN_TIME%10;
				}
				if(Led_buffer[5] < 0 && Led_buffer[4] >0){
							Led_buffer[5]=9;
							Led_buffer[4]--;
				}
				if(Led_buffer[4] == 0 && Led_buffer[5]==0){
					Led_buffer[4] = YELLOW_TIME/10;
					Led_buffer[5] = YELLOW_TIME%10;
				}
				setTimer3(50);
				num_EN = 1;

				break;
			case 1:
				setEN(1);
				display7SEG1(Led_buffer[0]);
				display7SEG2(Led_buffer[2]);
				if(timer3_flag == 1){
					num_EN =2;
					setTimer3(50);
				}
				break;
			case 2:
				setEN(2);
				display7SEG1(Led_buffer[1]);
				display7SEG2(Led_buffer[3]);
				if(timer3_flag == 1){
					Led_buffer[1]--;
					Led_buffer[3]--;
					num_EN =0;
				}
				break;
}
}


void display7SEG_TFL(){
	switch(status){
	case RED_GREEN:
		display7SEG_RED_GREEN();
		break;
	case RED_YELLOW:
		display7SEG_RED_YELLOW();
		break;
	case GREEN_RED:
		display7SEG_GREEN_RED();
		break;
	case YELLOW_RED:
		display7SEG_YELLOW_RED();
		break;
	default:
		break;
	}


}


