/*
 * main.c


 *
 *  Created on: Oct 6, 2023
 *      Author: hp
 */


/* project 1
 * 3leds toggle at different delays
 * the first led  light up 1 sec and goes off 1sec
 * the sec led  light up 2 sec and goes off 2sec an
 * the third led  light up 3 sec and goes off 3sec*/

#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"DIO_interface.h"
#include"LED_interface.h"
#include <util/delay.h>

int main (void)
{

	LED_TYPE LED1={DIO_PORTA,DIO_PIN0,ACTIVE_HIGH};
	LED_TYPE LED2={DIO_PORTA,DIO_PIN1,ACTIVE_HIGH};
	LED_TYPE LED3={DIO_PORTA,DIO_PIN2,ACTIVE_HIGH};

	LED_voidInit(LED1);
	LED_voidInit(LED2);
	LED_voidInit(LED3);

  s8 counter =1;
	while(1)
	{


		if(counter%1==0)
		{
			LED_voidLedToggle(LED1);
		}



		if(counter%2==0)
				{
					LED_voidLedToggle(LED2);
				}


		if(counter%3==0)
				{
					LED_voidLedToggle(LED3);
				}
		counter++;

		_delay_ms(1000);





	}







return 0;
}


