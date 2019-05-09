// Student ID: B10615043
// Date: April 6, 2018
// Last Update: April 7, 2018
// Problem statement: This C++ header to implement class Form.
#include "Form.h"

// Intent: set input string.
// Pre: input word.
// Post: none.
void Form::SetInputWord(string inputWord)
{
	this->input = inputWord;
}

// Intent: process input word.
// Pre: none.
// Post: none.
void Form::ProcessInputWord()
{
	int length = Form::input.size();
	for (int i = 0; i < length; i++)
	{
		if (isupper(Form::input[i])) 
		{
			Form::info[Form::input[i] + 32]++; // upper letter count combine to lower count
		}
		else
		{
			Form::info[Form::input[i]]++;
		}
	}
}

// Intent: set file name.
// Pre: file name string.
// Post: none.
void Form::SetFileName(string fileName)
{
	this->fileName = fileName;
}

// Intent: Load Compare word.
// Pre: none.
// Post: none.
void Form::Load_CompaerWord()
{
	ifstream inputFile;				// file stream
	inputFile.open(this->fileName); // open file
	string fileContext;				// temp string to read file word/context

	while (inputFile >> fileContext)
	{
		Form temp;									// temp form
		temp.SetInputWord(fileContext);				// set word by file context
		temp.ProcessInputWord();					// process to get word info array
		bool legal = true;							// a flag to check word legal or not
		for (int i = 126; i >- 0; i--)
		{
			if (this->info[i] < temp.info[i])		// if file word's letter count more than inputString's letter count
			{
				legal = false;						// change flag
				break;								// break loop to make program fast
			}
		}
		if (legal)									// if file word legal
		{
			this->found.push_back(fileContext);		// add to found word list
		}
	}
}

void Form::PrintFoundWords()
{
	for (string word : this->found)	// found word list loop
	{
		cout << word << endl;		// print found word
	}
}
