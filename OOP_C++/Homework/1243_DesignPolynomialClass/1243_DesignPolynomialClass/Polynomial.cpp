// Student ID: B10615043
// Date: April 20, 2018
// Last Update: April 21, 2018
// Problem statement: This C++ header to implement class Polynomial.
#include "Polynomial.h"

// default constructor
Polynomial::Polynomial()
{
	this->size = 0;
	this->coef = new double[size];
}

// copy constructor
Polynomial::Polynomial(const Polynomial & poly) :size(poly.size)
{
	this->coef = new double[size];
	for (int i = 0; i < size; i++)
	{
		this->coef[i] = poly.coef[i];
	}
}

// parameterized constructor
Polynomial::Polynomial(double coefficient[], int size)
{
	this->size = size;
	this->coef = new double[size];
	for (int i = 0; i < size; i++)
	{
		this->coef[i] = coefficient[i];
	}
}

// to covert constant to Polynomial
Polynomial::Polynomial(double value)
{
	this->size = 1;
	this->coef = new double[1];
	this->coef[0] = value;

}

// deconstructor
Polynomial::~Polynomial()
{
	delete[] coef;
}

// Intent: extract coefficients, indexed by exponent.
// Pre: degree.
// Post: coefficient.
double & Polynomial::operator[](int degree)
{
	double zero = 0;
	if (size > degree)
	{
		return coef[degree];
	}
	else
	{
		return zero;
	}
}

// Intent: extract coefficients, indexed by exponent.
// Pre: degree.
// Post: coefficient.
const double & Polynomial::operator[](int degree) const
{
	double zero = 0;
	if (size > degree)
	{
		return coef[degree];
	}
	else
	{
		return zero;
	}
}

// Intent: overloading assign operator.
// Pre: Polynomial.
// Post: assign result.
const Polynomial & Polynomial::operator=(const Polynomial & rhs)
{
	this->size = rhs.size;
	delete[] this->coef;
	this->coef = new double[this->size];
	for (int i = 0; i < size; i++)
	{
		this->coef[i] = rhs.coef[i];
	}
	return *this;
}

// Intent: get size value.
// Pre: none.
// Post: size.
int Polynomial::mySize()
{
	return size;
}

// Intent: calculate polynomial value by arg.
// Pre: Polynomial and arg.
// Post: value.
double evaluate(const Polynomial & poly, double arg)
{
	double result = 0;
	for (int i = 0; i < poly.size; i++)
	{
		result += poly.coef[i] * pow(arg, i);
	}
	return result;
}

// Intent: polynomial + polynomial, constant + polynomial, polynomial + constant.
// Pre: two polynomial.
// Post: result.
Polynomial operator+(const Polynomial & lhs, const Polynomial & rhs)
{
	Polynomial result;
	if (lhs.size > rhs.size)
	{
		result.size = lhs.size;
		result.coef = new double[result.size];
		for (int i = 0; i < rhs.size; i++)
		{
			result.coef[i] = lhs.coef[i] + rhs.coef[i];
		}
		for (int i = rhs.size; i < lhs.size; i++)
		{
			result.coef[i] = lhs.coef[i];
		}
	}
	else
	{
		result.size = rhs.size;
		result.coef = new double[result.size];
		for (int i = 0; i < lhs.size; i++)
		{
			result.coef[i] = lhs.coef[i] + rhs.coef[i];
		}
		for (int i = lhs.size; i < rhs.size; i++)
		{
			result.coef[i] = rhs.coef[i];
		}
	}
	return result;
}

// Intent: polynomial - polynomial, constant - polynomial, polynomial - constant.
// Pre: two polynomial.
// Post: result.
Polynomial operator-(const Polynomial & lhs, const Polynomial & rhs)
{
	Polynomial result;
	if (lhs.size > rhs.size)
	{
		result.size = lhs.size;
		result.coef = new double[result.size];
		for (int i = 0; i < rhs.size; i++)
		{
			result.coef[i] = lhs.coef[i] - rhs.coef[i];
		}
		for (int i = rhs.size; i < lhs.size; i++)
		{
			result.coef[i] = lhs.coef[i];
		}
	}
	else
	{
		result.size = rhs.size;
		result.coef = new double[result.size];
		for (int i = 0; i < lhs.size; i++)
		{
			result.coef[i] = lhs.coef[i] - rhs.coef[i];
		}
		for (int i = lhs.size; i < rhs.size; i++)
		{
			result.coef[i] = -1 * rhs.coef[i];
		}
	}
	return result;
}

// Intent: polynomial * polynomial, constant * polynomial, polynomial * constant.
// Pre: two polynomial.
// Post: result.
Polynomial operator*(const Polynomial & lhs, const Polynomial & rhs)
{
	Polynomial result;
	if (lhs.size == 0 || rhs.size == 0)
	{
		result.size = 0;
		result.coef = new double[result.size];
	}
	else
	{
		result.size = (lhs.size - 1) + (rhs.size - 1) + 1;
		result.coef = new double[result.size];
		for (int i = 0; i < result.size; i++)
		{
			result.coef[i] = 0;
		}
		for (int i = 0; i < lhs.size; i++)
		{
			for (int j = 0; j < rhs.size; j++)
			{
				result.coef[i + j] += lhs.coef[i] * rhs.coef[j];
			}
		}
	}
	return result;
}
