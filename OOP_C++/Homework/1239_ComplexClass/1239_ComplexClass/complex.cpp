// Student ID: B10615043
// Date: April 6, 2018
// Last Update: April 7, 2018
// Problem statement: This C++ header to implementation class Complex.
#include "complex.h"

// constructor
Complex::Complex(double real, double imaginary)
{
	this->real_ = real;
	this->imaginary_ = imaginary;
}

// constructor
Complex::Complex(double real)
{
	this->real_ = real;
	this->imaginary_ = 0;
}

// constructor
Complex::Complex()
{
	this->real_ = 0;
	this->imaginary_ = 0;
}

// Intent: return real part value.
// Pre: none.
// Post: return real part value.
double Complex::real()
{
	return real_;
}

// Intent: return imaginary part value.
// Pre: none.
// Post: return imaginary part value.
double Complex::imag()
{
	return imaginary_;
}

// Intent: do complex + complex.
// Pre: complex1, complex2.
// Post: return complex result.
const Complex operator +(const Complex& complex1, const Complex& complex2)
{
	double newReal = complex1.real_ + complex2.real_;
	double newImag = complex1.imaginary_ + complex2.imaginary_;
	return Complex(newReal, newImag);
}

// Intent: do complex - complex.
// Pre: complex1, complex2.
// Post: return complex result.
const Complex operator -(const Complex& complex1, const Complex& complex2)
{
	double newReal = complex1.real_ - complex2.real_;
	double newImag = complex1.imaginary_ - complex2.imaginary_;
	return Complex(newReal, newImag);
}

// Intent: do complex * complex.
// Pre: complex1, complex2.
// Post: return complex result.
const Complex operator *(const Complex& complex1, const Complex& complex2)
{
	double newReal = complex1.real_ * complex2.real_ + (-1)*complex1.imaginary_ * complex2.imaginary_;
	double newImag = complex1.real_ * complex2.imaginary_ + complex1.imaginary_ * complex2.real_;
	return Complex(newReal, newImag);
}

// Intent: do complex / complex.
// Pre: complex1, complex2.
// Post: return complex result.
const Complex operator /(const Complex& complex1, const Complex& complex2)
{
	double newReal = (complex1.real_*complex2.real_ + complex1.imaginary_*complex2.imaginary_) / (complex2.real_*complex2.real_ + complex2.imaginary_*complex2.imaginary_);
	double newImag = (complex2.real_*complex1.imaginary_- complex1.real_*complex2.imaginary_) / (complex2.real_*complex2.real_ + complex2.imaginary_*complex2.imaginary_);
	return Complex(newReal, newImag);
}

// Intent: judge two complex equal or not.
// Pre: complex1, complex2.
// Post: return judge result (equal -> ture).
bool operator ==(const Complex& complex1, const Complex& complex2)
{
	if (complex1.real_ == complex2.real_ && complex1.imaginary_ == complex2.imaginary_)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Intent: to output complex form.
// Pre: complex.
// Post: return outputstream.
ostream& operator <<(ostream& outputStream, const Complex& complex)
{
	outputStream << complex.real_ << " + " << complex.imaginary_ << "*i\n";
	return outputStream;
}

// Intent: to input complex.
// Pre: complex.
// Post: return inputstream.
istream& operator >>(istream& inputStream, Complex& complex)
{
	inputStream >> complex.real_ >> complex.imaginary_;
	return inputStream;
}

// Intent: return real part value.
// Pre: complex.
// Post: return real part value.
double real(const Complex & complex)
{
	return complex.real_;
}

// Intent: return imaginary part value.
// Pre: complex.
// Post: return imaginary part value.
double imag(const Complex & complex)
{
	return complex.imaginary_;
}

// Intent: return complex norm value.
// Pre: complex.
// Post: return complex norm value.
double norm(const Complex & complex)
{
	return sqrt(complex.real_*complex.real_ + complex.imaginary_*complex.imaginary_);
}