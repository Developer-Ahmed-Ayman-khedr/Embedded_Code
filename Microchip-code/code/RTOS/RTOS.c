/*
 * RTOS_PROG.c
 *
 * Created: 6/10/2024 8:47:04 PM
 *  Author: ahmed
 */ 

#include "RTOS.h"

task_t arrTasks[TASKS_COUNT];

void RTOS_Init(){
	GI_enable();
	TIMER0_initNormal();
	TIMER_setcallbackOv(RTOS_Schedular);
}

void RTOS_Schedular(){
	static u16 counter = 0;
	counter++;
	
	for(u8 i=0; i<TASKS_COUNT; i++){
		if (counter%arrTasks[i].periodicity==0)
		{
			arrTasks[i].ptrfunc();
		}
	}
}

void RTOS_CreateTask(u16 period,void (*func)(), u8 priority){
	arrTasks[priority].periodicity = period;
	arrTasks[priority].ptrfunc = func;
}

void RTOS_Start(){
	TIMER0_start(TIMER0_DIV64);
}