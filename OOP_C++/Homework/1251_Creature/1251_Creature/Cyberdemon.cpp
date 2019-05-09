// Student ID: B10615043
// Date: May 22, 2018
// Last Update: May 23, 2018
// Problem statement: This C++ header to implement class Cyberdemon.
#include "Cyberdemon.h"

Cyberdemon::Cyberdemon() :Demon(10, 10)
{
	setType(1);
}

Cyberdemon::Cyberdemon(int strength, int hitpoints) : Demon(strength, hitpoints)
{
	setType(1);
}

// Return Creature Species
string Cyberdemon::getSpecies()
{
	return string("Cyberdemon");
}

// Return Creature Damage
int Cyberdemon::getDamage()
{
	int damage = Demon::getDamage();
	
	return damage;
}
