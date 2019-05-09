// Student ID: B10615043
// Date: May 22, 2018
// Last Update: May 23, 2018
// Problem statement: This C++ header to implement class Demon.
#include "Demon.h"

Demon::Demon() :Creature(-1, 10, 10)
{
}

Demon::Demon(int strength, int hitpoints) : Creature(-1, strength, hitpoints)
{
}

// Return Creature Species
string Demon::getSpecies()
{
	return string("Unknown");
}

// Return Creature Damage
int Demon::getDamage()
{
	int damage = Creature::getDamage();

	// Demons can inflict damage of 50 with a 5% chance
	if ((rand() % 100) < 5)
	{
		damage = damage + 50;
		cout << "Demonic attack inflicts 50 "
			<< " additional damage points!" << endl;
	}

	return damage;
}

