/*
 * main.c
 *
 *  Created on: Nov 18, 2023
 *      Author: hp
 */
#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"DIO_interface.h"
#include"ADC_interface.h"

// controlling a led with potentiometer


void main(void)
{

	DIO_voidSetPortDirection(DIO_PORTC,PORT_DIR_OUTPUT);

	DIO_voidSetPinDirection(DIO_PORTA,DIO_PIN0,PIN_DIR_INPUT);

	u8 reading;

	ADC_voidIint();

	while(1)
	{
		ADC_u8GetResult (DIO_PIN0,&reading);

		DIO_voidSetPortValue(DIO_PORTC,reading);





	}








}


