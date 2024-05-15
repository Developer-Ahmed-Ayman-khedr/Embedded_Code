/*
 * SERVO_PROG.c
 *
 * Created: 5/13/2024 9:18:28 PM
 *  Author: ahmed
 

#include "Sess24MOTOR/SERVO/SERVO_INT.h"

int source_code()
{	
	//motor pins
	
	//enable
	DIO_setPinDir(DIO_PIND5,DIO_OUTPUT);
	
	GI_enable();
	
	TIMER1_initFastPwmMod14();
	
	TIMER1_setFrequency(50);
	
	//TIMER1_setOcr(249);
		
	while (1)
	{
		TIMER1_setOcr(499);
		_delay_ms(1000);
		TIMER1_setOcr(249);
		_delay_ms(1000);	
	}
	
	return 0;
}

*/ 