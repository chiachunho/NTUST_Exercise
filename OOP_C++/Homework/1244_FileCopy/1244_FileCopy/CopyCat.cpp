// Student ID: B10615043
// Date: May 8, 2018
// Last Update: May 8, 2018
// Problem statement: This C++ file copy program can copy both binary and text files.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	// open files
	ifstream inputFile(argv[1], ios::binary);
	ofstream outputFile(argv[2], ios::binary);
	
	// copy program
	if (inputFile.is_open() && outputFile.is_open())
	{
		while (!inputFile.eof())
		{
			outputFile.put(inputFile.get());
		}
	}

	// close files
	inputFile.close();
	outputFile.close();

	return 0;
}
