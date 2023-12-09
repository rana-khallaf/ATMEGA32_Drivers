/*
 * LM35_program.c
 *
 *  Created on: Nov 1, 2023
 *      Author: hp
 */

#include"BIT_MATH.h"
#include "STD_TYPES.h"
#include "ADC_interface.h"
#include "LM35_interface.h"









u8 LM35_voidGetTemp(LM35_CONFIG *LM35,u8 * Copy_TempValue)
{
   u8 Local_u8ErrorState=OK;

   u16 ADC_VoltageRefrence=(LM35->Copy_u8ADCVoltageRefrence)*1000;

   u8 Local_u16ADCResult;

   ADC_u8GetResult(LM35->Copy_u8LM35Channel,&Local_u16ADCResult);


   u16 Local_u16AnalogValue=((u32)Local_u16ADCResult*(u32)ADC_VoltageRefrence)/256UL;



   *Copy_TempValue=Local_u16AnalogValue/10;




  return Local_u8ErrorState;


	}
