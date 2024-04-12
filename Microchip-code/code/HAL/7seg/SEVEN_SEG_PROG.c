/*
 * _7SEG_INT.c
 *
 * Created: 4/12/2024 8:29:59 PM
 *  Author: Ahmed
 */ 

#include "SEVEN_SEG_INT.h"

void seven_seg_set(u8 pinNum1, u8 dir1,u8 pinNum2, u8 dir2,u8 pinNum3, u8 dir3,u8 pinNum4, u8 dir4,u8 pinNum5, u8 dir5,u8 pinNum6, u8 dir6,u8 pinNum7, u8 dir7){
	//7-segment
	DIO_setPinDir(pinNum1,dir1);
	DIO_setPinDir(pinNum2,dir2);
	DIO_setPinDir(pinNum3,dir3);
	DIO_setPinDir(pinNum4,dir4);
	DIO_setPinDir(pinNum5,dir5);
	DIO_setPinDir(pinNum6,dir6);
	DIO_setPinDir(pinNum7,dir7);
	return;
}

void seven_seg_out(u8 pinNum1, u8 level1,u8 pinNum2, u8 level2,u8 pinNum3, u8 level3,u8 pinNum4, u8 level4,u8 pinNum5, u8 level5,u8 pinNum6, u8 level6,u8 pinNum7, u8 level7){
	//7-segment
	DIO_setPinValue(pinNum1,level1);
	DIO_setPinValue(pinNum2,level2);
	DIO_setPinValue(pinNum3,level3);
	DIO_setPinValue(pinNum4,level4);
	DIO_setPinValue(pinNum5,level5);
	DIO_setPinValue(pinNum6,level6);
	DIO_setPinValue(pinNum7,level7);
	return;
}