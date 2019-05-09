// Student ID: B10615043
// Date: May 8, 2018
// Last Update: May 8, 2018
// Problem statement: This C++ header to implement namespace Authenticate of user .
#include "user.h"

namespace Authenticate
{
	void inputUserName()
	{
		do
		{
			cout << "Enter your username (8 letters only)" << endl;
			cin >> username;
		} while (!isValid());
	}
	string getUserName()
	{
		return username;
	}
}

// unnamed namespace
namespace
{
	// Intent: to determine username is valid
	// Pre:none.
	// Post:if username length is 8 letters return true.
	bool isValid()
	{
		if (username.length() == 8)
		{
			for (int i = 0; i < username.length(); i++)
			{
				if (!isalpha(username[i]))
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
		return true;
	}
}