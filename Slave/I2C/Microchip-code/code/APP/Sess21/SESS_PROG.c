/*
 * SESS_PROG.c
 *
 * Created: 4/29/2024 8:07:55 PM
 *  Author: ahmed
 

#include "Sess21/SESS_INT.h"

int source_code()
{
	LCD_init();
	ADC_init();
	
	u16 digital;
	f32 analog;
	
	while (1)
	{
		digital = ADC_read(ADC_CH1);
		analog = ADC_convertAnalog(digital);
		LCD_clearDis();
		LCD_sendFloatNum(analog*100);
		LCD_sendData('C');
		_delay_ms(1000);
	}
	return 0;
}
*/ 