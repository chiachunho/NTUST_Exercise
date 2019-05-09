// Student ID: B10615043
// Date: April 3, 2018
// Last Update: April 4, 2018
// Problem statement: This C++ header to declare class Month.

#include <iostream>
#include <string>

using namespace std;

class Month
{
private:
	int monthValue; 
public:
	Month(char ch1, char ch2, char ch3);	// constructor
	Month(int value);						// constructor
	Month();								// constructor
	int nextMonth();						// return next month value
	void inputInt();						// input integer to write data
	void inputStr();						// input string to write data
	void outputInt();						// output month by value
	void outputStr();						// output month by string
};