// Student ID: B10615043
// Date: May 17, 2018
// Last Update: May 18, 2018
// Problem statement: This C++ header to implement class file.
#include "file.h"

File::File() :Document("")
{
	this->pathname = "";
}

File::File(string text, string pathname) :Document(text)
{
	this->pathname = pathname;
}

string File::getPathname()
{
	return pathname;
}

void File::setPathname(string pathname)
{
	this->pathname = pathname;
}

//overloading assign operator
const File & File::operator=(File & rSide)
{
	Document::operator=(rSide);
	this->pathname = rSide.pathname;
	return *this;
}
