/*
 * _7SEG_INT.h
 *
 * Created: 4/12/2024 8:30:38 PM
 *  Author: Ahmed
 */ 


#ifndef SEVEN_SEG_INT_H_
#define SEVEN_SEG_INT_H_

#include "DIO_INT.h"

void seven_seg_set(u8 pinNum1, u8 dir1,u8 pinNum2, u8 dir2,u8 pinNum3, u8 dir3,u8 pinNum4, u8 dir4,u8 pinNum5, u8 dir5,u8 pinNum6, u8 dir6,u8 pinNum7, u8 dir7);

void seven_seg_out(u8 pinNum1, u8 level1,u8 pinNum2, u8 level2,u8 pinNum3, u8 level3,u8 pinNum4, u8 level4,u8 pinNum5, u8 level5,u8 pinNum6, u8 level6,u8 pinNum7, u8 level7);

#endif /* SEVEN_SEG_INT_H_ */