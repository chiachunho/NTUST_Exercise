// Student ID: B10615043
// Date: May 22, 2018
// Last Update: May 23, 2018
// Problem statement: This C++ header to declare class Creature.
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Creature
{
private:
	int type;				// 0 human, 1 cyberdemon, 2 balrog, 3 elf
	int strength;			// How much damage we can inflict
	int hitpoints;			// How much damage we can sustain
	string getSpecies();	// Returns type of species

public:

	// Initialize to human, 10 strength, 10 hit points
	Creature();
	
	// Initialize creature to new type, strength, hit points
	Creature(int newType, int newStrength, int newHit);
	
	// Also add appropriate accessor and mutator functions
	// for type, strength, and hit points
	int getStrength();
	int getHitPoints();
	int getType();

	void setStrength(int);
	void setHitPoints(int);
	void setType(int);

	// Returns amount of damage this creature
	// inflicts in one round of combat
	int getDamage();
};

#include "Human.h"
#include "Demon.h"
#include "Elf.h"