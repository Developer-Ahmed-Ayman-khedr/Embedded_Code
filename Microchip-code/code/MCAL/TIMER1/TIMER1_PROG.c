/*
 * TIMER1_PROG.c
 *
 * Created: 5/13/2024 9:02:55 PM
 *  Author: ahmed
 */

#include "TIMER1_INT.h" 

#include "BIT_MATH.h"
#include "STD_TYPES.h"

void TIMER1_initFastPwmMod14()
{
	//select mode 14(Fast PWM)
	CLEAR_BIT(TCCR1A,WGM10);
	SET_BIT(TCCR1A,WGM11);
	SET_BIT(TCCR1B,WGM12);
	SET_BIT(TCCR1B,WGM13);
	
	//select non inverting
	CLEAR_BIT(TCCR1A,COM1A0);
	SET_BIT(TCCR1A,COM1A1);
}

void TIMER1_setOcr(u16 value)
{
	OCR1A = value;
}

void TIMER1_setFrequency(u16 pwm_frequency)
{
	//f = 50 Hz
	ICR1 = (16000000/(pwm_frequency*64))-1;
	//top = 4999
	//ICR1 = 4999;
	
	//select prescaler = 64
	SET_BIT(TCCR1B,CS10);
	SET_BIT(TCCR1B,CS11);
	CLEAR_BIT(TCCR1B,CS12);
}