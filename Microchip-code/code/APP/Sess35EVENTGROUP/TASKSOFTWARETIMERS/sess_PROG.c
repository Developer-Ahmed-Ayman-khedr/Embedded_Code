/*
 * sess_PROG.c
 *
 * Created: 6/26/2024 6:17:36 PM
 *  Author: ahmed
 */ 

#include "Sess35EVENTGROUP/TASKSOFTWARETIMERS/sess_INT.h"

TaskHandle_t xHandle1;

TimerHandle_t TIMER;

void TASKTOOGLELED(void *pvParameters){
	while (1)
	{	
		DIO_togglePinValue(DIO_PINC2);
		vTaskDelay(200/portTICK_PERIOD_MS);
	}
}

 void vTimerCallback(){
	DIO_togglePinValue(DIO_PINC7);
}

int source_code()
{	
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	
	DIO_setPinDir(DIO_PINC7,DIO_OUTPUT);
	
	xTaskCreate(TASKTOOGLELED, NULL, 200, NULL, 2, &xHandle1);
	
	TIMER = xTimerCreate( NULL, 500, pdTRUE, 1,  vTimerCallback);
	
	xTimerStart(TIMER, 0 );
	
	vTaskStartScheduler();
	//It never gets to this part.
	
	while (1)
	{
		
	}
	return 0;
}