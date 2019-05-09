// Student ID: B10615043
// Date: May 8, 2018
// Last Update: May 8, 2018
// Problem statement: This Programming Project explores how the unnamed namespace works.
#include <iostream>
#include "user.h"
#include "password.h"

using namespace std;
using namespace Authenticate;

int main()
{
	inputUserName();
	inputPassword();
	cout << "Your username is " << getUserName() << " and your password is: "
		<< getPassword() << endl;
	return 0;
}