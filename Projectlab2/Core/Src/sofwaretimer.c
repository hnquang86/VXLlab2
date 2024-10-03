/*
 * sofwaretimer.c
 *
 *  Created on: Oct 2, 2024
 *      Author: Admin
 */
#include "sofwaretimer.h"

int timer1_Counter = 0;
int timer1_Flag = 0;
int timerLED_Counter = 0;
int timerLED_Flag = 0;
int hour = 15 , minute = 8 , second = 50;


void setTimer1(int duration){
	timer1_Counter = duration / 10;
	timer1_Flag = 0;
}

void setTimerLED(int duration){
	timerLED_Counter =  duration / 10;
	timerLED_Flag =  0;
}

void timerRun(){
	if(timer1_Counter > 0){
		timer1_Counter--;
		if(timer1_Counter <= 0){
			timer1_Flag = 1;
		}
	}
	if(timerLED_Counter > 0){
		timerLED_Counter--;
		if(timerLED_Counter <= 0){
			timerLED_Flag = 1;
		}
	}
}

