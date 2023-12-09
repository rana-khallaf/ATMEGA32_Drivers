/*
 * ADC_program.c
 *
 *  Created on: Oct 18, 2023
 *      Author: hp
 */
#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"ADC_interface.h"

#include"ADC_config.h"

#include"ADC_private.h"

/*Hint : Must include ADC_CONFIG before ADC_PRIVATE*/

static u8 ADC_u8State=IDLE;
void ADC_voidIint(void)
{

	//SELECTION OF VOLTAGE REFRENCE
#if  ADC_VREF==AREF
	CLR_BIT(ADMUX,ADMUX_REFS0);
	CLR_BIT(ADMUX,ADMUX_REFS1);
#elif ADC_VREF==AVCC
     SET_BIT(ADMUX,ADMUX_REFS0);
	 CLR_BIT(ADMUX,ADMUX_REFS1);
	 
#elif ADC_VREF==INTERNAL_2_56
     SET_BIT(ADMUX,ADMUX_REFS0);
	 SET_BIT(ADMUX,ADMUX_REFS1);
	 
#endif




    //SET LEFT OR RIGHT ADJUSTMENT

#if ADC_ADJUSTMENT==RIGHT_ADJUSTMENT
   CLR_BIT(ADMUX,ADMUX_ADLAR);

#elif ADC_ADJUSTMENT==LEFT_ADJUSTMENT
   SET_BIT(ADMUX,ADMUX_ADLAR);


#endif



   //SET PRESCALLER VALUE
    ADCSRA&=ADC_PERSCALLER_MASK;
    ADCSRA|=ADC_PRESCALLER;
	



	//ENABLE ADC PREPHRAL
	#if ADC_STATUS==ADC_DISABLE
	    CLR_BIT(ADCSRA,ADCSRA_ADEN);	
	
	#elif ADC_STATUS==ADC_ENABLE
	   SET_BIT(ADCSRA,ADCSRA_ADEN);
	   
	   
	#endif
	
	


	//ENABLE ADC INTERRUPT
	#if INT_STATUS==INT_DISABLE
	    CLR_BIT(ADCSRA,ADCSRA_ADIE);	
	
	#elif INT_STATUS==INT_ENABLE
	   SET_BIT(ADCSRA,ADCSRA_ADIE);
	   
	   
	#endif
	

   
	}




void ADC_voidEnable(void)
{
	 SET_BIT(ADCSRA,ADCSRA_ADEN);


}
void ADC_voidDisable(void)
{
	  CLR_BIT(ADCSRA,ADCSRA_ADEN);
	}


void ADC_voidInterruptEnable(void)
{
	SET_BIT(ADCSRA,ADCSRA_ADIE);
	}
void ADC_voidInterruptDisable(void)
{
	CLR_BIT(ADCSRA,ADCSRA_ADIE);
	}

void ADC_voidSetPrescaller(u8 Copy_u8Prescaller )
{
	if(Copy_u8Prescaller<8)
	  {
		ADCSRA&=ADC_PERSCALLER_MASK;

	    ADCSRA|=Copy_u8Prescaller;
	  }
}


u8 ADC_u8GetResult(u8 Copy_u8channel,u8* Copy_u16Result)
{
	u32 Local_u32TimeCounter=0;
    u8 Local_u8ErrorState=OK;
	if(Copy_u16Result!=NULL)
	{

		if(ADC_u8State==IDLE)
		{
			//ADC IS BUSY
			ADC_u8State=BUSY;

			//SET REQUIRED CHANNEL
			ADMUX&=ADC_CHANNEL_MASK;
			ADMUX|=Copy_u8channel;

			//START CONVERSION
			SET_BIT(ADCSRA,ADCSRA_ADSC);

			//WAITING UNTIL THE CONVERSION COMPLETE
			while(((GET_BIT(ADCSRA,ADCSRA_ADIF))==0)&&(Local_u32TimeCounter<ADC_TIMEOUT))
			{
				Local_u32TimeCounter++;
			}


			if(Local_u32TimeCounter==ADC_TIMEOUT)
			{
				Local_u8ErrorState=TIMEOUT_STATE;

			}
			else
			{

				//clear Int flag
				SET_BIT(ADCSRA,ADCSRA_ADIF);

				//RETURN CONVERSION RESULT

				if (ADC_ADJUSTMENT==RIGHT_ADJUSTMENT)
				{
					*Copy_u16Result=(ADCL|(ADCH<<8));
				}

				else if (ADC_ADJUSTMENT==LEFT_ADJUSTMENT)
				{
					*Copy_u16Result=ADCH;
				}



			}

         ADC_u8State=IDLE;

		}

		else
		{
			Local_u8ErrorState=BUSY_STATE;

		}



	}

	else
	{
		Local_u8ErrorState=NULL_POINTER;
	}

return Local_u8ErrorState;

}




