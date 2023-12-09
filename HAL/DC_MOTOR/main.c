/*
 * main.c
 *
 *  Created on: Nov 30, 2023
 *      Author: hp
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include <util/delay.h>


void main(void)
{

	/*

// dc motor in one direction

DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN0,PIN_DIR_OUTPUT);

while(1)

{
	DIO_voidSetPinValue(DIO_PORTA,DIO_PIN0,PIN_VAL_HIGH);


}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN0,PIN_DIR_OUTPUT);
	DIO_voidSetPinDirection(DIO_PORTB,DIO_PIN0,PIN_DIR_INPUT);

	DIO_voidSetPinValue(DIO_PORTB,DIO_PIN0,PIN_VAL_HIGH);

	u8 read;

	while(1)

	{
		read=DIO_voidGetPinValue(DIO_PORTB,DIO_PIN0);
		if(read==0)
		{

		DIO_voidSetPinValue(DIO_PORTA,DIO_PIN0,PIN_VAL_HIGH);
		_delay_ms(500);

		DIO_voidSetPinValue(DIO_PORTA,DIO_PIN0,PIN_VAL_LOW);
				_delay_ms(500);


		}



	}

*/



	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN0,PIN_DIR_OUTPUT);
	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN1,PIN_DIR_OUTPUT);

	while(1)
	{

		DIO_voidSetPinValue(DIO_PORTA,DIO_PIN0,PIN_VAL_HIGH);
		DIO_voidSetPinValue(DIO_PORTA,DIO_PIN1,PIN_VAL_LOW);

		_delay_ms(100);

         DIO_voidSetPinValue(DIO_PORTA,DIO_PIN0,PIN_VAL_LOW);
		DIO_voidSetPinValue(DIO_PORTA,DIO_PIN1,PIN_VAL_HIGH);









	}





}
