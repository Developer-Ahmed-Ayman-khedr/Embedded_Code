/*
 * ULTRA_PROG.c
 *
 * Created: 5/15/2024 10:00:00 PM
 *  Author: ahmed
 */ 

#include "Sess25WDT/TaskULTRASONIC/ULTRA_INT.h"

//f32 Tick = (64.0/16000000);
f32 Ttick = 0.004; //ms
u32 dis = 0;

void ultrasonicfunc(){
	static u8 edge = 0;
	//rising
	if (edge==0)
	{
		TIMER1_setPreload(0);
		TIMER1_InitIcu(TIMER1_ICU_FALLING,2);//set prescaller 64
		edge=1;
	} 
	//falling
	else if (edge==1)
	{
		u16 numTicks = TIMER1_getICR();
		f32 Time = numTicks * Ttick;
		dis = 17 * Time;
		TIMER1_InitIcu(TIMER1_ICU_RISING,2);//set prescaller 64
		edge = 0;
	}
}

int source_code()
{
	
	GI_enable();
	
	TIMER1_InitIcu(TIMER1_ICU_RISING,2);//set prescaller 64
	
	TIMER1_setcallbackIcu(ultrasonicfunc);
	//trigger
	DIO_setPinDir(DIO_PIND1,DIO_OUTPUT);
	
	//Echo
	DIO_setPinDir(DIO_PIND6,DIO_INPUT);
	
	LCD_init();
	
	while (1)
	{
		DIO_setPinValue(DIO_PIND1,DIO_HIGH);
		_delay_us(10);
		DIO_setPinValue(DIO_PIND1,DIO_LOW);
		LCD_clearDis();
		LCD_sendStr("d = ");
		LCD_sendNum(dis);
		LCD_sendStr(" cm");
		_delay_ms(1000);
	}
	
	
	return 0;
}