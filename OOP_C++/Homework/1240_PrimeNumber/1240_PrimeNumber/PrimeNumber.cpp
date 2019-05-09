// Student ID: B10615043
// Date: April 6, 2018
// Last Update: April 7, 2018
// Problem statement: This C++ header to implementation class PrimeNumber.
#include "PrimeNumber.h"

// constructor
PrimeNumber::PrimeNumber(int inputValue)
{
	this->value = inputValue;
}

// constructor
PrimeNumber::PrimeNumber()
{
	this->value = 1;
}

// Intent: return prime number value.
// Pre: none.
// Post: return prime number value.
int PrimeNumber::get()
{
	return value;
}

// operator overloading
PrimeNumber PrimeNumber::operator++() // prefix  ++ operator
{
	bool prime = false; // a flag to record prime
	do
	{
		value++;
		bool zero = true; // to record value is prime or not
		for (int i = 2; i < value; i++)
		{
			if (value%i == 0) // if not prime
			{
				zero = false; // flag change
				break;
			}
		}
		if (zero) // if prime
		{
			prime = true; // flag change
		}
	} while (!prime); // if value++ is not prime number 

	return PrimeNumber(value);
}

PrimeNumber PrimeNumber::operator++(int) // postfix  ++ operator
{
	PrimeNumber temp = *this;
	++*this;
	return temp;
}

PrimeNumber PrimeNumber::operator--() // prefix  -- operator
{
	bool prime = false; // a flag to record prime
	do
	{
		value--;
		bool zero = true; // to record value is prime or not
		for (int i = 2; i < value; i++)
		{
			if (value%i == 0) // if not prime
			{
				zero = false; // flag change
				break;
			}
		}
		if (zero) // if prime
		{
			prime = true; // flag change
		}
	} while (!prime); // if value++ is not prime number 

	return PrimeNumber(value);
}

PrimeNumber PrimeNumber::operator--(int) // postfix  -- operator
{
	PrimeNumber temp = *this;
	--*this;
	return temp;
}
