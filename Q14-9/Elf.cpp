//This is the implementation file Elf.cpp
#include<iostream>
#include<string>
#include<ctime>
#include "Elf.h"                                           //include header file
using namespace std;

Elf::Elf() :Creature(20, 10, "Elf") {};                    //constructors

Elf::Elf(int str, int hit) :Creature(str, hit, "Elf") {};

int Elf::getDamage() {
	int damage;
	damage = (rand() % get_strength()) + 1;
	cout << getSpecies() << " attacks for " << damage << " points!" << endl;

	if ((rand() % 10) == 0)                                //10% to inflict magical attack
	{
		cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
		damage *= 2;
	}

	return(damage);
}