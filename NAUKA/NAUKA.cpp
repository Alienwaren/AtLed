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
#include <avr/io.h>
#include <util/delay.h>
#include "RedLed.h"
int main(void)
{
	
	RedLed redLed1;
	RedLed redLed2;
	redLed2.init(1, 'C');
	redLed1.init(6, 'C');
	int bitmask = 0b00000001;
    while(1)
    {
		/*
		PORTC = (bitmask<<1); //0b00000010;
		_delay_ms(1000);
		PORTC |= bitmask; //0b00000011;
		_delay_ms(1000);
		*
		*/
		redLed1.lightLed(); ///DZIA£A!
		redLed2.lightLed();
		_delay_ms(1000);
		redLed1.turnOff();
		redLed2.turnOff();
		_delay_ms(1000);
    }
}

