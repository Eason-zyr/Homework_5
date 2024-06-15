//This is the header file LoadedDice.h
#ifndef LOADEDDICE_H
#define LOADEDDICE_H

#include "Dice.h"
using namespace std;

class LoadedDice: public Dice {                           //define the LoadedDice class
public:
	LoadedDice();                                         //constructors
	LoadedDice(int numSides);
	void set_side(int sides);                             //set and get function
	int get_side() const;
	virtual int rollDice() const;                         //virtual function
};

#endif