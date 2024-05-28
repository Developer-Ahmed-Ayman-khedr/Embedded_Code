/*
 * GI_PROG.c
 *
 * Created: 24/04/2024 07:48:41 PM
 *  Author: AMIT
 */ 

#include "BIT_MATH.h"
#include "GI_INT.h"

void GI_enable()
{
	SET_BIT(SREG, I);	
}

void GI_disable()
{
	CLEAR_BIT(SREG, I);	
}