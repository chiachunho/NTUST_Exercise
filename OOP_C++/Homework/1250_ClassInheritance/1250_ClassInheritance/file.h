// Student ID: B10615043
// Date: May 17, 2018
// Last Update: May 18, 2018
// Problem statement: This C++ header to declare class file.
#pragma once
#include "document.h"

class File : public Document
{
public:
	// constructor
	File();
	File(string text, string pathname);

	// get and set value functions
	string getPathname();
	void setPathname(string pathname);

	// overloading assign operator
	const File& operator= (File& rSide);

private:
	string pathname;
};