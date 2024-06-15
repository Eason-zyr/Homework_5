//This is the implementation file Human.cpp
#include<iostream>
#include<string>
#include<ctime>
#include "Human.h"                                       //include header file
using namespace std;

Human::Human() :Creature(10, 10, "Human") {};            //constructors

Human::Human(int str, int hit) :Creature(str, hit, "Human") {};

int Human::getDamage() {
	int damage;
	damage = (rand() % get_strength()) + 1;              //random damage up to strength
	cout << getSpecies() << " attacks for " << damage << " points!" << endl;
	return(damage);
}