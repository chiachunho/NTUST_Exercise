// Student ID: B10615043
// Date: Oct 17, 2018
// Last Update: Oct 22, 2018
// Problem statement: This C++ program is for homework 1.

#define SIZE 10
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct point
{
	int x;
	int y;
};

void FindPattern(string patt, string reused);
bool visit(char board[][SIZE], int row, int column, string keyword, int pos, vector<point>& record,int resued);

char S[SIZE][SIZE];
bool U[SIZE][SIZE];

int main()
{
	// set the matrix
	puts("input the 100 characters of S row by row:");

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			S[i][j] = getchar();
			if (S[i][j] == '\n')
			{
				S[i][j] = getchar();
			}
		}
	}

	// input the pattern
	string patt, reused;
	cout << endl;
	puts("input a string patt of no more than 10 characters in length:");
	cout << "patt: ";

	while (cin >> patt)
	{
		cout << "reused: ";
		cin >> reused;
		FindPattern(patt, reused);

		puts("input a string patt of no more than 10 characters in length:");
		cout << "patt: ";
	}
	
	return 0;
}

// find letter recursive function

void FindPattern(string patt, string reused)
{
	vector<point> record;
	int reu;

	// reset the record used matrix
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			U[i][j] = false;
		}
	}

	bool found = false;

	// to find to first letter of keyword
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (S[i][j] == patt[0] && !found)
			{
				if (reused == "TRUE")
				{
					reu = 1;
				}
				else if (reused == "FALSE")
				{
					reu = 0;
				}

				if (visit(S, i, j, patt, 0, record, reu))
				{
					cout << "Output:";
					for (int k = 0; k < record.size(); k++)
					{
						if (!k)
						{
							cout << " (" << record[k].x << "," << record[k].y << ")";
						}
						else
						{
							cout << ", (" << record[k].x << "," << record[k].y << ")";
						}
					}
					cout << endl << endl;
					found = true;
					record.clear();
				}
				else
				{
					record.clear();
				}
			}
		}
	}
	if (!found)
	{
		cout << "Output: no match" << endl << endl;
	}
}

bool visit(char board[][SIZE], int row, int column, string keyword, int pos, vector<point>& record, int reused)
{
	// if out of board and avoid illegal
	if (row < 0 || row >= SIZE || column < 0 || column >= SIZE)
	{
		return false;
	}

	// if not letter of keyword
	if (board[row][column] != keyword[pos])
	{
		return false;
	}

	// if this letter haven't used
	if (!U[row][column] || reused == 1)
	{
		// record letter used
		U[row][column] = true;
		point temp;
		temp.x = row;
		temp.y = column;
		record.push_back(temp);

		// to determind end or not and find next letter
		if (!(pos + 1 == keyword.length()) &&
			!(visit(board, row - 1, column, keyword, pos + 1, record, reused) ||
				visit(board, row, column - 1, keyword, pos + 1, record, reused) ||
				visit(board, row, column + 1, keyword, pos + 1, record, reused) ||
				visit(board, row + 1, column, keyword, pos + 1, record, reused)))
		{
			// if can't find next letter undo record used
			U[row][column] = false;
			record.pop_back();
			return false;
		}
	}
	else
	{
		return false;
	}

	// if success find letter
	return true;
}

