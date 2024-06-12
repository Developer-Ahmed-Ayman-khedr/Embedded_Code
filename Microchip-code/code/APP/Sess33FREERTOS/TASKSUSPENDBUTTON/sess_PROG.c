/*
 * sess_PROG.c
 *
 * Created: 6/12/2024 6:17:36 PM
 *  Author: ahmed
 */ 

#include "Sess33FREERTOS/TASKSUSPENDBUTTON/sess_INT.h"

TaskHandle_t xHandle1;
TaskHandle_t xHandle2;
TaskHandle_t xHandle3;

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
		vTaskDelay(500/portTICK_PERIOD_MS);
	}
}

void task3(void * pvParameters){
	BOOL flage = FALSE;
	while (1)
	{
		u8 state = DIO_readPinValue(DIO_PIND0);
		if (state==DIO_HIGH)
		{
			if (flage == FALSE)
			{
				vTaskSuspend(xHandle1);	
				flage = TRUE;
			}
			else
			{
				vTaskResume(xHandle1);
				flage = FALSE;
			}
			while(DIO_readPinValue(DIO_PIND0)==DIO_HIGH);
		}
		vTaskDelay(100/portTICK_PERIOD_MS);
	}
}

int source_code()
{	
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINC7,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINA3,DIO_OUTPUT);
	
	DIO_setPinDir(DIO_PIND0,DIO_INPUT);
	
	xTaskCreate(
		task1,       /* Function that implements the task. */
		"NAME",          /* Text name for the task. */
		100,      /* Stack size in words, not bytes. */
		NULL,    /* Parameter passed into the task. */
		1,/* Priority at which the task is created. */
		&xHandle1 ); /* Used to pass out the created task's handle. */
		
	xTaskCreate(task2,NULL,100,NULL,1,&xHandle2);
	
	xTaskCreate(task3,NULL,100,NULL,0,&xHandle3);
	
	vTaskStartScheduler();
	//It never gets to this part.
	
	while (1)
	{
		
	}
	return 0;
}