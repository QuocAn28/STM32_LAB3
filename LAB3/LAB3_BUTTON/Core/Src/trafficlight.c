/*
 * trafficlight.c
 *
 *  Created on: Oct 29, 2024
 *      Author: dangq
 */

#include "global.h"



void displayTFL(){
	switch (status){
	case NO_LED:
		HAL_GPIO_WritePin(GPIOA, LED_RED1, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_GREEN1, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_YELLOW1, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_RED2, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_GREEN2, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_YELLOW2, RESET);
		break;
	case RED_GREEN:
		HAL_GPIO_WritePin(GPIOA, LED_RED1, SET);
		HAL_GPIO_WritePin(GPIOA, LED_GREEN1, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_YELLOW1, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_RED2, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_GREEN2, SET);
		HAL_GPIO_WritePin(GPIOA, LED_YELLOW2, RESET);
		break;
	case RED_YELLOW:
		HAL_GPIO_WritePin(GPIOA, LED_RED1, SET);
		HAL_GPIO_WritePin(GPIOA, LED_GREEN1, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_YELLOW1, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_RED2, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_GREEN2, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_YELLOW2, SET);
		break;
	case GREEN_RED:
		HAL_GPIO_WritePin(GPIOA, LED_RED1, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_GREEN1, SET);
		HAL_GPIO_WritePin(GPIOA, LED_YELLOW1, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_RED2,  SET);
		HAL_GPIO_WritePin(GPIOA, LED_GREEN2, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_YELLOW2, RESET);
		break;
	case YELLOW_RED:
		HAL_GPIO_WritePin(GPIOA, LED_RED1, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_GREEN1, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_YELLOW1,  SET);
		HAL_GPIO_WritePin(GPIOA, LED_RED2,  SET);
		HAL_GPIO_WritePin(GPIOA, LED_GREEN2, RESET);
		HAL_GPIO_WritePin(GPIOA, LED_YELLOW2, RESET);
		break;
	default:
		break;
	}
}




