//This is the implementstin file LoadedDice.cpp
#include<iostream>
#include<ctime>
#include<cstdlib>
#include "Dice.h"
#include "LoadedDice.h"
using namespace std;

LoadedDice::LoadedDice() :Dice(6) {          //constructors
	srand(time(NULL));                       //Seeds random number generator
}

LoadedDice::LoadedDice(int numSides) :Dice(numSides) {
	srand(time(NULL));
}

void LoadedDice::set_side(int sides) {       //set and get functions
	numSides = sides;
}

int LoadedDice::get_side() const {
	return(numSides);
}

int LoadedDice::rollDice() const {           //a random point of dice
	if (rand() % 2 == 0) {                   //50% to roll the max number
		return(numSides);
	}
	else {
		return(Dice::rollDice());            //else return random number 
	}
}