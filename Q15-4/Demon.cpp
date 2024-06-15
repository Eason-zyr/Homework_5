//This is the implementation file Demon.cpp
#include<iostream>
#include<string>
#include "Demon.h"                                       //include header file
using namespace std;

Demon::Demon() :Creature(20, 20, "Cyberdemon") {};       //constructors

Demon::Demon(int str, int hit, string spc) :Creature(str, hit, spc) {};

int Demon::getDamage() { return(0); }                    //directedly return