// Student ID: B10615043
// Date: May 22, 2018
// Last Update: May 23, 2018
// Problem statement: This C++ header to declare class Cyberdemon.
#pragma once
#include "Demon.h"

class Cyberdemon :public Demon
{
public:
	Cyberdemon();
	Cyberdemon(int strength, int hitpoints);

	string getSpecies();
	int getDamage();
};
