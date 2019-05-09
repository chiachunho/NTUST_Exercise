// Student ID: B10615043
// Date: May 22, 2018
// Last Update: May 23, 2018
// Problem statement: This C++ header to implement class Human.
#include "Human.h"

Human::Human() : Creature(0, 10, 10)
{
}

Human::Human(int strength, int hitpoints) : Creature(0, strength, hitpoints)
{
}

// Return Creature Species
string Human::getSpecies()
{
	return string("Human");
}

// Return Creature Damage
int Human::getDamage()
{
	int damage = Creature::getDamage();

	return damage;
}


