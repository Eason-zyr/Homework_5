//This is the header file Creature.h
#ifndef CREATURE_H
#define CREATURE_H

#include<string>
using namespace std;

class Creature                                  //define the Creature class
{
public:                                         //public functions
	Creature();
	Creature(int str, int hit, string spc);
	void set_strengh(int str);
	void set_hitpoints(int hit);
	void set_species(string spc);
	int get_strength() const;
	int get_hitpoints() const;
	string getSpecies() const;
	virtual int getDamage();                    //virtual function
private:
	int strength;                               //private variables
	int hitpoints;
	string species;
};

#endif