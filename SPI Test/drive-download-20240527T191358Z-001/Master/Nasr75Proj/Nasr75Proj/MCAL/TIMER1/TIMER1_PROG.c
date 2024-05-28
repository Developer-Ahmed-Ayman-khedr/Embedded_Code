/*
 * TIMER1_PROG.c
 *
 * Created: 13/05/2024 09:02:08 PM
 *  Author: AMIT
 */ 

#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "TIMER1_INT.h"

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


void TIMER1_initIcu(u8 edge)
{
	//select normal mode
	CLEAR_BIT(TCCR1A,WGM10);
	CLEAR_BIT(TCCR1A,WGM11);
	CLEAR_BIT(TCCR1B,WGM12);
	CLEAR_BIT(TCCR1B,WGM13);
	
	//select edge
	if(edge == TIMER1_ICU_RISING)
	{
		SET_BIT(TCCR1B,ICES1);
	}
	else if(edge == TIMER1_ICU_FALING)
	{
		CLEAR_BIT(TCCR1B,ICES1);
	}
	
	//enable interrupt ICU
	SET_BIT(TIMSK,TICIE1);
	
	//select prescaler
	//select prescaler = 64
	SET_BIT(TCCR1B,CS10);
	SET_BIT(TCCR1B,CS11);
	CLEAR_BIT(TCCR1B,CS12);
}

void TIMER1_setPreload(u16 value)
{
	TCNT1 = value;
}

u16 TIMER1_getIcr()
{
	return ICR1;
}

void (*TIMER1_icuFunc)();

void TIMER1_setCallbackIcu(void (*func)())
{
	TIMER1_icuFunc = func;
}

//num(in vector table)-1
void __vector_6() __attribute__((signal));
void __vector_6()
{
	TIMER1_icuFunc();
}