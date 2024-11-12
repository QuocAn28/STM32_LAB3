/*
 * global.c
 *
 *  Created on: Oct 29, 2024
 *      Author: dangq
 */
#include "global.h"

int counter = 0;
int RED_TIME = 95;
int GREEN_TIME = 90;
int YELLOW_TIME = 5;
int mode = MODE1;
int status =0;
int num_EN = 0;
int Led_buffer[6]={};
int num = 0;

int temp_RED = 0;
int temp_GREEN =0;
int temp_YELLOW = 0;

void initLedBuffer() {
	Led_buffer[0] = RED_TIME/10;
	Led_buffer[1] = RED_TIME%10;
	Led_buffer[2] = GREEN_TIME/10;
	Led_buffer[3] = GREEN_TIME%10;
	Led_buffer[4] = YELLOW_TIME/10;
	Led_buffer[5] = YELLOW_TIME%10;
}
























void Lab3_Init(void) {
    // Kích hoạt xung nhịp cho GPIOA và GPIOB
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOB_CLK_ENABLE();

    GPIO_InitTypeDef GPIO_InitStruct = {0};

    // Cấu hình GPIO cho các đèn LED và EN trên cổng A
		GPIO_InitStruct.Pin = LED_RED | LED_RED1 | LED_RED2 | LED_GREEN1 | LED_GREEN2 | LED_YELLOW1 | LED_YELLOW2
							  | EN_0 | EN_1 | EN_2 | EN_3;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
		HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    // Cấu hình GPIO cho các nút bấm (BUTTON) trên cổng A
		GPIO_InitStruct.Pin = BUTTON0 | BUTTON1 | BUTTON2;
		GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
		GPIO_InitStruct.Pull = GPIO_PULLUP;  // Kéo lên nội bộ
		// Không cần đặt lại tốc độ khi dùng chế độ INPUT
		HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    // Cấu hình GPIO cho các SEG1ment của 7 đoạn (SEG1) trên cổng B
		GPIO_InitStruct.Pin = SEG1_0 | SEG1_1 | SEG1_2 | SEG1_3 | SEG1_4 | SEG1_5 | SEG1_6|
				SEG2_0 | SEG2_1 | SEG2_2 | SEG2_3 | SEG2_4 | SEG2_5 | SEG2_6;

		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
		HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
}


