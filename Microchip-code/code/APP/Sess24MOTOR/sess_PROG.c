/*
 * sess_PROG.c
 *
 * Created: 5/13/2024 7:24:37 PM
 *  Author: ahmed
 */ 

#include "Sess24MOTOR/sess_INT.h"

int source_code()
{
	DIO_setPinDir(DIO_PINB3,DIO_OUTPUT);
	
	//high
	DIO_setPinDir(DIO_PIND6,DIO_INPUT);
	u8 state_high;
	
	//low
	DIO_setPinDir(DIO_PIND2,DIO_INPUT);
	u8 state_low;
	
	//motor pins
	
	//enable
	DIO_setPinDir(DIO_PIND5,DIO_OUTPUT);
	
	//control
	DIO_setPinDir(DIO_PINC5,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINC6,DIO_OUTPUT);
	
	
	GI_enable();
	
	TIMER0_initFPWM();
	
	TIMER0_start(TIMER0_DIV64);
	
	while (1)
	{
		state_high=DIO_readPinValue(DIO_PIND6);
		if (state_high==DIO_HIGH)
		{
			
			DIO_setPinValue(DIO_PIND5,DIO_HIGH);
			
			DIO_setPinValue(DIO_PINC5,DIO_HIGH);
			DIO_setPinValue(DIO_PINC6,DIO_LOW);
			
			
			while (DIO_readPinValue(DIO_PIND6)==DIO_HIGH);
		}
		
		state_low=DIO_readPinValue(DIO_PIND2);
		if (state_low==DIO_HIGH)
		{
			DIO_setPinValue(DIO_PIND5,DIO_HIGH);
			
			DIO_setPinValue(DIO_PINC5,DIO_LOW);
			DIO_setPinValue(DIO_PINC6,DIO_HIGH);
			
			while(DIO_readPinValue(DIO_PIND2)==DIO_HIGH);
		}
		
	}
	
	return 0;
}