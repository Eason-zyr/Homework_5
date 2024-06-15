//Use inheritance class to calculate the total damage
#include<iostream>
#include<string>
#include<ctime>
#include "Creature.h"                                //include header file
#include "Demon.h"
#include "Elf.h"
#include "Human.h"
#include "Cyberdemon.h"
#include "Balrog.h"
using namespace std;

int main(void) {
	srand(time(NULL));                               //every random result will be different

	Human Player1(10, 10);                           //build an object for each roll
	Balrog Player2(15, 15);
	Elf Player3(20, 10);
	Cyberdemon Player4(20, 20);

	for (int i = 1; i <= 10; i++) {                  //testing for 10 rounds fighting
		int total = 0;
		cout << "Round " << i << " combat: " << endl;
		total += Player1.getDamage();
		total += Player2.getDamage();
		total += Player3.getDamage();
		total += Player4.getDamage();                //output each damage and total damage
		cout << "Your team total damage is " << total << " points" << endl << endl;
	}

	system("pause");
	return(0);
}