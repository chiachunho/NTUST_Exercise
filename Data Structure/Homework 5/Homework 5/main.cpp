// Student ID: B10615043
// Date: Dec 10, 2018
// Last Update: Dec 23, 2018
// Problem statement: This C++ program for Homework 5.
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
			cout << "Input Finish." << endl << endl
				<< "Data in binary search tree(in order):"<<endl;
			T.inOrderPrint();
			cout << endl;
			break;
		}
		T.insertNode(stoi(num));
	}

	cout << "Command List: (1) Insert (2) Delete (3) minelement (4) avg (5) Print" << endl
		<< "Please input command number: ";
	int cmd;
	while (cin >> cmd)
	{
		cout << endl;
		switch (cmd)
		{
			int key;
		case 1:
			cout << "Please input the data(int) you want to insert: ";
			cin >> key;
			T.insertNode(key);
			cout << endl << "Data in binary search tree(in order):" << endl;
			T.inOrderPrint();
			break;
		case 2:
			cout << "Please input the data(int) you want to delete: ";
			cin >> key;
			T.deleteNode(key);
			cout << "Data in binary search tree(in order):" << endl;
			T.inOrderPrint();
			break;
		case 3:
			cout << "Please input the threshold(int) you want to find minelement: ";
			cin >> key;	
			cout << "Minelement result: " << T.minelement(key) << endl;
			break;
		case 4: 
			cout << "Please input the rank range(int l,int u) you want to get avg:" << endl
				<< "Range Start(int l) at: ";
			int l, u;
			cin >> l;
			cout << "Range End(int u) at: ";
			cin >> u;
			if (u > l)
			{
				cout << "Avg(" << l << "," << u << ") is " << T.avg(l, u) << endl;
			}
			else
			{
				cout << "Invalid input, please retry input." << endl;
			}
			break;
		case 5:
			cout << endl << "Data in binary search tree(in order):" << endl;
			T.inOrderPrint();
			break;
		default:
			cout << "Invalid command, please retry input." << endl;
			break;
		}
		cout << endl << "Command List: (1) Insert (2) Delete (3) minelement (4) avg (5) Print" 
			<< endl << "Please input command number: ";
	}

	return 0;
}
