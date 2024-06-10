/*
 * RTOS.h
 *
 * Created: 6/10/2024 8:46:47 PM
 *  Author: ahmed
 */ 


#ifndef RTOS_H_
#define RTOS_H_

/******************************************
  INCLUDES
*******************************************/

#include "DIO_INT.h"

#include "GI_INT.h"

#include "TIMER0_INT.h"

/******************************************
  Global Data TYPES AND STRUCTURES
*******************************************/

typedef struct task
{
	u16 periodicity;
	void (*ptrfunc)();	
}task_t;

/******************************************
  GLOBAL CONSTANT MACROS
*******************************************/

#define TASKS_COUNT 3

/******************************************
  GLOBAL FUNCTIONS MACROS
*******************************************/


/******************************************
  GLOBAL FUNCTIONS Prototypes
*******************************************/

void RTOS_Init();

void RTOS_CreateTask(u16 period,void (*ptr)(), u8 priority);

void RTOS_Start();

#endif /* RTOS_H_ */