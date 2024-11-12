/*
 * fsm_automatic.c
 *
 *  Created on: Oct 29, 2024
 *      Author: dangq
 */

#include "fsm_automatic.h"


void fsm_automatic(){
	switch (status){
	case NO_LED:
		status = RED_GREEN;
		setTimer2(GREEN_TIME*100);
		break;
	case RED_GREEN:
		display7SEG_TFL();
		displayTFL();
		if(timer2_flag == 1){
			status = RED_YELLOW;
			setTimer2(YELLOW_TIME*100);
		}
		break;
	case RED_YELLOW:
		display7SEG_TFL();
		displayTFL();
		if(timer2_flag == 1){
			status = GREEN_RED;
			setTimer2(GREEN_TIME*100);
		}
		break;
	case GREEN_RED:
		display7SEG_TFL();
		displayTFL();
		if(timer2_flag ==1){
			status = YELLOW_RED;
			setTimer2(YELLOW_TIME*100);
		}
		break;
	case YELLOW_RED:
		display7SEG_TFL();
		displayTFL();
		if(timer2_flag == 1){
			status = RED_GREEN;
			setTimer2(GREEN_TIME*100);
		}
		break;
	default:
		break;

	}
}
