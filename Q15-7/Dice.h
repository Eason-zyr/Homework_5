//This is the header file Dice.h
#ifndef DICE_H
#define DICE_H

using namespace std;

class Dice {                           //define the Dice class
public:
	Dice();                            //constructors
	Dice(int numSides);
	void set_side(int sides);          //set and get function
	int get_side() const;
	virtual int rollDice() const;      //virtual function
protected:
	int numSides;
};

#endif