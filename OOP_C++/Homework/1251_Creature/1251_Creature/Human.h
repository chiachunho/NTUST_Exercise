// Student ID: B10615043
// Date: May 22, 2018
// Last Update: May 23, 2018
// Problem statement: This C++ header to declare class Human.
#pragma once
#include "Creatures.h"

class Human : public Creature
{
public:
	Human();
	Human(int strength, int hitpoints);

	string getSpecies();
	int getDamage();
};
