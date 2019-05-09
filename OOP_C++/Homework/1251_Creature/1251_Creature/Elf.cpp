// Student ID: B10615043
// Date: May 22, 2018
// Last Update: May 23, 2018
// Problem statement: This C++ header to implement class Elf.
#include "Elf.h"

Elf::Elf() : Creature(3, 10, 10)
{
}

Elf::Elf(int strength, int hitpoints) : Creature(3, strength, hitpoints)
{
}

// Return Creature Species
string Elf::getSpecies()
{
	return string("Elf");
}

// Return Creature Damage
int Elf::getDamage()
{
	int damage = Creature::getDamage();

	// Elves inflict double magical damage with a 10% chance
	if ((rand() % 10) == 0)
	{
		cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
		damage = damage * 2;
	}

	return damage;
}
