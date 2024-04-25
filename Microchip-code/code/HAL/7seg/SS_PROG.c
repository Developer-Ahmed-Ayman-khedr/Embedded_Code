/*
 * _7SEG_INT.c
 *
 * Created: 4/12/2024 8:29:59 PM
 *  Author: Ahmed
 */ 

#include "SS_INT.h"

void SS_init(){
	DIO_setPinDir(SS_S0,DIO_OUTPUT);
	DIO_setPinDir(SS_S1,DIO_OUTPUT);
	DIO_setPinDir(SS_S2,DIO_OUTPUT);
	DIO_setPinDir(SS_S3,DIO_OUTPUT);
	
	DIO_setPinDir(SS_ENABLE1,DIO_OUTPUT);
	DIO_setPinDir(SS_ENABLE2,DIO_OUTPUT);
}

void SS_writeNum(u8 num){
	//disable2
	DIO_setPinValue(SS_ENABLE2,DIO_LOW);
	
	//write num1
	u8 num1 = num/10;
	DIO_setPinValue(SS_S0,GET_BIT(num1,0));
	DIO_setPinValue(SS_S1,GET_BIT(num1,1));
	DIO_setPinValue(SS_S2,GET_BIT(num1,2));
	DIO_setPinValue(SS_S3,GET_BIT(num1,3));
	
	//enable1
	DIO_setPinValue(SS_ENABLE1,DIO_HIGH);
	_delay_ms(1);
	
	//disable1
	DIO_setPinValue(SS_ENABLE1,DIO_LOW);
	//write num2
	u8 num2 = num%10;
	DIO_setPinValue(SS_S0,GET_BIT(num2,0));
	DIO_setPinValue(SS_S1,GET_BIT(num2,1));
	DIO_setPinValue(SS_S2,GET_BIT(num2,2));
	DIO_setPinValue(SS_S3,GET_BIT(num2,3));
	
	//enable2
	DIO_setPinValue(SS_ENABLE2,DIO_HIGH);
	_delay_ms(1);
}
