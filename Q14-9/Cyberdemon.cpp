//This is the implementation file Cyberdemon.cpp
#include<iostream>
#include<string>
#include<ctime>
#include "Cyberdemon.h"                                                    //include header file
using namespace std;

Cyberdemon::Cyberdemon() :Demon(20, 20, "Cyberdemon") {};                  //constructors

Cyberdemon::Cyberdemon(int str, int hit) :Demon(str, hit, "Cyberdemon") {};

int Cyberdemon::getDamage() {
	int damage;
	damage = (rand() % get_strength()) + 1;
	cout << getSpecies() << " attacks for " << damage << " points!" << endl;
	
	if ((rand() % 100) < 5)                                                //5% to inflicts 50 additional damage
	{
		damage = damage + 50;
		cout << "Demonic attack inflicts 50 additional damage points!" << endl;
	}

	return(damage);
}