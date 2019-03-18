// Student ID: B10615043
// Date: Mar 11, 2019
// Last Update: Mar 11, 2019
// Problem statement: This C++ program for Profit Maximization Problem by non-recursive version program.
#include <iostream>

using namespace std;

struct subArray
{
	int low;	// index of array begin
	int high;	// index of array end
	int sum;	// sum of subArray

	// default constructor
	subArray() :low(0), high(0), sum(0) {};
	// constructor with varibles
	subArray(int low, int high, int sum) :low(low), high(high), sum(sum) {};
};

// function 
subArray FindMaximumSubarray(int* array, int length);
subArray Detect(int* array, int length);

int main()
{
	int n; // the number of array
	while (cin >> n)
	{
		int *A = new int[n]; // new int array
		for (int i = 0; i < n; i++)
		{
			cin >> A[i]; // input array
		}
		subArray result; // Maximum Subarray
		result = FindMaximumSubarray(A, n); // Call Fuction

		// print result
		cout << result.low << " " << result.high << " " << result.sum << endl;
		// clean array
		delete[] A;
	}
	return 0;
}

subArray FindMaximumSubarray(int* array, int length)
{
	subArray result = Detect(array, length);

	// if array all negative
	if (result.sum < 0)
	{
		return result;
	}
		
	subArray maxResult;
	
	// inital the max reuslt
	maxResult.sum = array[0];
	maxResult.low = 0;
	maxResult.high = 0;

	for (int i = 0; i < length; ++i)
	{
		// try to add 
		result.sum += array[i];
		result.high = i;

		// if sum is negative, reset the new subarray
		if (result.sum < 0)
		{
			result.sum = 0;
			result.low = i + 1;
		}

		// if sum is bigger, write to max result
		if (result.sum > maxResult.sum)
		{
			maxResult.sum = result.sum;
			maxResult.low = result.low;
			maxResult.high = result.high;
		}
	}
	return maxResult;
}

subArray Detect(int* array, int length)
{
	subArray max;

	// inital set 
	max.sum = array[0];
	
	for (int i = 0; i < length; ++i)
	{
		// if find a non-negative element
		if (array[i] >= 0)
		{
			return subArray();
		}

		// if find max negative element
		if (array[i] > max.sum)
		{
			max.high = i;
			max.low = i;
			max.sum = array[i];
		}
	}
	return max;
}
