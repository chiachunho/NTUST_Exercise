// Student ID: B10615043
// Date: May 17, 2018
// Last Update: May 18, 2018
// Problem statement: This C++ header to implement class email.
#include "email.h"

Email::Email() :Document("")
{
	this->sender = "";
	this->recipient = "";
	this->title = "";
}

Email::Email(string text, string sender, string recipient, string title): Document(text)
{
	this->sender = sender;
	this->recipient = recipient;
	this->title = title;
}

string Email::getSender()
{
	return sender;
}

string Email::getRecipient()
{
	return recipient;
}

string Email::getTitle()
{
	return title;
}

void Email::setSender(string sender)
{
	this->sender = sender;
}

void Email::setRecipient(string recipient)
{
	this->recipient = recipient;
}

void Email::setTitle(string title)
{
	this->title = title;
}

//overloading assign operator
const Email & Email::operator=(Email & rSide)
{
	Document::operator=(rSide);
	this->sender = rSide.sender;
	this->recipient = rSide.recipient;
	this->title = rSide.title;
	return *this;
}
