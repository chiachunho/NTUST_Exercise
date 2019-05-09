// Student ID: B10615043
// Date: April 20, 2018
// Last Update: April 21, 2018
// Problem statement: This C++ header to declare class Polynomial.
#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Polynomial
{
public:
	Polynomial(); // creates an empty polynomial
	Polynomial(const Polynomial& poly);
	Polynomial(double coefficient[], int size);
	Polynomial(double value);
	~Polynomial();

	//Use indexed polynomial as r-value to inspect coefficient
	//and as l-value to assign coefficient
	double& operator[](int degree);

	//This is required if we are to have const correctness
	const double& operator[](int degree)const;
	const Polynomial& operator=(const Polynomial & rhs);
	int mySize();

	//friend functions:
	friend double evaluate(const Polynomial& poly, double arg);
	friend Polynomial operator + (const Polynomial& lhs, const Polynomial& rhs);
	friend Polynomial operator - (const Polynomial& lhs, const Polynomial& rhs);
	friend Polynomial operator*(const Polynomial& lhs, const Polynomial& rhs);

private:
	double *coef; //array pointer 
	int size;
};