/*
 * PWM_PROG.c
 *
 * Created: 5/8/2024 8:19:30 PM
 *  Author: ahmed
 */ 

#include "Sess23CTC/PWM/PWM_INT.h"

int source_code()
{
	DIO_setPinDir(DIO_PINB3,DIO_OUTPUT);
	
	//high
	DIO_setPinDir(DIO_PIND6,DIO_INPUT);
	u8 state_high;
	
	//low
	DIO_setPinDir(DIO_PIND0,DIO_INPUT);
	u8 state_low;
	
	GI_enable();
	
	TIMER0_initFPWM();
	
	
	u16 lumin = 0;
	
	TIMER0_start(TIMER0_DIV64);
	
	while (1)
	{
		state_high=DIO_readPinValue(DIO_PIND6);
		if (state_high==DIO_HIGH)
		{
			lumin+=20;
			if (lumin>=255)
			{
				lumin = 255;
			}
			TIMER0_setOCR(lumin);
			while (DIO_readPinValue(DIO_PIND6)==DIO_HIGH);
		}
		
		state_low=DIO_readPinValue(DIO_PIND0);
		if (state_low==DIO_HIGH)
		{
			lumin-=20;
			if (lumin<=0)
			{
				lumin = 0;
			}
			TIMER0_setOCR(lumin);
			while(DIO_readPinValue(DIO_PIND0)==DIO_HIGH);
		}
		
	}
	
	return 0;
}