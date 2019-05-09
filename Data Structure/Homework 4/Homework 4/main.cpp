// Student ID: B10615043
// Date: May 8, 2018
// Last Update: May 8, 2018
// Problem statement: This C++ program .
#include <iostream>
#include "BST.h"

using namespace std;

int main()
{
	BST T;
	string num;
	cout << "Please input your data(int) in to the binary search:" << endl
		<< "If you finish input, please input \"-\"." << endl;
	while (cin >> num)
	{
		if (num == "-")
		{
			cout << "Input Finish." << endl
				<< "Data in binary search tree(in order): ";
			T.inOrderPrint();
			break;
		}
		T.insertNode(stoi(num));
	}

	cout << "Command List: (1) Insert (2) Delete (3) minelement" << endl
		<< "Please input command number: ";
	int cmd;
	while (cin >> cmd)
	{
		switch (cmd)
		{
			int key;
		case 1:
			cout << "Please input the data(int) you want to insert:";
			cin >> key;
			T.insertNode(key);
			cout << "Data in binary search tree(in order): ";
			T.inOrderPrint();
			break;
		case 2:
			cout << "Please input the data(int) you want to delete:";
			cin >> key;
			T.deleteNode(key);
			cout << "Data in binary search tree(in order): ";
			T.inOrderPrint();
			break;
		case 3:
			cout << "Please input the threshold(int) you want to find minelement:";
			cin >> key;	
			cout << "Minelement result: " << T.minelement(key) << endl;
			break;
		default:
			cout << "Invalid command, please retry input." << endl;
			break;
		}
		cout << endl << "Command List: (1) Insert (2) Delete (3) minelement" 
			<< endl << "Please input command number: ";
	}

	return 0;
}
