// Student ID: B10615043
// Date: June 11, 2018
// Last Update: June 11, 2018
// Problem statement: This C++ header to declare class Account.
#pragma once
#include <iostream>
#include "InsufficientFunds.h"
#include "NegativeDeposit.h"

class Account
{
private:
	double balance;

public:
	Account() 
	{ 
		balance = 0; 
	}

	Account(double initialDeposit) 
	{
		balance = initialDeposit;
	}

	double getBalance() { return balance; }

	//returns new balance or -1 if error
	double deposit(double amount)
	{
		if (amount > 0)
			balance += amount;

		else
			throw NegativeDeposit();

		return balance;
	}

	//return new balance or -1 if invalid amount

	double withdraw(double amount)
	{
		if ((amount > balance) || (amount < 0))
			throw InsufficientFunds();

		else
			balance -= amount;

		return balance;
	}
};

