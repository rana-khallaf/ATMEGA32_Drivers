/*
 * DCMOTOR_program.c
 *
 *  Created on: Oct 14, 2023
 *      Author: hp
 */

#include"STD_TYPES.h"
#include "BIT_MATH.h"
#include"DIO_interface.h"
#include"DCMOTOR_interface.h"


// what about the direction of pins it should be output pins i will do it

void DCMOTOR_u8Control(DCMOTOR_CONFIFG Copy_structDcMotor,u8 Copy_u8State)
{
	DIO_voidSetPinDirection(Copy_structDcMotor.Copy_u8DcMotorPort,Copy_structDcMotor.Copy_u8DcMotorPinA,PIN_DIR_OUTPUT);
	DIO_voidSetPinDirection(Copy_structDcMotor.Copy_u8DcMotorPort,Copy_structDcMotor.Copy_u8DcMotorPinB,PIN_DIR_OUTPUT);



	switch(Copy_u8State)
	{
	case DCMOTOR_CW :
		DIO_voidSetPinValue(Copy_structDcMotor.Copy_u8DcMotorPort,Copy_structDcMotor.Copy_u8DcMotorPinA,PIN_VAL_HIGH);
		DIO_voidSetPinValue(Copy_structDcMotor.Copy_u8DcMotorPort,Copy_structDcMotor.Copy_u8DcMotorPinB,PIN_VAL_LOW);
		break;

	case DCMOTOR_CCW :
			DIO_voidSetPinValue(Copy_structDcMotor.Copy_u8DcMotorPort,Copy_structDcMotor.Copy_u8DcMotorPinA,PIN_VAL_LOW);
			DIO_voidSetPinValue(Copy_structDcMotor.Copy_u8DcMotorPort,Copy_structDcMotor.Copy_u8DcMotorPinB,PIN_VAL_HIGH);
			break;

	case DCMOTOR_STOP :
				DIO_voidSetPinValue(Copy_structDcMotor.Copy_u8DcMotorPort,Copy_structDcMotor.Copy_u8DcMotorPinA,PIN_VAL_LOW);
				DIO_voidSetPinValue(Copy_structDcMotor.Copy_u8DcMotorPort,Copy_structDcMotor.Copy_u8DcMotorPinB,PIN_VAL_LOW);
				break;



	}



	}
