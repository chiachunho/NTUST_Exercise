// Student ID: B10615043 
// Date: March 13, 2018  
// Last Update: March 13, 2018 
// Problem statement: read "scores.txt" to print rank

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

// Intent: sort rank
// Pre: empty vector
// Post: vector include Grade 1 to 3

void getHighScore(vector<string> &strings, vector<int> &integers)
{
	
	ifstream inputfile;
	inputfile.open("scores.txt");
	string str;
	int score;
	integers.assign(3, 0);
	// reading records from the input file
	while (inputfile >> str)
	{
		inputfile >> score;

		if (score > integers[0])
		{
			integers.insert(integers.begin(), score);
			strings.insert(strings.begin(), str);
		}
		else if (score > integers[1])
		{
			integers.insert(integers.begin() + 1, score);
			strings.insert(strings.begin() + 1, str);
		}
		else if (score > integers[2])
		{
			integers.insert(integers.begin() + 2, score);
			strings.insert(strings.begin() + 2, str);
		}
	}
	inputfile.close();
}

int main()
{
	vector<string> names;
	vector<int> scores;

	getHighScore(names, scores);

	for (int i = 0; i < 3; i++)
	{
		cout << names[i] << endl << scores[i] << endl;
	}

	names.clear();
	scores.clear();

	return 0;
}