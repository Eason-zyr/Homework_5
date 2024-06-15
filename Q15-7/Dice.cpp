//This is the implementstin file Dice.cpp
#include<iostream>
#include<ctime>
#include<cstdlib>
#include "Dice.h"
using namespace std;

Dice::Dice():numSides(6) {                   //constructors
	srand(time(NULL));                       //Seeds random number generator
}

Dice::Dice(int numSides):numSides(numSides) {
	srand(time(NULL));
}

void Dice::set_side(int sides) {             //set and get functions
	numSides = sides;
}

int Dice::get_side() const {
	return(numSides);
}

int Dice::rollDice() const {
	return (rand() % numSides) + 1;          //a random point of dice
}