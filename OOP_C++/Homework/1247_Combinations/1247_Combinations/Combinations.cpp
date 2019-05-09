// Student ID: B10615043
// Date: May 22, 2018
// Last Update: May 22, 2018
// Problem statement: This C++ program print combination.
#include <iostream>

using namespace std;

void PrintCombination(int* arrRtr, int element, int dlement);
void comb(int n, int k, const int* seq, int start, int level, int*result);

// main function
/*
#define ELEMENTS_FOR_COMBINATION 5 //i.e., C(5,4)
#define DLEMENTS_FOR_CHOICE 4

int main(void)
{
	int *arrayPtr = new int[ELEMENTS_FOR_COMBINATION];

	//Get all elements for combination
	for (int i = 0; i < ELEMENTS_FOR_COMBINATION; ++i)
		arrayPtr[i] = i + 1;

	PrintCombination(arrayPtr, ELEMENTS_FOR_COMBINATION, DLEMENTS_FOR_CHOICE);

	if (arrayPtr != NULL)
		delete[] arrayPtr;
	return 0;
}
*/

// Intent: create a new array to record result and call comb function
// Pre: array Pointer, element and dlement
// Post: none.
void PrintCombination(int* arrPtr, int element, int dlement)
{
	if (arrPtr == NULL || element < dlement)
	{
		cout << "Illegal" << endl;
	}
	int *combination = new int[dlement];
	comb(element, dlement, arrPtr, 0, 0, combination);
}

// Intent: recursive function to print all combination
// Pre: element and dlement ,array Pointer, begin index, result array pointer
// Post: print result.
void comb(int n, int k, const int* seq, int start, int level, int*result) 
{
	// print combination
	if (level == k)
	{
		for (int i = 0; i < k; i++)
		{
			cout << result[i] << " ";
		}
		cout << endl;
	}
	else
	{
		for (int i = start; i <= n - (k - level); i++)
		{
			result[level] = seq[i];
			comb(n, k, seq, i + 1, level + 1, result);
		}
	}
}