// Student ID: B10615043
// Date: May 17, 2018
// Last Update: May 18, 2018
// Problem statement: This C++ header to declare class email.
#pragma once
#include "document.h"

class Email : public Document
{
public:
	// constructors
	Email();
	Email(string text, string sender, string recipient, string title);

	// get value function
	string getSender();
	string getRecipient();
	string getTitle();

	// set value function
	void setSender(string sender);
	void setRecipient(string recipient);
	void setTitle(string title);

	// overloading operator
	const Email& operator= (Email& rSide);

private:
	string sender;
	string recipient;
	string title;
};