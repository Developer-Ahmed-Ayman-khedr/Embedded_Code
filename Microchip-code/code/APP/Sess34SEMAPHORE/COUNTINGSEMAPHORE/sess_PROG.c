/*
 * sess_PROG.c
 *
 * Created: 6/12/2024 6:17:36 PM
 *  Author: ahmed
 */ 

#include "Sess34SEMAPHORE/COUNTINGSEMAPHORE/sess_INT.h"

TaskHandle_t xHandle1;
TaskHandle_t xHandle2;

SemaphoreHandle_t A;

//BOOL flag = TRUE;

void Task1(void *pvParameters){
	while (1)
	{
			u8 state = DIO_readPinValue(DIO_PIND2);
			if (state==DIO_HIGH)
			{
				xSemaphoreGive(A);
				while(DIO_readPinValue(DIO_PIND2)==DIO_HIGH);
			}
		vTaskDelay(500/portTICK_PERIOD_MS);
	}
}

void Task2(void *pvParameters){
	while (1)
	{
		if( uxSemaphoreGetCount(A)==3 )
		{
			DIO_togglePinValue(DIO_PINC2);
			xSemaphoreTake(A,0);
			xSemaphoreTake(A,0);
			xSemaphoreTake(A,0);
		}
		vTaskDelay(500/portTICK_PERIOD_MS);
	}
}

int source_code()
{
	DIO_setPinDir(DIO_PIND2,DIO_INPUT);
	
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	
	xTaskCreate(Task1, NULL, 100, NULL, 2, &xHandle1);
		
	xTaskCreate(Task2, NULL, 100, NULL, 1, &xHandle2);
	
	A = xSemaphoreCreateCounting(3,0);
	
	vTaskStartScheduler();
	//It never gets to this part.
	
	while (1)
	{
		
	}
	return 0;
}