/*
 * NAUKA.cpp
 *
 * Created: 2013-12-22 14:17:25
 *  Author: overkiller/Damian Kaczyñski
 * Licence: GNU GPLv3
 * 
 *
 *
 Poprawiæ metody w RedLed
 */

#include <avr/io.h>
#include <avr/interrupt.h>
#include "LED.h"
int main(void)
{
	int dataC = 0b11111111;
	int bitmask = 0b00000001;
	DDRC = dataC;
	
    while(1)
    {
		//LED::blink(bitmask, 2, 'n');
		//_delay_ms(1000);
		LED::blinkNormal(bitmask, 2, 'y');
    }

}

