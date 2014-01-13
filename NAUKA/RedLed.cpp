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
	MpinNumber = pinNumber;
	MportLetter = portLetter;
	//inicjacja pinu na wyjœcie
	switch (MportLetter)
	{
		case 'C':
			if(MpinNumber = 1)
			{
				DDRC = 0x1;
			}
			if(MpinNumber = 2)
			{
				DDRC = 0x2;
			}
			if(MpinNumber = 3)
			{
				DDRC = 0x4;
			}
			if(MpinNumber = 4)
			{
				DDRC = 0x8;
			}
			if(MpinNumber = 5)
			{
				DDRC = 0x10;
			}
			if(MpinNumber = 6)
			{
				DDRC = 0x40;
			}
			if(MpinNumber = 7)
			{
				DDRC = 0x80;
			}
		break;


	
		case 'c':
			if(MpinNumber = 1)
			{
				DDRC = 0x1;
			}
			if(MpinNumber = 2)
			{
				DDRC = 0x2;
			}
			if(MpinNumber = 3)
			{
				DDRC = 0x4;
			}
			if(MpinNumber = 4)
			{
				DDRC = 0x8;
			}
			if(MpinNumber = 5)
			{
				DDRC = 0x10;
			}
			if(MpinNumber = 6)
			{
				DDRC = 0x40;
			}
			if(MpinNumber = 7)
			{
				DDRC = 0x80;
			}	
		break;


	}
}
void RedLed::lightLed()
{
		switch (MportLetter)
		{
			case 'C':
			if(MpinNumber = 1)
			{
				DDRC = 0x1;
			}
			if(MpinNumber = 2)
			{
				DDRC = 0x2;
			}
			if(MpinNumber = 3)
			{
				DDRC = 0x4;
			}
			if(MpinNumber = 4)
			{
				DDRC = 0x8;
			}
			if(MpinNumber = 5)
			{
				DDRC = 0x10;
			}
			if(MpinNumber = 6)
			{
				PORTC = 0x40;
			}
			if(MpinNumber = 7)
			{
				DDRC = 0x40;
			}
			break;
			case 'c':
			if(MpinNumber = 1)
			{
				DDRC = 0x1;
			}
			if(MpinNumber = 2)
			{
				DDRC = 0x2;
			}
			if(MpinNumber = 3)
			{
				DDRC = 0x4;
			}
			if(MpinNumber = 4)
			{
				DDRC = 0x8;
			}
			if(MpinNumber = 5)
			{
				DDRC = 0x10;
			}
			if(MpinNumber = 6)
			{
				PORTC = 0x40;
			}
			if(MpinNumber = 7)
			{
				DDRC = 0x80;
			}
			break;
		}
	}
// default destructor
RedLed::~RedLed()
{
} //~RedLed
