// Student ID: B10615043
// Date: May 8, 2018
// Last Update: May 8, 2018
// Problem statement: This C++ program that reads this file and finds the longest word that reverses to a different word.
#include <iostream>
#include <fstream>	// ifstream
#include <map>		// map
#include <string>	
#include <algorithm>// reverse, find

using namespace std;

int main()
{
	ifstream inputFile;
	inputFile.open("words.txt");		// open file words.txt

	map<string, int> mapWord;			// map contain all word and each word length
	map<string, int>::iterator iter;	// iterator

	// read file
	string temp;
	while (inputFile >> temp)
	{
		int len = temp.length();
		mapWord.insert(pair<string, int>(temp, len));
	}

	// find longest word
	string longestWord="";
	for (iter = mapWord.begin(); iter != mapWord.end(); iter++)
	{
		if (iter->first.length() > longestWord.length())
		{
			string rWord = iter->first;
			reverse(rWord.begin(), rWord.end());
			map<string, int>::iterator it;

			// find its reverse word exist or not
			it = mapWord.find(rWord);
			if (it != mapWord.end())
			{
				longestWord = iter->first;
			}
		}
	}
	cout << longestWord << endl;	// print longest word
	mapWord.clear();				// clear map
	return 0;
}
