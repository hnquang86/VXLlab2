/*
 * 7segment.h
 *
 *  Created on: Oct 2, 2024
 *      Author: Admin
 */

#ifndef INC_7SEGMENT_H_
#define INC_7SEGMENT_H_
#include "main.h"

const uint8_t digits[10][7] = {
    {0, 0, 0, 0, 0, 0, 1},  // 0
    {1, 0, 0, 1, 1, 1, 1},  // 1
    {0, 0, 1, 0, 0, 1, 0},  // 2
    {0, 0, 0, 0, 1, 1, 0},  // 3
    {1, 0, 0, 1, 1, 0, 0},  // 4
    {0, 1, 0, 0, 1, 0, 0},  // 5
    {0, 1, 0, 0, 0, 0, 0},  // 6
    {0, 0, 0, 1, 1, 1, 1},  // 7
    {0, 0, 0, 0, 0, 0, 0},  // 8
    {0, 0, 0, 0, 1, 0, 0}   // 9
};

void setDigit(int digit);
void display7SEG(int num);


#endif /* INC_7SEGMENT_H_ */
