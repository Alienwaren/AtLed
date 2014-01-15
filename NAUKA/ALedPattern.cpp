/* 
* ALedPattern.cpp
*Licence: GNU GPLv3
* Created: 2014-01-15 16:09:33
* Author: overkiller
*/


//#include "LED.h"
#include "ALedPattern.h"

// default constructor
ALedPattern::ALedPattern()
{
} //ALedPattern
void ALedPattern::setStartingBitMask(int pBitMask)
{
	startingBitMask = pBitMask;
}
void ALedPattern::setAmountOfBlink(int pBitMask)
{
	startingBitMask = pBitMask;
}
void ALedPattern::setEndBlink(char PwillEnd)
{
	PwillEnd = willEnd;
}
void ALedPattern::setParams(int setBitMask, int setAmountBlink, char setWillEndLet)
{
	setStartingBitMask(setBitMask);
	setAmountOfBlink(setAmountBlink);
	setEndBlink(setWillEndLet);
	
}
// default destructor
ALedPattern::~ALedPattern()
{
} //~ALedPattern
