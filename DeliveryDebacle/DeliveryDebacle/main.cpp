// Student ID: B10615043
// Date: May 8, 2018
// Last Update: May 8, 2018
// Problem statement: This C++ program .
#include <iostream>
#include <vector>

using namespace std;

long long int problem(int n, vector<long long int> &dp)
{
	if (n > 0 && dp[n] == 0)
	{
		dp[n] = problem(n - 1, dp) + 4 * problem(n - 2, dp) + 2 * problem(n - 3, dp);
	}
	return dp[n];
}

int main()
{
	vector<long long int> dp(40 + 1, 0);
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 5;
	int t;
	while (cin >> t)
	{
		for (int i = 0; i < t; i++)
		{
			int n;
			cin >> n;
			cout << problem(n, dp) << endl;
		}
	}
	return 0;
}
