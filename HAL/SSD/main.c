/*
 * main.c
 *
 *  Created on: Oct 7, 2023
 *      Author: hp
 */


/* show number 9 1 sec and hide it 1 sec */


#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"DIO_interface.h"
#include "SSD_interface.h"
#include "util/delay.h"

int main(void)
{
	SSD_TYPE SSD1 ={SSD_COMMON_ANODE,DIO_PORTA,DIO_PORTB,DIO_PIN0};

	SSD_voidInitalDataPort(SSD1);

	while(1)
	{
		/*
		SSD_voidSendNumber(SSD1,9);
		SSD_voidEnable(SSD1);
		_delay_ms(1000);
		SSD_voidDisable(SSD1);
		_delay_ms(1000);

*/
		for(u8 i=0;i<10;i++)
		{
			SSD_voidSendNumber(SSD1,i);
			SSD_voidEnable(SSD1);
			_delay_ms(500);




		}


	}




	return 0;

}
