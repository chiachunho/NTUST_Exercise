// Student ID: B10615043
// Date: June 19, 2018
// Last Update: June 19, 2018
// Problem statement: Consider a text file of names, with one name per line, 
//						that has been compiled from several different sources.
#include <iostream>
#include <fstream>
#include <set>
#include <string>

using namespace std;

int main()
{
	fstream inputFile("name.txt");
	string name;
	set<string> s;

	// read file
	while (getline(inputFile,name))
	{
		s.insert(name);
	}
	
	// print name list
	for (set<string>::const_iterator p = s.begin(); p != s.end(); p++)
	{
		cout << *p << endl;
	}
	inputFile.close();
	return 0;
}
