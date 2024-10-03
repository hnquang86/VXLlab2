/*
 * sofwaretimer.c
 *
 *  Created on: Oct 2, 2024
 *      Author: Admin
 */
#include "sofwaretimer.h"

int timer1_Counter = 0;
int timer1_Flag = 0;

void setTimer1(int duration){
	timer1_Counter = duration / 10;
	timer1_Flag = 0;
}

void timerRun(){
	if(timer1_Counter > 0){
		timer1_Counter--;
		if(timer1_Counter <= 0){
			timer1_Flag = 1;
		}
	}
}

