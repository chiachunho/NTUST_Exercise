// Student ID: B10615043
// Date: May 8, 2018
// Last Update: May 8, 2018
// Problem statement: This C++ program .
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int limit;
	while (cin >> limit)
	{
		int item;
		cin >> item;
		vector<int> list;
		for (int i = 0; i < item; i++)
		{
			int song;
			cin >> song;
			list.push_back(song);
		}
		vector<int> c(limit + 1, 0);
		vector<vector<bool>> record(item);
		
		for (int i = 0; i < item; i++)
		{
			record[i].assign(limit + 1, false);
			for (int j = limit; j >= list[i]; j--)
			{
				int rec = c[j - list[i]] + list[i];
				if (rec > c[j])
				{
					c[j] = rec;
					record[i][j] = true;
				}
			}
		}
		vector<int> num;
		for (int i = item - 1, j = limit; i >= 0; i--)
		{
			if (record[i][j])
			{
				num.push_back(list[i]);
				j -= list[i];
			}
		}
		for (int i = num.size() - 1; i >= 0; i--)
		{
			cout << num[i] << " ";
		}
		cout << "sum:" << c[limit] << endl;
	}

	return 0;
}
