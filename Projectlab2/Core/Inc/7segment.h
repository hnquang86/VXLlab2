/*
 * 7segment.h
 *
 *  Created on: Oct 2, 2024
 *      Author: Admin
 */

#ifndef INC_7SEGMENT_H_
#define INC_7SEGMENT_H_
#include "main.h"

extern const uint8_t digits[10][7];

void setDigit(int digit);
void display7SEG(int num);


#endif /* INC_7SEGMENT_H_ */
