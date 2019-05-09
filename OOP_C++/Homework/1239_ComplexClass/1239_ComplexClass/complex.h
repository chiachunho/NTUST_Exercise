// Student ID: B10615043
// Date: April 6, 2018
// Last Update: April 7, 2018
// Problem statement: This C++ header to declare class Complex.
#pragma once
#include <iostream>
#include <math.h>

using namespace std;

class Complex
{
private:
	double real_;
	double imaginary_;
public:

	// constructors
	Complex(double, double);
	Complex(double);
	Complex();

	// member function
	double real();
	double imag();

	// friend function
	friend const Complex operator +(const Complex& complex1, const Complex& complex2);
	friend const Complex operator -(const Complex& complex1, const Complex& complex2);
	friend const Complex operator *(const Complex& complex1, const Complex& complex2);
	friend const Complex operator /(const Complex& complex1, const Complex& complex2);
	friend bool operator ==(const Complex& complex1, const Complex& complex2);
	friend ostream& operator <<(ostream& outputStream, const Complex& complex);
	friend istream& operator >>(istream& inputStream, Complex& complex);
	friend double real(const Complex& complex);
	friend double imag(const Complex& complex);
	friend double norm(const Complex& complex);
};