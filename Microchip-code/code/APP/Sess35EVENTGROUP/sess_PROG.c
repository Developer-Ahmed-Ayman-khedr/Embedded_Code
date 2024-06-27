/*
 * sess_PROG.c
 *
 * Created: 6/26/2024 6:17:36 PM
 *  Author: ahmed
  

#include "Sess35EVENTGROUP/sess_INT.h"

TaskHandle_t xHandle1;
TaskHandle_t xHandle2;

EventGroupHandle_t MyEventGroup;

void Task1(void *pvParameters){
	while (1)
	{
			u8 state = DIO_readPinValue(DIO_PIND2);
			if (state==DIO_HIGH)
			{
				xEventGroupSetBits(MyEventGroup, BIT_0);
				while (DIO_readPinValue(DIO_PIND2)==DIO_HIGH);
			}
		vTaskDelay(500/portTICK_PERIOD_MS);
	}
}

void Task2(void *pvParameters){
	while (1)
	{
		EventBits_t uxBits;
		uxBits = xEventGroupWaitBits(
		MyEventGroup,   * The event group being tested. *
		BIT_0, * The bits within the event group to wait for. *
		pdTRUE,        * BIT_0 & BIT_4 should be cleared before returning. *
		pdFALSE,       * Don't wait for both bits, either bit will do. *
		0 );* Wait a maximum of 100ms for either bit to be set. *
		
		if( ( uxBits & (BIT_0) ) != 0 )
		{
			* xEventGroupWaitBits() returned because just BIT_0 was set. *
			DIO_togglePinValue(DIO_PINC2);
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
	
	MyEventGroup = xEventGroupCreate();
	
	vTaskStartScheduler();
	//It never gets to this part.
	
	while (1)
	{
		
	}
	return 0;
}

*/