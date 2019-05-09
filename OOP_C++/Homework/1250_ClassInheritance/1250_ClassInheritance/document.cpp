// Student ID: B10615043
// Date: May 17, 2018
// Last Update: May 18, 2018
// Problem statement: This C++ header to implement class document.
#include "document.h"

Document::Document()
{
	text = "";
}

Document::Document(string text)
{
	this->text = text;
}

string Document::getText() const
{
	return text;
}

void Document::setText(string text)
{
	this->text = text;
}

//overloading assign operator
const Document & Document::operator=(Document & rSide)
{
	this->text = rSide.text;
	return *this;
}

bool ContainsKeyword(const Document& docObject, string keyword)
{
	if (docObject.getText().find(keyword) != string::npos)
		return true;
	return false;

}

