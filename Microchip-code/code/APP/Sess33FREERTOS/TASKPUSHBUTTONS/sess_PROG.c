/*
 * sess_PROG.c
 *
 * Created: 6/12/2024 6:17:36 PM
 *  Author: ahmed
 

#include "Sess33FREERTOS/TASKPUSHBUTTONS/sess_INT.h"

TaskHandle_t xHandle1;
TaskHandle_t xHandle2;
TaskHandle_t xHandle3;
TaskHandle_t xHandle4;

s8 LEDNUM = 0;

void initdio(void *pvParameters){
	while (1)
	{
		DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
		DIO_setPinDir(DIO_PINC7,DIO_OUTPUT);
		DIO_setPinDir(DIO_PINA3,DIO_OUTPUT);
		
		DIO_setPinDir(DIO_PIND2,DIO_INPUT);
		DIO_setPinDir(DIO_PIND3,DIO_INPUT);
		
		vTaskSuspend(NULL);
		
		vTaskDelay(500/portTICK_PERIOD_MS);
	}
}

void increaseButton(void *pvParameters){
	vTaskSuspend(xHandle1);
	while (1)
	{
		u8 state = DIO_readPinValue(DIO_PIND2);
		if (state==DIO_HIGH)
		{
			LEDNUM++;
			if (LEDNUM==4)
			{
				LEDNUM = 3;
			}
			while(DIO_readPinValue(DIO_PIND2)==DIO_HIGH);
		}
		vTaskDelay(250/portTICK_PERIOD_MS);
	}
}

void decreaseButton(void *pvParameters){
	while (1)
	{
		u8 state = DIO_readPinValue(DIO_PIND3);
		if (state==DIO_HIGH)
		{
			LEDNUM--;
			if (LEDNUM==-1)
			{
				LEDNUM = 0;
			}
			
			while(DIO_readPinValue(DIO_PIND3)==DIO_HIGH);
		}
		vTaskDelay(250/portTICK_PERIOD_MS);
	}
}

void ledsOnOff(void *pvParameters){
	while (1)
	{
		if (LEDNUM==0)
		{
			DIO_setPinValue(DIO_PINC2,DIO_LOW);
			DIO_setPinValue(DIO_PINC7,DIO_LOW);
			DIO_setPinValue(DIO_PINA3,DIO_LOW);
		}
		else if (LEDNUM==1)
		{
			DIO_setPinValue(DIO_PINC2,DIO_HIGH);
			DIO_setPinValue(DIO_PINC7,DIO_LOW);
			DIO_setPinValue(DIO_PINA3,DIO_LOW);
		} 
		else if(LEDNUM==2)
		{
			DIO_setPinValue(DIO_PINC2,DIO_LOW);
			DIO_setPinValue(DIO_PINC7,DIO_HIGH);
			DIO_setPinValue(DIO_PINA3,DIO_LOW);
		}
		else if(LEDNUM==3)
		{
			DIO_setPinValue(DIO_PINC2,DIO_LOW);
			DIO_setPinValue(DIO_PINC7,DIO_LOW);
			DIO_setPinValue(DIO_PINA3,DIO_HIGH);
		}
		vTaskDelay(250/portTICK_PERIOD_MS);
	}
}

int source_code()
{
	xTaskCreate(initdio, NULL, 100, NULL, 3, &xHandle1);
		
	xTaskCreate(increaseButton, NULL, 100, NULL, 1, &xHandle2);
	
	xTaskCreate(decreaseButton, NULL, 100, NULL, 1, &xHandle3);
	
	xTaskCreate(ledsOnOff, NULL, 100, NULL, 1, &xHandle4);
	
	vTaskStartScheduler();
	//It never gets to this part.
	
	while (1)
	{
		
	}
	return 0;
}

*/ 