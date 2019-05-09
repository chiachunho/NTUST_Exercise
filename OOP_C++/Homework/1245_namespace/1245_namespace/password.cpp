// Student ID: B10615043
// Date: May 8, 2018
// Last Update: May 8, 2018
// Problem statement: This C++ header to implement namespace Authenticate of password.
#include "password.h"

namespace Authenticate
{
	void inputPassword()
	{
		do
		{
			cout << "Enter your password (at least 8 characters " <<
				"and at least one non-letter)" << endl;
			cin >> password;
		} while (!isValid());
	}
	string getPassword()
	{
		return password;
	}
}
// unnamed namespace
namespace
{
	// Intent: to determine password is valid
	// Pre:none.
	// Post:if password has at least 8 characters including at least one non-letter retun true.
	bool isValid()
	{
		if (password.length() >= 8)
		{
			for (int i = 0; i < password.length(); i++)
			{
				if (!isalpha(password[i]))
				{
					return true;
				}
			}
		}
		return false;
	}
}