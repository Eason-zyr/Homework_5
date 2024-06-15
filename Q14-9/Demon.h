//This is the header file Demon.h
#ifndef DEMON_H
#define DEMON_H

#include<string>
#include "Creature.h"                      //include header file
using namespace std;

class Demon :public Creature {             //define Demon class & public inheritance 
public:
	Demon();
	Demon(int str, int hit,string spc);
	void getDamage();                       //rewrite the function
};

#endif