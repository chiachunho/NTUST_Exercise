#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int n;
	vector <double> score;
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			double input;
			cin >> input;
			score.push_back(input);
		}
		double average = 0;
		for (double i : score)
		{
			average += i;
		}
		average = average / n;
		double deviation = 0;
		for (double i : score)
		{
			deviation += (i - average) * (i - average);
		}
		deviation = sqrt(deviation / n);
		cout << "Average:" << average << "\tStandard deviation:" << deviation << endl;
		score.clear();
	}
	return 0;
}