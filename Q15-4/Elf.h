//This is the header file Elf.h
#ifndef ELF_H
#define ELF_H

#include<string>
#include "Creature.h"                   //include header file
using namespace std;

class Elf :public Creature {            //define Elf class & public inheritance 
public:
	Elf();
	Elf(int str, int hit);
	virtual int getDamage();            //rewrite the function
};

#endif