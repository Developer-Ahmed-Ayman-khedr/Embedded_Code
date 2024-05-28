/*
 * ADC_PROG.c
 *
 * Created: 29/04/2024 08:07:35 PM
 *  Author: AMIT
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ADC_INT.h"

void ADC_init()
{
	//select Vref -> AVCC
	
	//prescaler select 128
	
	//enable ADC
	
}

u16 ADC_read(u8 chNum)
{
	//select ch.
	if(chNum == ADC_CH0)
	{
		
	}
	else if(chNum == ADC_CH1)
	{
		
	}
	
	//start
	
	//wait conv.
	while(GET_BIT(ADCSRA ,ADSC) == 1);
	
	//read
	return ADCLH;
}

f32 ADC_convertAnalog(u16 digitalValue)
{
	//analog = digital * step (5.0/1024)
	
}