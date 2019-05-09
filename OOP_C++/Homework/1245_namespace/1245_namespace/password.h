// Student ID: B10615043
// Date: May 8, 2018
// Last Update: May 8, 2018
// Problem statement: This C++ header to declare namespace Authenticate of password .
#pragma once
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

namespace Authenticate
{
	void inputPassword();
	string getPassword();
}

// unnamed namespace
namespace
{
	string password;
	bool isValid();
}