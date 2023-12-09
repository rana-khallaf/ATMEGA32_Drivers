/*

 * main.c

 *
 *  Created on: Nov 29, 2023
 *      Author: hp
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "CLCD_interface.h"




void main(void)
{

CLCD_voidInit();
/*
CLCD_voidSendData('r');
CLCD_voidSendData('a');
CLCD_voidSendData('n');
CLCD_voidSendData('a');
CLCD_voidSendData(' ');

CLCD_voidSendString("khallaf");


*/

//CLCD_voidSendExtraChar(CLCD_ROW_1,CLCD_COL_3);



CLCD_voidSendExtraChar(CLCD_ROW_2,CLCD_COL_5,2,4);
}

