// Student ID: B10615043
// Date: May 22, 2018
// Last Update: May 23, 2018
// Problem statement: This C++ header to implement class Creature.
#include "Creatures.h"

// Return Creature Species
string Creature::getSpecies()
{
	switch (type)
	{
	case 0:  return "Human";
	case 1:  return "Cyberdemon";
	case 2:  return "Balrog";
	case 3:  return "Elf";
	}
	return "Unknown";
}

Creature::Creature() : type(0), strength(10), hitpoints(10)
{

}

Creature::Creature(int newType, int newStrength, int newHit) : type(newType), strength(newStrength), hitpoints(newHit) 
{

}

int Creature::getHitPoints() 
{ 
	return hitpoints; 
}

int Creature::getType()
{
	return type;
}

// Return Creature Damage
int Creature::getDamage()
{
	int damage;
	// All creatures inflict damage which is a random number up to their strength
	damage = (rand() % strength) + 1;
	cout << getSpecies() << " attacks for " << damage << " points!" << endl;

	return damage;
}

int Creature::getStrength()
{
	return strength;
}

void Creature::setStrength(int strength)
{
	this->strength = strength;
}

void Creature::setHitPoints(int hitPoints)
{
	this->hitpoints = hitPoints;
}

void Creature::setType(int type)
{
	this->type = type;
}




