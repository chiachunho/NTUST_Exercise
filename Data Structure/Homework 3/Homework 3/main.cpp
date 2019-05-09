// Student ID: B10615043
// Date: Nov 28, 2018
// Last Update: Nov 28, 2018
// Problem statement: This C++ program .
#include <iostream>
#include <string>
//#define EASYMODE
using namespace std;

#ifdef EASYMODE
struct polyNode
{
	polyNode *next;
	int coef;
	int ex;
	int ey;
	int ez;
	void retCoeff(int ex, int ey, int ez);
	void Mulf(int ex, int ey, int ez);
};

int main()
{
	cout << "Please enter the quantity you expect to input: ";
	polyNode* polyno = NULL;
	int nodeNum;
	cin >> nodeNum;
	cout << endl << "The input is given in the form of (coff ex ey ez) one row:" << endl;
	for (int i = 0; i < nodeNum; i++)
	{
		polyNode* temp = new polyNode;
		cin >> temp->coef >> temp->ex >> temp->ey >> temp->ez;
		temp->next = polyno;
		polyno = temp;
	}
	cout << "Input Success." << endl << endl << "Please input the command (retCoeff or Mulf) ex, ey and ez." << endl << endl;
	cout << "Example -> retCoeff 1 2 3" << endl << "Result  -> ";
	polyno->retCoeff(1, 2, 3);
	cout << endl << "Command -> ";
	string command;
	int ex, ey, ez;
	while (cin >> command >> ex >> ey >> ez)
	{

		if (command == "retCoeff")
		{
			cout << "Result  -> ";
			polyno->retCoeff(ex, ey, ez);
		}
		else if (command == "Mulf")
		{
			polyno->Mulf(ex, ey, ez);
			cout << "Result  -> Complete Mulf (" << ex << "," << ey << "," << ez << ")." << endl;
		}
		else
		{
			cout << "Command not exist." << endl;
		}
		cout << endl << "Please input the command (retCoeff or Mulf) ex, ey and ez:" << endl;
		cout << endl << "Command -> ";
	}

	return 0;
}

void polyNode::retCoeff(int ex, int ey, int ez)
{
	struct polyNode *prev, *cur;
	bool found = false;
	int coef = 0;
	for (prev = NULL, cur = this;
		cur != NULL;
		prev = cur, cur = cur->next)
	{
		if (cur->ex == ex && cur->ey == ey && cur->ez == ez)
		{
			found = true;
			coef += cur->coef;
		}
	}
	if (found)
	{
		cout << coef << endl;
	}
	else
	{
		cout << "no match." << endl;
	}
}

void polyNode::Mulf(int ex, int ey, int ez)
{
	struct polyNode *prev, *cur;
	for (prev = NULL, cur = this;
		cur != NULL;
		prev = cur, cur = cur->next)
	{
		cur->ex += ex;
		cur->ey += ey;
		cur->ez += ez;
	}
}

#endif // EASYMODE

#ifndef EASYMODE

enum Triple{ var, ptr, no };

class PolyNode
{
	PolyNode *next;
	int exp;
	Triple trio;
	union 
	{
		char vble;
		PolyNode *down;
		int coef;
	};
};

#endif // !EASYMODE
