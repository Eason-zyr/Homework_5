//This is the header file Balrog.h
#ifndef BALROG_H
#define BALROG_H

#include<string>
#include "Demon.h"                         //include header file

class Balrog :public Demon {               //define Balrog class & public inheritance 
public:
	Balrog();
	Balrog(int str, int hit);
	virtual int getDamage();               //rewrite the function
};

#endif