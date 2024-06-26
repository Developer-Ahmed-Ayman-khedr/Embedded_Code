/*
 * sess_PROG.c
 *
 * Created: 6/26/2024 6:17:36 PM
 *  Author: ahmed
 

#include "Sess35EVENTGROUP/TASKQUEUE/sess_INT.h"

TaskHandle_t xHandle1;
TaskHandle_t xHandle2;

EventGroupHandle_t MyEventGroup;

QueueHandle_t MyQueue;

void Task1(void *pvParameters){
	u8 var;
	while (1)
	{
		var = 'b';
		xQueueSend(MyQueue,&var,0);
		vTaskDelay(500/portTICK_PERIOD_MS);
	}
}

void Task2(void *pvParameters){
	u8 var2;
	while (1)
	{
		if (xQueueReceive( MyQueue, &var2, 0) == pdPASS)
		{
			UART_sendData(var2);
		}
		vTaskDelay(500/portTICK_PERIOD_MS);
	}
}

int source_code()
{
	UART_init();
	DIO_setPinDir(DIO_PIND2,DIO_INPUT);
	
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	
	xTaskCreate(Task1, NULL, 100, NULL, 2, &xHandle1);
		
	xTaskCreate(Task2, NULL, 100, NULL, 1, &xHandle2);
	
	MyQueue = xQueueCreate( 10, sizeof( u8 ) );
	
	vTaskStartScheduler();
	//It never gets to this part.
	
	while (1)
	{
		
	}
	return 0;
}
*/ 