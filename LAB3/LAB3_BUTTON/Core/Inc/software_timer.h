/*
 * software_timer.h
 *
 *  Created on: Sep 26, 2024
 *      Author: dangq
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
#include "main.h"
#include "global.h"
extern int timer0_flag;
void setTimer0(int duration);

extern int timer1_flag;
void setTimer1(int duration);

extern int timer2_flag;
void setTimer2(int duration);

extern int timer3_flag;
void setTimer3(int duration);
extern int timer4_flag;
void setTimer4(int duration);
extern int timer5_flag;
void setTimer5(int duration);
extern int timer6_flag;
void setTimer6(int duration);
extern int timer7_flag;
void setTimer7(int duration);
extern int timer8_flag;
void setTimer8(int duration);
extern int timer9_flag;
void setTimer9(int duration);


void timer_run();


#endif /* INC_SOFTWARE_TIMER_H_ */
