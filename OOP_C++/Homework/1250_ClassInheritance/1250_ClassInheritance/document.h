// Student ID: B10615043
// Date: May 17, 2018
// Last Update: May 18, 2018
// Problem statement: This C++ header to declare class document.
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Document
{
public:
	// constructor
	Document();
	Document(string text);

	// get and set value operator
	string getText() const;
	void setText(string text);

	// overloading assign operator
	const Document& operator= (Document& rSide);

private:
	string text;
};

bool ContainsKeyword(const Document& docObject, string keyword);
