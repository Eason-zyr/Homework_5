//This is the implementation file Cyberdemon.cpp
#include<iostream>
#include<string>
#include<ctime>
#include "Balrog.h"                                         //include header file
using namespace std;

Balrog::Balrog() :Demon(15, 15, "Balrog") {};               //constructors

Balrog::Balrog(int str, int hit) :Demon(str, hit, "Balrog") {};

int Balrog::getDamage() {
	int total = 0, damage = 0;

	for (int i = 0; i < 2; i++) {                           //Balrog attacks twice
		damage = (rand() % get_strength()) + 1;
		total += damage;
		cout << getSpecies() << " attacks for " << damage << " points!" << endl;
	}

	if ((rand() % 100) < 5) {                               //5% to inflicts 50 additional damage
		total += 50;
		cout << "Demonic attack inflicts 50 additional damage points!" << endl;
	}

	return(total);
}