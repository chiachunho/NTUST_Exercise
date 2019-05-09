//Name: PWC
//Date: March 19, 2016
//Last Update: March 27, 2017
//Problem statement: ½è¼Æ¥[´î

#include <iostream>
#include "PrimeNumber.h"
using namespace std;

int main()
{
	//Create two object form different constructor
	PrimeNumber p1, p2(13);
	//get p1's number
	cout << p1.get() << endl;
	//get p1's number
	cout << p2.get() << endl;

	//doing postfix ++ operator
	PrimeNumber p3 = p1++;
	//get p1's number
	cout << p3.get() << endl;

	//doing postfix ++ operator
	PrimeNumber p4 = p2++;
	//get p1's number
	cout << p4.get() << endl;

	//doing postfix -- operator
	PrimeNumber p5 = p2--;
	//get p1's number
	cout << p5.get() << endl;

	system("pause");
	return 0;
}
