/*
 * EXT_PROG.c
 *
 * Created: 24/04/2024 07:24:11 PM
 *  Author: AMIT
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "EXT_INT.h"
#include "DIO_INT.h"

void EXT_int0Init(u8 trigger)
{
	if(trigger == EXT_RISING)
	{
		SET_BIT(MCUCR, ISC00);
		SET_BIT(MCUCR, ISC01);
	}
	else if(trigger == EXT_FALLING)
	{
		CLEAR_BIT(MCUCR, ISC00);
		SET_BIT(MCUCR, ISC01);
	}
	else if(trigger == EXT_ANY_LOGICAL)
	{
		SET_BIT(MCUCR, ISC00);
		CLEAR_BIT(MCUCR, ISC01);
	}
	
	//enable
	SET_BIT(GICR,INT0);
	
}

void (*EXT_int0Func)();
//EXT_int0Func = toggleLed;


void EXT_setCallbackInt0(void (*func)())
{
	EXT_int0Func = func;
}

//num(in vector table)-1
void __vector_1() __attribute__((signal));
void __vector_1()
{
	EXT_int0Func();
	//DIO_togglePinValue(DIO_PINC2);	
}




//same as above
void EXT_int1Init(u8 trigger)
{
	
}

//same as above
void EXT_int2Init(u8 trigger)
{
	
}