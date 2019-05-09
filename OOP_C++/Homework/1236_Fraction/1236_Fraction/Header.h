// Student ID: B10615043
// Date: March 26, 2018
// Last Update: March 26, 2018
// Problem statement: This C++ header to defined class Fraction.

#pragma once
#include <iostream>

using namespace std;

class Fraction
{
public:
	void setNumerator(double i);
	void setDenominator(double i);
	double getDouble();
	void outputReducedFraction();

private:
	double numerator;
	double denominator;
};

// Intent: Write in data.
// Pre: value of numerator.
// Post: none return.
void Fraction::setNumerator(double i) 
{
	numerator = i;
}

// Intent: Write in data.
// Pre: value of denominator.
// Post: none return.
void Fraction::setDenominator(double i)
{
	denominator = i;
}

// Intent: Return double type fraction value.
// Pre: none.
// Post: return fraction value.
double Fraction::getDouble()
{
	double result = numerator / denominator;
	return result;
}

// Intent: Print reduced fraction.
// Pre: none.
// Post: cout reduced fraction.
void Fraction::outputReducedFraction()
{
	int tmpNumer = numerator;
	int tmpDenomin = denominator;
	if (tmpNumer%tmpDenomin == 0) // if integer
	{
		cout << tmpNumer / tmpDenomin;
	}
	else
	{
		int i = numerator;
		if (numerator > denominator)
		{
			i = denominator;
		}
		for (; i > 0; i--)
		{
			if (tmpDenomin%i == 0 && tmpNumer%i == 0)
			{
				tmpDenomin /= i;
				tmpNumer /= i;
			}
		}
		cout << tmpNumer << "/" << tmpDenomin;
	}
}