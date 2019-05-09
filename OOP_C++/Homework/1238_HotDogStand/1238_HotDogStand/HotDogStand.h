// Student ID: B10615043
// Date: April 3, 2018
// Last Update: April 4, 2018
// Problem statement: This C++ header to declare Hot Dog Stand.

#include <iostream>
#include <string>

class HotDogStand
{
private:
	std::string name;	// stand name
	int sold;			// value of sold hotdogs
	static int allSold;	// static member to record all sold value
public:
	HotDogStand(std::string standName, int soldValue);	// constructor
	HotDogStand(std::string standName);					// constructor
	void justSold();									// sold one hotdog
	void print();										// print stand sold condiction
	static int allStandsoldAmount();					// return all stand sold condiction
};