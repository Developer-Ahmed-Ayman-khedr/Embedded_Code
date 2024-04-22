/*
 * CALC_PROG.c
 *
 * Created: 4/22/2024 10:09:42 PM
 *  Author: ahmed
 */ 

#include "Sess19/TASKCALC/CALC_INT.h"

int source_code()
{
	KPD_init();
	LCD_init();
	
	u8 key ,input[3], i=0;
	while (1)
	{
		key = KPD_read();
		
		if (key!=KPD_UNPRESSED && key!='=' && key!='c' )
		{
			LCD_sendData(key);
			input[i]=key;
			i++;
			while(KPD_read()!=KPD_UNPRESSED);
		}
		
		//CALC
		if (key=='=' && key!=KPD_UNPRESSED)
		{
			LCD_clearDis();
			switch(input[1]){
				case '+':
					LCD_sendNum((input[0]-48)+(input[2]-48));
					break;
				case '-':
					LCD_sendNum((input[0]-48)-(input[2]-48));
					break;
				case '*':
					LCD_sendNum((input[0]-48)*(input[2]-48));
					break;
				case '/':
					LCD_sendNum((input[0]-48)/(input[2]-48));
					break;
				default:
					LCD_sendStr("Wrong choice.");
					break;
			}
			i=0;
			while(KPD_read()=='=');
			}
		
		
		//clear
		if (key=='c' && key!=KPD_UNPRESSED)
		{
			LCD_clearDis();
			i=0;
			while(KPD_read()=='c');
		}
	}
	return 0;
}