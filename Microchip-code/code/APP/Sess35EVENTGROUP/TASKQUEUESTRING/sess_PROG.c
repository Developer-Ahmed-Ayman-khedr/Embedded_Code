/*
 * sess_PROG.c
 *
 * Created: 6/26/2024 6:17:36 PM
 *  Author: ahmed
 

#include "Sess35EVENTGROUP/TASKQUEUESTRING/sess_INT.h"

TaskHandle_t xHandle1;
TaskHandle_t xHandle2;
TaskHandle_t xHandle3;

QueueHandle_t MyQueue;

void QueueAdd1(void *pvParameters){
	u8 var1[8] = "Ahmed";
	while (1)
	{
			xQueueSend(MyQueue,&var1,0);	
		vTaskDelay(500/portTICK_PERIOD_MS);
	}
}

void QueueAdd2(void *pvParameters){
	u8 var2[8] = "Ayman\n\r";
	while (1)
	{
			xQueueSend(MyQueue,&var2,0);
		vTaskDelay(500/portTICK_PERIOD_MS);
	}
}

void UARTSend(void *pvParameters){
	u8 var3[8];
	while (1)
	{
		while (xQueueReceive( MyQueue, &var3, 0) == pdPASS)
		{
			UART_sendStr(var3);
		}
		vTaskDelay(500/portTICK_PERIOD_MS);
	}
}

int source_code()
{
	UART_init();
	
	xTaskCreate(QueueAdd1, NULL, 100, NULL, 2, &xHandle1);
		
	xTaskCreate(QueueAdd2, NULL, 100, NULL, 1, &xHandle2);
	
	xTaskCreate(UARTSend, NULL, 100, NULL, 1, &xHandle3);
	
	MyQueue = xQueueCreate( 10, 8*sizeof( u8 ) );
	
	vTaskStartScheduler();
	//It never gets to this part.
	
	while (1)
	{
		
	}
	return 0;
}
*/ 