// Student ID: B10615043
// Date: April 6, 2018
// Last Update: April 7, 2018
// Problem statement: This C++ header to declare class PrimeNumber.
#pragma once
#include <iostream>

using namespace std;

class PrimeNumber
{
private:
	int value;
public:
	// constructor
	PrimeNumber(int);
	PrimeNumber();

	// member function
	int get();
	
	// operator overloading
	PrimeNumber operator++();		// prefix  ++ operator
	PrimeNumber operator++(int);	// postfix ++ operator
	PrimeNumber operator--();		// prefix  -- operator
	PrimeNumber operator--(int);	// postfix -- operator
};