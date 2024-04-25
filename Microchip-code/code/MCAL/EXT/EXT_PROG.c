/*
 * EXT_PROG.c
 *
 * Created: 4/24/2024 7:25:00 PM
 *  Author: ahmed
 */ 

#include "EXT_INT.h"

void EXT_int0Int(u8 trigger){
	if (trigger==EXT_RISING)
	{
		SET_BIT(MCUCR,ISC00);
		SET_BIT(MCUCR,ISC01);
		
	}
	else if (trigger==EXT_FALLING)
	{
		CLEAR_BIT(MCUCR,ISC00);
		CLEAR_BIT(MCUCR,ISC01);
	}
	else if (trigger==EXT_ANY_LOGIC){
		SET_BIT(MCUCR,ISC00);
		CLEAR_BIT(MCUCR,ISC01);
	}
	
	//enable 
	SET_BIT(GICR,INT0);
	
}

void (*EXT_int0Func)();

//call back function to send the function from the main function
void EXT_setcallbackInt0(void (*ptr)()){
	EXT_int0Func = ptr;
}

//Vector Table Function that belongs to INT0
//number(in vector table) - 1 
void __vector_1() __attribute__((signal));
void __vector_1(){
	EXT_int0Func();
	//LCD_Shift(LCD_SHIFT_DIS_LIFT);
}

void EXT_int1Int(u8 trigger){
	if (trigger==EXT_RISING)
	{
		SET_BIT(MCUCR,ISC10);
		SET_BIT(MCUCR,ISC11);
	}
	else if (trigger==EXT_FALLING)
	{
		CLEAR_BIT(MCUCR,ISC10);
		CLEAR_BIT(MCUCR,ISC11);
	}
	else if (trigger==EXT_ANY_LOGIC){
		SET_BIT(MCUCR,ISC10);
		CLEAR_BIT(MCUCR,ISC11);
	}
	
	//enable
	SET_BIT(GICR,INT1);
}

void (*EXT_int1Func)();

//call back function to send the function from the main function
void EXT_setcallbackInt1(void (*ptr)()){
	EXT_int1Func = ptr;
}

//Vector Table Function that belongs to INT0
//number(in vector table) - 1
void __vector_2() __attribute__((signal));
void __vector_2(){
	EXT_int1Func();
}



void EXT_int2Int(u8 trigger){
	if (trigger==EXT_RISING)
	{
		SET_BIT(MCUCSR,ISC2);		
	}
	else if (trigger==EXT_FALLING)
	{
		CLEAR_BIT(MCUCSR,ISC2);
	}
	
	//enable
	SET_BIT(GICR,INT2);
}

void (*EXT_int2Func)();

//call back function to send the function from the main function
void EXT_setcallbackInt2(void (*ptr)()){
	EXT_int2Func = ptr;
}

//Vector Table Function that belongs to INT0
//number(in vector table) - 1
void __vector_3() __attribute__((signal));
void __vector_3(){
	EXT_int2Func();
}