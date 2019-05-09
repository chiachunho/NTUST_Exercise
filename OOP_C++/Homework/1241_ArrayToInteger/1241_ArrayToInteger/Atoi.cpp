// Student ID: B10615043
// Date: April 14, 2018
// Last Update: April 14, 2018
// Problem statement: This C++ header to impletment class Atoi.
#include "Atoi.h"

// default constructor
Atoi::Atoi()
{
	this->beTrans = "0";
	this->sign = '+';
}

// constructor
Atoi::Atoi(string s)
{
	this->SetString(s);
}

// Intent: set transform string.
// Pre: string want to be transform.
// Post: none.
void Atoi::SetString(string s)
{
	if (s[0] == '+')
	{
		sign = '+';
		beTrans.assign(s, 1, s.length());
	}
	else if (s[0] == '-')
	{
		sign = '-';
		beTrans.assign(s, 1, s.length());
	}
	else // default positive
	{
		sign = '+';
		beTrans.assign(s, 0, s.length());
	}
}

// Intent: get transform string.
// Pre: none.
// Post: return transform string.
const string Atoi::GetString()
{
	if (sign == '-')
	{
		return sign + beTrans;
	}
	return beTrans;
}

// Intent: get how many numbers.
// Pre: none.
// Post: return value that how many numbers.
int Atoi::Length()
{
	return beTrans.length();
}

// Intent: to check string can be digital or not.
// Pre: none.
// Post: return true if string can be digital.
bool Atoi::IsDigital()
{
	int length = beTrans.length();
	bool digital = true;
	for (int i = 0; i < length; i++)
	{
		if (!isdigit(beTrans[i]))
		{
			digital = false;
			break;
		}
	}
	return digital;
}

// Intent: convert string to integer.
// Pre: none.
// Post: return transform integer.
int Atoi::StringToInteger()
{
	int length = beTrans.length();
	int result = 0;
	for (int i = length - 1, p = 0; i >= 0; i--, p++)
	{
		if (!p) // pow == 0
		{
			result += int(beTrans[i] - 48);
		}
		else
		{
			int tmp = int(beTrans[i] - 48);
			for (int j = 0; j < p; j++) // power function
			{
				tmp *= 10;
			}
			result += tmp;
		}
	}
	if (sign == '-') // if negative
	{
		result *= -1;
	}
	return result;
}

