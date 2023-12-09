/*
 * ADC_private.h
 *
 *  Created on: Oct 19, 2023
 *      Author: hp
 */

#ifndef MINE_MCAL_ADC_ADC_PRIVATE_H_
#define MINE_MCAL_ADC_ADC_PRIVATE_H_

#define ADC_PERSCALLER_MASK   0b11111000
#define ADC_CHANNEL_MASK   0b11100000




#define ADMUX      *((volatile u8*)0x27)     //ADC Multiplexer Selection Register
#define ADMUX_ADLAR    5    //RIGHT OR LEFT ADJUSTMENT
#define ADMUX_REFS0    6    //THE OPTIONS OF VREF
#define ADMUX_REFS1    7    //THE OPTIONS OF VREF


#define ADCSRA      *((volatile u8*)0x26)  //ADC Control and Status Register A

#define ADCSRA_ADPS0    0    //OPTIONS OF PRESCALLER
#define ADCSRA_ADPS1    1    //OPTIONS OF PRESCALLER
#define ADCSRA_ADPS2    2    //OPTIONS OF PRESCALLER
#define ADCSRA_ADIE     3    //INTERRUPT ENABLE
#define ADCSRA_ADIF     4    //INTERRUPT FLAG
#define ADCSRA_ADATE    5    //AUTO TRIGGER  ENABLE
#define ADCSRA_ADSC     6    //START CONVERSION
#define ADCSRA_ADEN     7    //ADC ENABLE



#define ADCH       *((volatile u8*)0x25)   //ADC HIGH REG
#define ADCL       *((volatile u8*)0x24)   //ADC LOW REG
#define ADC_DATA_REG   *((volatile u16*)0x24)  //ADC LOW + HIGH REG










//NOT USEING IT CURENTLY

#define SFIOR        *((volatile u8*)0x50)   // ADC Auto Trigger Source
#define SFIOR_ADTS0    5
#define SFIOR_ADTS1    6
#define SFIOR_ADTS2    7




#endif /* MINE_MCAL_ADC_ADC_PRIVATE_H_ */
