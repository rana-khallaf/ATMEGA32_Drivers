	/*
	 * SW_program.c
	 *
	 *  Created on: Oct 12, 2023
	 *      Author: hp
	 */

	#include"STD_TYPES.h"
	#include"BIT_MATH.h"
    #include"DIO_interface.h"

	#include"SW_config.h"
	#include"SW_interface.h"
	#include"SW_private.h"


	void SW_voidInit(SW_Type SW_Config)
	{

	DIO_voidSetPinDirection(SW_Config.port,SW_Config.pin,PIN_DIR_INPUT);

	if(SW_Config.state==SW_INT_PULL_UP)
	{
		DIO_voidSetPinValue(SW_Config.port,SW_Config.pin,PIN_VAL_HIGH);
		}


	}


	u8 SW_u8GetPressed(SW_Type SW_Config)
	{
		u8 LOC_u8PinValue=SW_NOT_PRESSED;
		u8 LOC_u8TheResult=SW_NOT_PRESSED;

	if((SW_Config.state==SW_INT_PULL_UP)||(SW_Config.state==SW_EXT_PULL_UP))
	{
		 LOC_u8PinValue=DIO_voidGetPinValue(SW_Config.port,SW_Config.pin);

		if(LOC_u8PinValue==PIN_VAL_HIGH)
		{
			LOC_u8TheResult=SW_NOT_PRESSED;

		}
		else if(LOC_u8PinValue==PIN_VAL_LOW)
		{
			LOC_u8TheResult=SW_PRESSED;


		}


	}



	else if(SW_Config.state==SW_EXT_PULL_DOWN)
	{
		 LOC_u8PinValue=DIO_voidGetPinValue(SW_Config.port,SW_Config.pin);

		if(LOC_u8PinValue==PIN_VAL_HIGH)
		{
			LOC_u8TheResult=SW_PRESSED;

		}
		else if(LOC_u8PinValue==PIN_VAL_LOW)
		{
			LOC_u8TheResult=SW_NOT_PRESSED;


		}


	}

	 return LOC_u8TheResult;


		}
