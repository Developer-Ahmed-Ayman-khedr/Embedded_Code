/*
 * TASK_PROG.c
 *
 * Created: 4/29/2024 9:55:12 PM
 *  Author: ahmed
 

#include "Sess21/TASK/TASK_INT.h"

int source_code()
{
	LCD_init();
	
	ADC_init();
	DIO_setPinDir(DIO_PINC1,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINC2,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINC3,DIO_OUTPUT);
	DIO_setPinDir(DIO_PINC4,DIO_OUTPUT);
	
	u16 digital;
	f32 analog;
	u32 temp,i;
	while (1)
	{
		digital = ADC_read(ADC_CH1);
		analog = ADC_convertAnalog(digital);
		temp = analog*100;
		LCD_clearDis();
		if (temp>=0 && temp<=25)
		{
			DIO_setPinValue(DIO_PINC1,DIO_HIGH);
		}
		else if (temp>25 && temp<=30)
		{
			DIO_setPinValue(DIO_PINC1,DIO_HIGH);
			DIO_setPinValue(DIO_PINC2,DIO_HIGH);
		}
		else if (temp>30 && temp<=35)
		{
			DIO_setPinValue(DIO_PINC1,DIO_HIGH);
			DIO_setPinValue(DIO_PINC2,DIO_HIGH);
			DIO_setPinValue(DIO_PINC3,DIO_HIGH);
		}
		else if (temp>35 && temp<=40)
		{
			DIO_setPinValue(DIO_PINC1,DIO_HIGH);
			DIO_setPinValue(DIO_PINC2,DIO_HIGH);
			DIO_setPinValue(DIO_PINC3,DIO_HIGH);
			DIO_setPinValue(DIO_PINC4,DIO_HIGH);
		}
		
		LCD_sendNum(temp);
		_delay_ms(1000);
		
		
		for (i=1; i<=temp; i++)
		{
			LCD_sendData('^');
		}
		_delay_ms(1000);
		
	}
	return 0;
}
*/ 