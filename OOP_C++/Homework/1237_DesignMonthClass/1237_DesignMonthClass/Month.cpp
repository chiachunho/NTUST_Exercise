// Student ID: B10615043
// Date: April 3, 2018
// Last Update: April 4, 2018
// Problem statement: This C++ program to implementation class Month.
#include "Month.h"

// Month List
string monthList[] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };

Month::Month(char ch1, char ch2, char ch3)
{
	monthValue = 1; // initialization month value
	for (int i = 0; i < 12; i++)
	{
		if (ch1 == monthList[i][0] && ch2 == monthList[i][1] && ch3 == monthList[i][2])
		{
			monthValue = i + 1;
			break;
		}
	}
}

Month::Month(int value)
{
	monthValue = 1; // initialization month value
	if (value >= 1 && value <= 12)
	{
		monthValue = value;
	}
}

Month::Month()
{
	monthValue = 1; // initialization month value
}

// Intent: return next month value.
// Pre: none.
// Post: return next month value.
int Month::nextMonth()
{
	if (monthValue == 12) {
		return monthValue - 12 + 1;
	}
	return monthValue + 1;
}

// Intent: input integer to write data.
// Pre: none.
// Post: none.
void Month::inputInt()
{
	int value;
	cin >> value;
	if (value >= 1 && value <= 12) // if value in legal range 
	{
		monthValue = value;
	}
}

// Intent: input string to write data.
// Pre: none.
// Post: none.
void Month::inputStr()
{
	char ch1, ch2, ch3;
	cin >> ch1 >> ch2 >> ch3;
	for (int i = 0; i < 12; i++)
	{
		if (ch1 == monthList[i][0] && ch2 == monthList[i][1] && ch3 == monthList[i][2])
		{
			monthValue = i + 1;
			break;
		}
	}
}

// Intent: output month by value.
// Pre: none.
// Post: print month by integer.
void Month::outputInt()
{
	cout << monthValue;
}

// Intent: output month by string.
// Pre: none.
// Post: print month by string.
void Month::outputStr()
{
	cout << monthList[monthValue -1];
}
