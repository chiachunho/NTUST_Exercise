// Student ID: B10615043
// Date: March 19, 2018
// Last Update: March 19, 2018
// Problem statement: This C++ program sort and output the input number with occurrences.

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm> //to use "sort"

using namespace std;

int main()
{
	vector<vector <int>> count;
	int value;
	int element = 0;

	ifstream inputFile;
	inputFile.open("input.txt");

	while (inputFile >> value) //start to read
	{
		int elementDetect = 0; //a flag to check element already exist in array or not

		for (int i = 0; i < element; i++)
		{
			if (value == count[i][0]) //if already exist in array
			{
				count[i][1]++; 
				elementDetect++; //edit flag 
				break;
			}
		}
		if (!elementDetect) //if element doesn't exist
		{
			element++;
			count.resize(element); //resize vector
			count[element-1].resize(2); //resize
			count[element-1][0] = value; //add element
			count[element-1][1] = 1; //count value
		}
	}
	inputFile.close();

	sort(count.begin(), count.end()); //sort vector

	ofstream outputFile;
	outputFile.open("output.txt"); //create a file,"output.txt"

	outputFile << "N\t" << "Count" << endl;
	for (int i = element - 1; i >= 0; i--)
	{
		outputFile << count[i][0] << "\t" << count[i][1] << endl;
	}
	outputFile.close();
	return 0;
}