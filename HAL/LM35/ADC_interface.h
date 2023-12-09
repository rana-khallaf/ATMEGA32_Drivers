/*
 * ADC_interface.h
 *
 *  Created on: Oct 18, 2023
 *      Author: hp
 */

#ifndef MINE_MCAL_ADC_ADC_INTERFACE_H_
#define MINE_MCAL_ADC_ADC_INTERFACE_H_

#define ADC_CHANNEL0 0
#define ADC_CHANNEL1 1
#define ADC_CHANNEL2 2
#define ADC_CHANNEL3 3
#define ADC_CHANNEL4 4
#define ADC_CHANNEL5 5
#define ADC_CHANNEL6 6
#define ADC_CHANNEL7 7




#define RIGHT_ADJUSTMENT  0
#define LEFT_ADJUSTMENT   1


#define AREF              0
#define AVCC              1
#define INTERNAL_2_56     3


#define ADC_SINGLE_CONVERSION  0
#define ADC_FREE_RUNNING       1
#define ADC_ANALOG_COMPARATOR  2
#define ADC_EXTI0              3
#define ADC_TIM0_CTC           4
#define ADC_TIM0_OVF           5
#define ADC_TIM1_CTC_CHANNEL_B  6
#define ADC_TIM1_OVF            7
#define ADC_TIM1_ICU            8





#define ADC_DISABLE   0
#define ADC_ENABLE    1



#define INT_DISABLE   0
#define INT_ENABLE    1





#define ADC_PRE_2   0
#define ADC_PRE_4   2
#define ADC_PRE_8   3
#define ADC_PRE_16  4
#define ADC_PRE_32  5
#define ADC_PRE_64  6
#define ADC_PRE_128 7











void ADC_voidIint(void);

u8 ADC_u8GetResult(u8 Copy_u8channel,u8* Copy_u16Result);

void ADC_voidEnable(void);
void ADC_voidDisable(void);

void ADC_voidInterruptEnable(void);
void ADC_voidInterruptDisable(void);

void ADC_voidSetPrescaller(u8 Copy_u8Prescaller );




#endif
