// Student ID: B10615043
// Date: April 3, 2018
// Last Update: April 4, 2018
// Problem statement: This C++ program to implementation Hot Dog Stand.

#include "HotDogStand.h"

int HotDogStand::allSold = 0; //initialization all sold value

HotDogStand::HotDogStand(std::string standName, int soldValue)
{
	name = standName;
	sold = soldValue;
	allSold += soldValue;
}

HotDogStand::HotDogStand(std::string standName)
{
	name = standName;
	sold = 0; //initialization sold value
}

// Intent: sold one hotdog.
// Pre: none.
// Post: none.
void HotDogStand::justSold()
{
	sold++;
	allSold++;
}

// Intent: print stand sold condiction.
// Pre: none.
// Post: print stand sold condcition.
void HotDogStand::print()
{
	std::cout << name << " " << sold << std::endl;
}

// Intent:return all stand sold condiction.
// Pre: none.
// Post: return all stand sold value.
int HotDogStand::allStandsoldAmount()
{
	return allSold;
}