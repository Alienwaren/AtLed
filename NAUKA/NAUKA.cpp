/*
 * NAUKA.cpp
 *
 * Created: 2013-12-22 14:17:25
 *  Author: overkiller/Damian Kaczyñski
 * Licence: GNU GPLv3
 * FOR USE WITH ATMEGA 16(L)
 *
 *
 Poprawiæ metody w RedLed
 */

#include "LED.h"

int main(void)
{
	int dataC = 0b11111111;
	int bitmask = 0b00000001;
	DDRC = dataC;
    while(1)
    {
		
	
		LED::blink(bitmask, 6, 'Y');
		
    }
}

