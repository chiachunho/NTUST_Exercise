// Student ID: B10615043
// Date: June 5, 2018
// Last Update: June 5, 2018
// Problem statement: This C++ program have a template-based function that calculates and returns 
//						the absolute value of the difference between two numeric values passed in.
#include <iostream>
#include <cmath>

using namespace std;

template <class T>
double absoluteValue(T a, T b)
{
	double result = abs(a - b);
	return result;
}

int main()
{
	int i1, i2;
	double d1, d2;
	char c1, c2;
	i1 = 10; i2 = 20;
	cout << "Absolute value of 10, 20 is " << absoluteValue(i1, i2) << endl;

	d1 = 5.5; d2 = 3.1;
	cout << "Absolute value of 5.5, 3.1 is " << absoluteValue(d1, d2) << endl;

	c1 = 'A', c2 = 'C';
	cout << "Absolute value of A, C is " << absoluteValue(c1, c2) << endl;
	return 0;
}