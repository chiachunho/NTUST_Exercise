// Student ID: B10615043
// Date: May 8, 2018
// Last Update: May 8, 2018
// Problem statement: This C++ program .
#include <iostream>
#include <vector>

using namespace std;

struct food
{
	int size;
	int full;
};

int main()
{
	int item;
	int limit;

	while (cin >> item)
	{
		vector<food> list;
		vector<int> c;
		
		for (int i = 0; i < item; i++)
		{
			food temp;
			cin >> temp.size >> temp.full;
			list.push_back(temp);
		}
		cin >> limit;
		c.resize(limit + 1);
		for (int i = 0; i < item; i++)
		{
			for (int j = limit; j >= list[i].size; j--)
			{
				int eat = c[j - list[i].size] + list[i].full;
				if (eat > c[j]) c[j] = eat;
			}
		}
		cout << c[limit] << endl;
	}

	return 0;
}
