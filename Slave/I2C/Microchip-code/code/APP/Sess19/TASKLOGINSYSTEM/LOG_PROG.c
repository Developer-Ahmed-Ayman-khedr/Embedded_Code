/*
 * LOG_PROG.c
 *
 * Created: 4/22/2024 7:39:32 PM
 *  Author: ahmed
 

#include "Sess19/TASKLOGINSYSTEM/LOG_INT.h"

int source_code()
{
	KPD_init();
	LCD_init();
	
	u8 key, pass[4]={'1','2','3','4'}, pass_to_check[4], i = 0, k = 0, flage = 0, counter=0;
	while (1)
	{
		key = KPD_read();
		
		if (key!=KPD_UNPRESSED && key!='c' && flage!=3)
		{
			LCD_sendData(key);
			pass_to_check[i]=key;
			i++;		
			while(KPD_read()!=KPD_UNPRESSED);
		}
		
		//Check pass
		if (key=='c' && key!=KPD_UNPRESSED && flage!=3)
		{
			LCD_clearDis();
			if (counter==3)
			{
				LCD_sendStr("Block.");
				flage = 3;
			}
			
			if (i==4)
			{
				for (k=0; k<3; k++)
				{
					if (pass_to_check[k]==pass[k])
					{
						flage = 1;
					}
					else
					{
						flage = 0;
						break;
					}
				}
				if (flage==1)
				{
					LCD_sendStr("Welcome");
					i=0;
					flage = 0;
				}
				else if (flage==0)
				{
					LCD_sendStr("Wrong password.");
					i=0;
					flage = 0;
					counter++;
				}
			}
			while (KPD_read()=='c');
		}
	}
	return 0;
}
*/ 