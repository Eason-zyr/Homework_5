//This is the header file Cyberdemon.h
#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include<string>
#include "Demon.h"                         //include header file

class Cyberdemon :public Demon {           //define Cyberdemon class & public inheritance 
public:
	Cyberdemon();
	Cyberdemon(int str, int hit);
	int getDamage();                       //rewrite the function
};

#endif