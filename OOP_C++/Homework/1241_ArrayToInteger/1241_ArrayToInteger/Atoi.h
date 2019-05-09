// Student ID: B10615043
// Date: April 14, 2018
// Last Update: April 14, 2018
// Problem statement: This C++ header to declare class Atoi.
#pragma once
#include <iostream>
#include <string>
#include <cctype> // isdigit

using namespace std;

class Atoi 
{
private:
	string beTrans;				// string to be transform
	char sign;					// positive or negative
public:
	Atoi();						// default constructor
	Atoi(string s);				// constructor
	void SetString(string s);	// set transform string
	const string GetString();	// get transform string
	int Length();				// how many numbers 
	bool IsDigital();			// to check string is digital or not
	int StringToInteger();		// to convert string to integer
};
