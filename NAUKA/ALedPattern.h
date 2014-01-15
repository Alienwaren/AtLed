/* 
* ALedPattern.h
* Licence: GNU GPLv3
* Created: 2014-01-15 16:09:33
* Author: overkiller
*/

#ifndef __ALEDPATTERN_H__
#define __ALEDPATTERN_H__

	class ALedPattern
	{
	//variables
	public:
	int startingBitMask;
	int amountOfBlink;
	char willEnd;
	protected:
	private:
	

	//functions
	public:
		ALedPattern();
		void setParams(int setBitMask, int setAmountBlink, char setWillEndLet); //Set parameters of blink
		~ALedPattern();
	protected:
		void setStartingBitMask(int pBitMask); //set starting bitmask
		void setAmountOfBlink(int pAmountOfBlink); //set amount of "Blinks"
		void setEndBlink(char PwillEnd); //set willEnd
	private:
		ALedPattern( const ALedPattern &c );
		ALedPattern& operator=( const ALedPattern &c );

	}; //ALedPattern

#endif //__ALEDPATTERN_H__
