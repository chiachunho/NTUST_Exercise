// Student ID: B10615043
// Date: Nov. 2, 2018
// Last Update: Nov. 2, 2018
// Problem statement: This C++ header to implement class Client.
#include "Client.h"

Client::Client()
{
	serve = false;
}

Client::Client(int arrival, int service, int waiting)
{
	this->arrival = arrival;
	this->service = service;
	this->waiting = waiting;
	this->serve = false;
}

Client::~Client()
{
}

void Client::setArrival(int time)
{
	this->arrival = time;
}

void Client::setService(int time)
{
	this->service = time;
}

void Client::setWaiting(int time)
{
	this->waiting = time;
}

void Client::setServe(bool status)
{
	this->serve = status;
}

void Client::setDeparture(int time)
{
	this->departure = time;
}

void Client::countdownService()
{
	this->service--;
}

void Client::countdownWaiting()
{
	this->waiting--;
}

int Client::getArrival()
{
	return this->arrival;
}

int Client::getService()
{
	return this->service;
}

int Client::getWaiting()
{
	return this->waiting;
}

bool Client::getServe()
{
	return this->serve;
}

int Client::getDeparture()
{
	return this->departure;
}
