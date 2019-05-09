// Student ID: B10615043
// Date: May 22, 2018
// Last Update: May 23, 2018
// Problem statement: This C++ header to implement class Balrog.
#include "Balrog.h"

Balrog::Balrog() :Demon(10, 10)
{
	setType(2);
}

Balrog::Balrog(int strength, int hitpoints) : Demon(strength, hitpoints)
{
	setType(2);
}

// Return Creature Species
string Balrog::getSpecies()
{
	return string("Balrog");
}

// Return Creature Damage
int Balrog::getDamage()
{
	int damage = Demon::getDamage();

	// Balrogs are so fast they get to attack twice
	int damage2 = (rand() % getStrength()) + 1;
	cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
	damage = damage + damage2;

	return damage;
}