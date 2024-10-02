/*
 * 7segment.c
 *
 *  Created on: Oct 2, 2024
 *      Author: Admin
 */

#include "7segment.h"

void setDigit(int digit){
    HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, digits[digit][0] ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, digits[digit][1] ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, digits[digit][2] ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, digits[digit][3] ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, digits[digit][4] ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, digits[digit][5] ? GPIO_PIN_SET : GPIO_PIN_RESET);
    HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, digits[digit][6] ? GPIO_PIN_SET : GPIO_PIN_RESET);
}

void display7SEG(int num){
	setDigit(num);
}

