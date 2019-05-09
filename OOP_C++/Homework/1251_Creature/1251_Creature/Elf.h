// Student ID: B10615043
// Date: May 22, 2018
// Last Update: May 23, 2018
// Problem statement: This C++ header to declare class Elf.
#pragma once
#include "Creatures.h"

class Elf :
	public Creature
{
public:
	Elf();
	Elf(int strength, int hitpoints);

	string getSpecies();
	int getDamage();
};
