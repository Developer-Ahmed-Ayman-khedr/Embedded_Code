/*
 * TIMRE0_INT.h
 *
 * Created: 5/1/2024 7:35:19 PM
 *  Author: ahmed
 */ 


#ifndef TIMRE0_INT_H_
#define TIMRE0_INT_H_

//Includes

#include "STD_TYPES.h"

//Timer/Counter Control Register
#define TCCR0 		*((volatile u8*)0x53)
#define FOC0		7
#define WGM00		6
#define COM01		5
#define COM00		4
#define WGM01		3
#define CS02		2
#define CS01		1
#define CS00		0

//Timer/Counter Register
#define TCNT0 		*((volatile u8*)0x52)

//Output Compare Register
#define OCR0 		*((volatile u8*)0x5C)

//Timer/Counter Interrupt Mask
#define TIMSK 		*((volatile u8*)0x59)
#define OCIE0		1
#define TOIE0		0



#define TIMER0_DIV0			0
#define TIMER0_DIV8			1
#define TIMER0_DIV64		2
#define TIMER0_DIV256		3

void TIMER0_initNormal();
void TIMER0_start(u8 prescaler);
void TIMER_setcallbackOv(void (*ptr)());

#endif /* TIMRE0_INT_H_ */