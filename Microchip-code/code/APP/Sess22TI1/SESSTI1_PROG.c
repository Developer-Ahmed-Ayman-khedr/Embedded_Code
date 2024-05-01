/*
 * SESSTI1_PROG.c
 *
 * Created: 5/1/2024 6:46:06 PM
 *  Author: ahmed
 */ 

#include "Sess22TI1/SESSTI1_INT.h"


void toggleled_1(){
	static u16 counter_1 = 0, counter_2 = 0;
	//led2 0.5 sec
	counter_1++;
	if (counter_1==3906)
	{
		DIO_togglePinValue(DIO_PINC2);
		counter_1 = 0 ;
	}
	//led2 1 sec
	counter_2++;
	if (counter_2==7812)
	{
		DIO_togglePinValue(DIO_PINC3);
		counter_2 = 0;
	}
}

int source_code()
{
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINC3,DIO_OUTPUT);
	
	
	GI_enable();
	TIMER0_initNormal();
	TIMER0_start(TIMER0_DIV8);
	TIMER_setcallbackOv(toggleled_1);
	
	while (1)
	{
		
	}
		
	return 0;
}