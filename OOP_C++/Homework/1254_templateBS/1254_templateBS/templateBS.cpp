// Student ID: B10615043
// Date: June 6, 2018
// Last Update: June 6, 2018
// Problem statement: This C++ program template versions of the iterative binary search and
//						the recursive binary search.
#define ARRAY_SIZE 50
#include <iostream>

template <class T>
void ItrSearch(T array[],int left,int right, int num, bool& found,int& middle)
{
	while (left <= right)
	{
		middle = (right + left) / 2;

		if (array[middle] == num)
		{
			found = true;
			return;
		}
		if (array[middle] > num)
		{
			right = middle - 1;
		}
		else
		{
			left = middle + 1;
		}
	}
	found = false;
}

template <class T>
void recBinSrch(T array[], int left, int right, int num, bool& found, int& middle)
{
	if (left > right)
	{
		found = false;
		return;
	}
	middle = (right + left) / 2;
	if (array[middle] == num)
	{
		found = true;
		return;
	}
	if (array[middle] > num)
	{
		return recBinSrch(array, left, middle - 1, num, found, middle);
	}

	return recBinSrch(array, middle + 1, right,num,found,middle);
}

using namespace std;

int main()
{
	int a[ARRAY_SIZE];
	const int finalIndex = ARRAY_SIZE - 1;

	int i;

	for (i = 0; i < ARRAY_SIZE; i++)
		a[i] = 3 * i;
	cout << "Array contains:\n";

	for (i = 0; i < ARRAY_SIZE; i++)
		cout << a[i] << " ";
	cout << endl;


	int key, location;

	bool found;

	cout << "Enter number to be located: ";
	cin >> key;
	cout << "\nTesting Template Iterative Binary Search\n";

	ItrSearch(a, 0, finalIndex, key, found, location);

	if (found)
		cout << key << " is in index location "
		<< location << endl;
	else
		cout << key << " is not in the array." << endl;


	cout << "\nTesting Template Recursive Binary Search\n";

	recBinSrch(a, 0, finalIndex, key, found, location);

	if (found)
		cout << key << " is in index location "
		<< location << endl;
	else
		cout << key << " is not in the array." << endl;

	return 0;
}
