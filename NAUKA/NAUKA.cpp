/*
 * NAUKA.cpp
 *
 * Created: 2013-12-22 14:17:25
 *  Author: overkiller/Damian Kaczyñski
 * Licence: GNU GPLv3
 * FOR USE WITH ATMEGA 16(L)
 */ 


#include <avr/io.h>
#include <util/delay.h>
#include "RedLed.h"
int main(void)
{
	
	RedLed redLed1;
	redLed1.init(6,'C');
    while(1)
    {
		redLed1.lightLed();
    }
}

