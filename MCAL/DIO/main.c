/*
 * main.c
 *
 *  Created on: Nov 29, 2023
 *      Author: hp
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include <util/delay.h>
#include "DIO_interface.h"


void main(void)
{
	//pull up but change the conection to conect 5v
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN0,PIN_DIR_INPUT);

	//internal pull up ( only one line)

	//DIO_voidConnectPullUp(DIO_PORTA,DIO_PIN0,PIN_VAL_HIGH);
	//DIO_voidSetPinValue(DIO_PORTA,DIO_PIN0,PIN_VAL_HIGH);


	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN1,PIN_DIR_OUTPUT);

	while(1)
	{
		if(DIO_voidGetPinValue(DIO_PORTA,DIO_PIN0)==PIN_VAL_LOW)
		{
      _delay_ms(150);

      if(DIO_voidGetPinValue(DIO_PORTA,DIO_PIN0)==PIN_VAL_LOW)
      		{
    	  DIO_voidSetPinValue(DIO_PORTA,DIO_PIN1,PIN_VAL_HIGH);

      		}
      else
      {
    	  DIO_voidSetPinValue(DIO_PORTA,DIO_PIN1,PIN_VAL_LOW);

      }

		}



	}



}
