/*
 * LED.h
 *
 * Created: 2014-01-14 16:59:18
 *  Author: overkiller
  Licence: GNU GPLv3
 */ 

#include <avr/io.h>
#include <util/delay.h>

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

void blinkNormal(int bitMask, int howMuchBlink, char willStop)
{
	int actualBlink = 0;
	PORTC = bitMask;
	_delay_ms(1000);
	PORTC = PORTC | 1;
	_delay_ms(1000);
	actualBlink++;
	while(true)
	{
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

}

#endif /* LED_H_ */