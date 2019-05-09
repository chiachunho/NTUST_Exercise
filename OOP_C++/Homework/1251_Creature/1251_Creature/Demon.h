// Student ID: B10615043
// Date: May 22, 2018
// Last Update: May 23, 2018
// Problem statement: This C++ header to declare class Demon.
#pragma once
#include "Creatures.h"

class Demon :
	public Creature
{
public:
	Demon();
	Demon(int strength, int hitpoints);

	string getSpecies();
	int getDamage();
};

#include "Cyberdemon.h"
#include "Balrog.h"