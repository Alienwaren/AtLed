/*
 * LedPattern.h
 *
 * Created: 2014-01-15 15:44:26
 *  Author: overkiller
 Licence: GNU GPLv3
 */ 


#ifndef LEDPATTERN_H_
#define LEDPATTERN_H_
namespace LED
{
typedef struct normalBlink
{
	int amountOfLed;
	int startingBitMask;
	int amountOfBlink;
	char willEnd; //(?)
	};

}

#endif /* LEDPATTERN_H_ */