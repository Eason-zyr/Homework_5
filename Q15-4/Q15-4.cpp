//Use inheritance class to create an battle arena
#include<iostream>
#include<string>
#include<ctime>
#include "Creature.h"                                    //include header file
#include "Demon.h"
#include "Elf.h"
#include "Human.h"
#include "Cyberdemon.h"
#include "Balrog.h"
using namespace std;
                                                         //functions to battle
void battleArena(Creature& creature1, Creature& creature2);

int main(void) {
	srand(time(NULL));                                   //every random result will be different

	Human Player1(15, 200);                              //build an object for each roll
	Balrog Player2(20, 100);
	Elf Player3(30, 100);
	Cyberdemon Player4(20, 150);

	cout << "Battle 1:" << endl;                         //every player battles with each other
	battleArena(Player1, Player2);                  
	cout << "Battle 2:" << endl;
	battleArena(Player1, Player3);
	cout << "Battle 3:" << endl;
	battleArena(Player1, Player4);
	cout << "Battle 4:" << endl;
	battleArena(Player2, Player3);
	cout << "Battle 5:" << endl;
	battleArena(Player2, Player4);
	cout << "Battle 6:" << endl;
	battleArena(Player3, Player4);

	system("pause");
	return(0);
}
                                                         //takes two creatrue to battle
void battleArena(Creature& creature1, Creature& creature2) {
	int HP1, HP2, damage1, damage2, round = 1;           //hit points ,damage ,round counter
	HP1 = creature1.get_hitpoints();
	HP2 = creature2.get_hitpoints();
	
	while (HP1 > 0 && HP2 > 0) {                         //until at least one HP is 0
		cout << "Round " << round << " :" << endl;       //output the datas
		cout << creature1.getSpecies() << "'s HP: " << HP1 << endl;
		cout << creature2.getSpecies() << "'s HP: " << HP2 << endl;
		damage1 = creature1.getDamage();
		damage2 = creature2.getDamage();
		HP1 -= damage2;                                  //inflict damage to the other
		HP2 -= damage1;
		cout << creature1.getSpecies() << " inflicts " << damage1 << " on " << creature2.getSpecies() << endl;
		cout << creature2.getSpecies() << " inflicts " << damage2 << " on " << creature1.getSpecies() << endl << endl;
		round++;
	}

	if (HP1 <= 0 && HP2 <= 0) {                          //output who is the winner
		cout << "Nobody is winner,this battle is a tie." << endl << endl;
	}
	else if (HP1 > 0) {
		cout << creature1.getSpecies() << " is winner of this battle." << endl << endl;
	}
	else {
		cout << creature2.getSpecies() << " is winner of this battle." << endl << endl;
	}
}