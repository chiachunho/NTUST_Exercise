#include <iostream>
using namespace std;

int main() 
{
	double i;
	while (cin >> i)
	{
		double guess = i / 2;
		double r = i / guess;
		double n_guess = (guess + r) / 2;
		while (!(n_guess - guess) < 0.01)
		{
			guess = n_guess;
			r = i / guess;
			n_guess = (guess + r) / 2;
		}
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << n_guess << "\n";
	}
	return 0;
}