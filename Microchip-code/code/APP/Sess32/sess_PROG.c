/*
 * sess_PROG.c
 *
 * Created: 6/10/2024 6:17:36 PM
 *  Author: ahmed
 */ 

#include "Sess32/sess_INT.h"

void task1(){
	DIO_togglePinValue(DIO_PINC2);
}

void task2(){
	DIO_togglePinValue(DIO_PINC7);
}

void task3(){
	DIO_togglePinValue(DIO_PINA3);
}

int source_code()
{
	RTOS_Init();
	
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINC7,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINA3,DIO_OUTPUT);
	
	RTOS_CreateTask(500,task1,0);
	RTOS_CreateTask(100,task2,1);
	RTOS_CreateTask(1500,task3,2);
	
	RTOS_Start();
	
	while (1)
	{
		
	}
	return 0;
}