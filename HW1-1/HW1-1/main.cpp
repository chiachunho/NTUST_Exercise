// Student ID: B10615043
// Date: Mar 5, 2019
// Last Update: Mar 5, 2019
// Problem statement: This C++ program for Profit Maximization Problem by recursive version program.
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

// Function to Find Maximum Subarray 
subArray FindMaximumSubarray(int* A, int low, int high);
// Function to Find Max Crossing Subarray
subArray FindMaxCrossingSubarray(int* A, int low, int mid, int high);

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
		result = FindMaximumSubarray(A, 0, n - 1); // Call Fuction
		
		// print result
		cout << result.low << " " << result.high << " " << result.sum << endl;
		// clean array
		delete[] A;
	}
	return 0;
}

subArray FindMaximumSubarray(int* A, int low, int high)
{
	if (high == low)
	{
		return subArray(low, high, A[low]);
	}
	else
	{
		int temp = (low + high) % 2;
		int mid = (low + high - temp) / 2;
		subArray leftArr = FindMaximumSubarray(A, low, mid);
		subArray rightArr = FindMaximumSubarray(A, mid + 1, high);
		subArray crossArr = FindMaxCrossingSubarray(A, low, mid, high);

		if (leftArr.sum >= rightArr.sum && leftArr.sum >= crossArr.sum)
		{
			return leftArr;
		}
		else if (rightArr.sum >= leftArr.sum && rightArr.sum >= crossArr.sum)
		{
			return rightArr;
		}
		else
		{
			return crossArr;
		}
	}
}

subArray FindMaxCrossingSubarray(int* A, int low, int mid, int high)
{
	int leftSum = INT_MIN;
	int maxLeft;
	int sum = 0;
	for (int i = mid; i >= low; i--)
	{
		sum = sum + A[i];
		if (sum > leftSum)
		{
			leftSum = sum;
			maxLeft = i;
		}
	}
	
	int rightSum = INT_MIN;
	int maxRight;
	sum = 0; // reset sum to 0
	for (int j = mid + 1; j <= high; j++)
	{
		sum = sum + A[j];
		if (sum > rightSum)
		{
			rightSum = sum;
			maxRight = j;
		}
	}
	return subArray(maxLeft, maxRight, leftSum + rightSum);
}

