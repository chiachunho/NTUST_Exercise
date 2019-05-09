// Student ID: B10615043
// Date: May 22, 2018
// Last Update: May 23, 2018
// Problem statement: This C++ header to declare class Balrog.
#pragma once
#include "Demon.h"

class Balrog :
	public Demon
{
public:
	Balrog();
	Balrog(int strength, int hitpoints);

	string getSpecies();
	int getDamage();
};
