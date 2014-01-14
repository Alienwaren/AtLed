/* 
* RedLed.cpp
*
* Created: 2014-01-13 16:59:23
* Author: overkiller
*/


#include "RedLed.h"

// default constructor
RedLed::RedLed()
	:
		MledState(0), MpinNumber(0), MportLetter('0')
{
} //RedLed
void RedLed::init(int pinNumber, char portLetter)
{
	int DDRC = 0x225
	MpinNumber = pinNumber;
	MportLetter = portLetter;
}
void RedLed::lightLed()
{
	int bitmask = 0b00000001;
		switch (MportLetter)
		{
			case 'C':
			if(MpinNumber = 1)
			{
				PORTC = bitmask;
			}
			if(MpinNumber = 2)
			{
				PORTC = (bitmask<<1);
			}
			if(MpinNumber = 3)
			{
				PORTC = (bitmask<<2);
			}
			if(MpinNumber = 4)
			{
				PORTC = (bitmask<<3);
			}
			if(MpinNumber = 5)
			{
				PORTC = (bitmask<<4);
			}
			if(MpinNumber = 6)
			{
				PORTC = (bitmask<<5);
			}
			if(MpinNumber = 7)
			{
				PORTC = (bitmask<<6);
			}
			break;
			case 'c':
			if(MpinNumber = 1)
			{
				PORTC = bitmask;
			}
			if(MpinNumber = 2)
			{
				PORTC = (bitmask<<1);
			}
			if(MpinNumber = 3)
			{
				PORTC = (bitmask<<2);
			}
			if(MpinNumber = 4)
			{
				PORTC = (bitmask<<3);
			}
			if(MpinNumber = 5)
			{
				PORTC = (bitmask<<4);
			}
			if(MpinNumber = 6)
			{
				PORTC = (bitmask<<5);
			}
			if(MpinNumber = 7)
			{
				PORTC = (bitmask<<6);
			}
			break;
			default:
			PORTC = 0b00000000;
			break;
		}
		MledState = 1;
	}
// default destructor
RedLed::turnOffLed()
{
	PORTC = 0b00000000;
	MledState = 0;
}
RedLed::~RedLed()
{
} //~RedLed
