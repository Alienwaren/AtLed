/*
 * timer.cpp
 *
 * Created: 2014-01-22 18:12:37
 *  Author: overkiller
 */ 

/*
Timer Resolution = (1 / Input Frequency)
Timer Resolution = (1 / 100)
Timer Resolution = .01 seconds
=============================================================================
Target Timer Count = (1 / Target Frequency) / (1 / Timer Clock Frequency) - 1
= (1 / 20) / (1 / 1000000) - 1
= .05 / 0.000001 - 1
= 50000 - 1
= 49999
=============================================================================
x = (1/0.2) / (1/1000000) - 1 = 5  / 0.000001 - 1 = 49999999 impuls�w
=============================================================================
Timer Resolution = (1 / (Input Frequency / Prescale))
= (Prescale / Input Frequency)
=============================================================================
Prescaler Value | Resolution @ 1MHz
1 |  1uS - 0,000001s
8 |  8uS - 0,000008s
64 | 64uS - 0,000064s
256 | 256uS - 0,000256s
1024 | 1024uS - 0,001024s = 0,001s = 1ms
============================================================================
Z prekalerem
Target Timer Count = (1 / Target Frequency) / (Prescale / Input Frequency) - 1 
x = 1 / (1024/1) - 1
x = 1023


x = (1/ 0.2) / (256 / 1000000) - 1 =  5 / 0,000256 - 1
x = 19530

x1 = 19530 / 254 = 76 razy
*/

#include <avr/io.h>
#include <avr/interrupt.h>
int main (void)
{
	DDRC |= (1 << 0); // Set LED as output
	DDRB = 0x0;
	TCCR0 |= (1<<CS02) | (1<<CS00); // Set up timer
	int iloscPrzerwan = 0;
	for (;;)
	{
			// Check timer value in if statement, true when count matches 1/20 of a second
			if (TCNT0 >= 224)
			{
				TCNT0 = 0; // Reset timer value
				iloscPrzerwan++;
			}
			if(iloscPrzerwan == 76)
			{
				PORTC ^= (1<<0);	
			}else
			{
				PORTC ^= (1>>0);	
			}
		}
	}
