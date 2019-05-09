// Student ID: B10615043
// Date: May 22, 2018
// Last Update: May 22, 2018
// Problem statement: This C++ program play word game.
#include <iostream>
#include <fstream>
#include <string>

#define FILE_NAME "words.txt"
#define SIZE 4
using namespace std;

bool visit(char board[][SIZE], int row, int column, string keyword, int pos);

// to record letter used condition
bool used[SIZE][SIZE] = { false };

int main()
{
	string letters;
	while (cin >> letters)
	{
		char board[SIZE][SIZE] = { 0 };

		// insert character to board
		for (int i = 0; i < SIZE; i++)
		{
			board[0][i] = letters[i];
		}
		for (int i = 1; i < SIZE; i++)
		{
			cin >> letters;
			for (int j = 0; j < SIZE; j++)
			{
				board[i][j] = letters[j];
			}
		}

		// open file
		fstream data(FILE_NAME);

		string keyword;
		while (data >> keyword)
		{
			// reset the used record board
			for (int i = 0; i < SIZE; i++)
			{
				for (int j = 0; j < SIZE; j++)
				{
					used[i][j] = false;
				}
			}

			// to find to first letter of keyword
			for (int i = 0; i < SIZE; i++)
			{
				for (int j = 0; j < SIZE; j++)
				{
					if (board[i][j] == keyword[0])
					{
						if (visit(board, i, j, keyword, 0))
						{
							cout << keyword << endl;
						}
					}
				}
			}
		}
	}
	return 0;
}

// find letter recursive function
bool visit(char board[][SIZE], int row, int column, string keyword, int pos)
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
	if (!used[row][column])
	{
		// record letter used
		used[row][column] = true;
		
		// to determind end or not and find next letter
		if (!(pos + 1 == keyword.length()) &&
			!(visit(board, row - 1, column - 1, keyword, pos + 1) ||
				visit(board, row - 1, column, keyword, pos + 1) ||
				visit(board, row - 1, column + 1, keyword, pos + 1) ||
				visit(board, row, column - 1, keyword, pos + 1) ||
				visit(board, row, column + 1, keyword, pos + 1) ||
				visit(board, row + 1, column - 1, keyword, pos + 1) ||
				visit(board, row + 1, column, keyword, pos + 1) ||
				visit(board, row + 1, column + 1, keyword, pos + 1)))
		{
			// if can't find next letter undo record used
			used[row][column] = false;
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