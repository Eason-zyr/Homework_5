//This is the implementation file Creature.cpp
#include<iostream>
#include<string>
#include "Creature.h"                                                      //include header file
using namespace std;

Creature::Creature() :strength(10), hitpoints(10), species("Human") {};    //constructors

Creature::Creature(int str, int hit, string spc) :strength(str), hitpoints(hit), species(spc) {};

void Creature::set_strengh(int str) { strength = str; }                    //set and get functions

void Creature::set_hitpoints(int hit) { hitpoints = hit; }

void Creature::set_species(string spc) { species = spc; }

int Creature::get_strength() const { return(strength); }

int Creature::get_hitpoints() const { return(hitpoints); }

string Creature::getSpecies() const { return(species); }

void Creature::getDamage() {};                                              //leave empty