/*
 * sess_PROG.c
 *
 * Created: 6/12/2024 6:17:36 PM
 *  Author: ahmed
 

#include "Sess34SEMAPHORE/sess_INT.h"

TaskHandle_t xHandle1;
TaskHandle_t xHandle2;

SemaphoreHandle_t A;

//BOOL flag = TRUE;

void Task1(void *pvParameters){
	while (1)
	{
		//if (flag==TRUE)
		if( xSemaphoreTake( A, 0 ) == pdTRUE )
		{
			//flag = FALSE;
			//vTaskSuspend(xHandle2);
			UART_sendStr("HELLO, My name is Ahmed Ayman Khedr");
			//vTaskResume(xHandle2);
			//flag = TRUE;
			xSemaphoreGive( A );
		}
		vTaskDelay(500/portTICK_PERIOD_MS);
	}
}

void Task2(void *pvParameters){
	while (1)
	{
		//if (flag==TRUE)
		if( xSemaphoreTake( A, 0 ) == pdTRUE )
		{
			//flag = FALSE;
			//vTaskSuspend(xHandle1);
			UART_sendStr(" welcome to my program it is sending strings using UART protocol.    \r\n");
			//vTaskResume(xHandle1);
			//flag = TRUE;
			xSemaphoreGive( A );
		}
		vTaskDelay(500/portTICK_PERIOD_MS);
	}
}

int source_code()
{
	
	UART_init();
	
	xTaskCreate(Task1, NULL, 100, NULL, 2, &xHandle1);
		
	xTaskCreate(Task2, NULL, 100, NULL, 1, &xHandle2);
	A = xSemaphoreCreateBinary();
	xSemaphoreGive( A );
	vTaskStartScheduler();
	//It never gets to this part.
	
	while (1)
	{
		
	}
	return 0;
}
*/ 