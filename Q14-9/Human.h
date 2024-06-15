//This is the header file Human.h
#ifndef HUMAN_H
#define HUMAN_H

#include<string>
#include "Creature.h"                  //include header file
using namespace std;

class Human :public Creature {         //define Human class & public inheritance 
public:
	Human();
	Human(int str, int hit);
	int getDamage();                   //rewrite the function
};

#endif