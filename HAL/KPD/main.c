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
#include "KPD_interface.h"


void main(void)
{



DIO_voidSetPortDirection(DIO_PORTA,PORT_DIR_OUTPUT);




KPD_voidInit();


u8 read;


while(1)
{
	read=KPD_u8GetPressed();




//switching the leds and don't turn it off

	switch(read)
	    	{
	    	case 1:DIO_voidSetPinValue(DIO_PORTA,DIO_PIN0,PIN_VAL_HIGH);break;
	    	case 2:DIO_voidSetPinValue(DIO_PORTA,DIO_PIN1,PIN_VAL_HIGH);break;
	    	case 3:DIO_voidSetPinValue(DIO_PORTA,DIO_PIN2,PIN_VAL_HIGH);break;
	    	case 4:DIO_voidSetPinValue(DIO_PORTA,DIO_PIN3,PIN_VAL_HIGH);break;
	    	case 5:DIO_voidSetPinValue(DIO_PORTA,DIO_PIN4,PIN_VAL_HIGH);break;
	    	case 6:DIO_voidSetPinValue(DIO_PORTA,DIO_PIN5,PIN_VAL_HIGH);break;
	    	case 7:DIO_voidSetPinValue(DIO_PORTA,DIO_PIN6,PIN_VAL_HIGH);break;
	    	case 8:DIO_voidSetPinValue(DIO_PORTA,DIO_PIN7,PIN_VAL_HIGH);break;
	    	}




/*
  //switching the led and turn it off
	    	switch(read)
	    	    	{
	    	    	case 1 :DIO_voidSetPortValue(DIO_PORTA,0B00000001);break;
	    	    	case 2 :DIO_voidSetPortValue(DIO_PORTA,0B00000010);break;
	    	    	case 3 :DIO_voidSetPortValue(DIO_PORTA,0B00000100);break;
	    	    	case 4 :DIO_voidSetPortValue(DIO_PORTA,0B00001000);break;
	    	    	case 5 :DIO_voidSetPortValue(DIO_PORTA,0B00010000);break;
	    	    	case 6 :DIO_voidSetPortValue(DIO_PORTA,0B00100000);break;
	    	    	case 7 :DIO_voidSetPortValue(DIO_PORTA,0B01000000);break;
	    	    	case 8 :DIO_voidSetPortValue(DIO_PORTA,0B10000000);break;
	    	    	}

*/


}


}



