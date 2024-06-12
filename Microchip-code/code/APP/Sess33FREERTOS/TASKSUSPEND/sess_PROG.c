/*
 * sess_PROG.c
 *
 * Created: 6/12/2024 6:17:36 PM
 *  Author: ahmed
 

#include "Sess33FREERTOS/TASKSUSPEND/sess_INT.h"

TaskHandle_t xHandle1;
TaskHandle_t xHandle2;

void task1(void * pvParameters){
	while (1)
	{
		DIO_togglePinValue(DIO_PINC2);
		vTaskDelay(500/portTICK_PERIOD_MS);
	}
}

void task2(void * pvParameters){
	while (1)
	{
		DIO_togglePinValue(DIO_PINC7);
		static u8 i=0;
		if(i==6)
		{
			vTaskResume(xHandle1);
		}
		i++;
		vTaskDelay(500/portTICK_PERIOD_MS);
	}
}



int source_code()
{	
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINC7,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINA3,DIO_OUTPUT);
	
	xTaskCreate(
		task1,       * Function that implements the task. *
		"NAME",          * Text name for the task. *
		100,      * Stack size in words, not bytes. *
		NULL,    * Parameter passed into the task. *
		1, * Priority at which the task is created. *
		&xHandle1 );  * Used to pass out the created task's handle. *
		
	xTaskCreate(task2,NULL,100,NULL,1,&xHandle2);
	
	vTaskSuspend(xHandle1);	
	
	vTaskStartScheduler();
	//It never gets to this part.
	
	while (1)
	{
		
	}
	return 0;
}*/ 