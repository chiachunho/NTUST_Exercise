// Student ID: B10615043
// Date: June 11, 2018
// Last Update: June 11, 2018
// Problem statement: This C++ program for atm.
#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
	Account a(100);
	try
	{
		cout << "Depositing 50" << endl;
		cout << "New balance: " << a.deposit(50) << endl;
		//cout << "Depositing -25" << endl;
		//cout << "New balance: " << a.deposit(-25) << endl;
		cout << "Withdraw 25" << endl;
		cout << "New balance: " << a.withdraw(25) << endl;
		cout << "Withdraw 250" << endl;
		cout << "New balance: " << a.withdraw(250) << endl;
	}
	catch (InsufficientFunds) // InsufficientFunds: a class name
	{
		cout << "Not enough money to withdraw that amount." << endl;
	}
	catch (NegativeDeposit) // NegativeDeposit: a class name
	{
		cout << "You may only deposit a positive amount." << endl;
	}
	cout << "Enter a character to exit" << endl;
	char wait;
	cin >> wait;
	system("pause");
	return 0;
}