/*
 * pushButton LED.c
 *
 * Created: 04-Oct-17 11:02:33 AM
 * Author : Shone
 */ 

/**@file control_led.c
   @mainpage Control Two LED’s using a Push button switch
   @bug No bug found
   @author Prafull Varshney
   @brief  Here we are going learn how to control the working of two LED’s using a push button switch.
   @param No parameters are given
   @return No return is expected
   */
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB |= (1 << DDB2)|(1<<DDB3);
	DDRB &= ~(1 << DDB0);


	while (1)
	{
		
		if (!(PINB&(1<<PINB0)))
		{
		PORTB |= (1<<PINB2)|(1<<PINB3);
		}
		else
		{
		PORTB &= (~(1<<PINB2))&(~(1<<PINB3));
		}
	}
}