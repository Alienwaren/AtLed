/*
 * NAUKA.cpp
 *
 * Created: 2013-12-22 14:17:25
 *  Author: overkiller/Damian Kaczyñski
 * Licence: GNU GPLv3
 * 
 *
 *
 */

#include <avr/io.h>
#include <avr/interrupt.h>
#include "LED.h"
int init()
{
	int dataC = 0b11111111;
	int bitmask = 0b00000001;
	DDRC = dataC;
	return bitmask;
}

int main(void)
{
	
	int bitmaskMain = init();
	
    while(1)
    {
		//LED::blink(bitmask, 2, 'n');
		//_delay_ms(1000);
		LED::blinkNormal(bitmaskMain, 3, 'y');
		
    }

}

