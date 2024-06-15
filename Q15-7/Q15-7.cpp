//comparing regular dice with loaded dice
#include<iostream>
#include<cstdlib>
#include<ctime>
#include "Dice.h"                                              //include the header files
#include "LoadedDice.h"
using namespace std;

int rollTwoDice(const Dice& dice1, const Dice& dice2);         //the function return the sum of points

int main(void) {
	int sides;                                                 //number of sides of dice
	cout << "Determine how many sides of the dice >> ";        //let user input
	cin >> sides;

	Dice D1(sides), D2(sides);                                 //create two regular dices
	cout << "Two regular dices: " << endl;
	for (int i = 1; i <= 30; i++) {                            //testing 30 times
		cout << i << ". " << rollTwoDice(D1,D2) << endl;
	}

	LoadedDice LD1(sides), LD2(sides);                         //create two loaded dices
	cout << endl << "Two loaded dices: " << endl;
	for (int i = 1; i <= 30; i++) {                            //testing 30 times
		cout << i << ". " << rollTwoDice(LD1, LD2) << endl;
	}

	system("pause");
	return(0);
}

int rollTwoDice(const Dice& dice1, const Dice& dice2) {        //take two dices ,roll and return the sum
	return dice1.rollDice() + dice2.rollDice();
}