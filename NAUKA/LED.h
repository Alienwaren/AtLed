/*
 * LED.h
 *
 * Created: 2014-01-14 16:59:18
 *  Author: overkiller
  Licence: GNU GPLv3
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include <avr/wdt.h>
#ifndef LED_H_
#define LED_H_
/*
*Method will blink the led with desired pattern. 
*Bitmask = starting value for led blinking
*howMuchBlink = amount of "blinks"
*willStop = will ever blinking stop?
*
*
*/
namespace LED
{
	
void blink(int bitMask, int howMuchBlink, char willStop)
{
	int actualBlink = 0;
		while(true)
		{
		PORTC = bitMask; //0b00000001;
		_delay_ms(1000);
		PORTC = (bitMask<<1); //0b00000010;
		_delay_ms(1000);
		actualBlink++;
		if(actualBlink == howMuchBlink)
		{
			if(willStop == 'Y' || willStop == 'y')
			{
				
				while (1)
				{
					PORTC = 0x0;
		
				}			
			}else if (willStop == 'n' || willStop == 'N')
			{
				continue;
				
			} 
			else
			{
				continue;
				
			}

		
		
		}	
	    
	}
}

/*
*Method will blink the both leds.
*Bitmask = starting value for led blinking
*howMuchBlink = amount of "blinks"
*willStop = will ever blinking stop?
*
*
*/

void blinkNormal(int bitMask, int howMuchBlink, char willStop)
{
	int actualBlink = 0;
	while(true)
	{
		PORTC = bitMask + 2;
		_delay_ms(1000);
		PORTC = !bitMask;
		_delay_ms(1000);
		actualBlink++;

			if(actualBlink == howMuchBlink)
			{
				if(willStop == 'Y' || willStop == 'y')
				{
					while (1)
					{
						PORTC = 0x0;
						
					}
				}else if (willStop == 'n' || willStop == 'N')
				{
					continue;
					
				}
				else
				{
					continue;
				
				}
				}
			}
			
}


/*
*Method will blink one led
*Bitmask = starting value for led blinking
*howMuchBlink = amount of "blinks"
*willStop = will ever blinking stop?
*
*
*/
void lightOne(int withDiode, int startingBitmask, int howMuchWillBlink, char willStop)
{
	int actualBlink = 0;
	while(true)
	{
		if(withDiode == 1)
		{
			PORTC = startingBitmask;
		}else if(withDiode == 2)
		{
			PORTC = (startingBitmask<<1);
		}else
		{
			PORTC = 0x0;
		}

			if(actualBlink == howMuchBlink)
			{
				if(willStop == 'Y' || willStop == 'y')
				{
					while (1)
					{
						PORTC = 0x0;
						
					}
				}else if (willStop == 'n' || willStop == 'N')
				{
					continue;
					
				}
				else
				{
					continue;
				
				}
				}
			
}
/*
*Method will stop led blinking
*
*
*/
void stopBlinking()
{
	PORTC = 0x0;
}
}
#endif /* LED_H_ */
