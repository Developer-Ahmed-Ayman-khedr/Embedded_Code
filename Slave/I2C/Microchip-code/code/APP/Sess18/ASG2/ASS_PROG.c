/*
 * ASS_PROG.c
 *
 * Created: 4/19/2024 1:58:53 PM
 *  Author: ahmed
 

#include "Sess18\ASG2\ASS_INT.h"

int source_code()
{
	//LCD initialization
	LCD_int();
	
	//Counter
	u8 counter=0;
	
	//Increment button
	u8 increment_state;
	DIO_setPinDir(DIO_PIND0,DIO_OUTPUT);
	
	//Decrement button
	u8 decrement_state;
	DIO_setPinDir(DIO_PIND6,DIO_OUTPUT);
	
	//clear and start display at 0
	LCD_clearDis();
	LCD_sendNum(counter);
	while (1)
	{
		//Increment button
		increment_state = DIO_readPinValue(DIO_PIND0);
		if (increment_state==DIO_HIGH && counter<9)
		{
			counter++;
			LCD_clearDis();
			while (DIO_readPinValue(DIO_PIND0)==DIO_HIGH);
			LCD_sendNum(counter);
		}
		
		//Decrement button
		decrement_state = DIO_readPinValue(DIO_PIND6);
		if (decrement_state==DIO_HIGH  && counter>0)
		{
			counter--;
			LCD_clearDis();
			while (DIO_readPinValue(DIO_PIND6)==DIO_HIGH);
			LCD_sendNum(counter);
		}
		
	}
	return 0;
}
*/ 