// Student ID: B10615043
// Date: Nov. 2, 2018
// Last Update: Nov. 2, 2018
// Problem statement: This C++ header to declare class Client.
#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Client
{
public:
	Client();
	Client(int arrival, int service, int waiting);
	~Client();
	void setArrival(int time);
	void setService(int time);
	void setWaiting(int time);
	void setServe(bool status);
	void setDeparture(int time);
	void countdownService();
	void countdownWaiting();
	int getArrival();
	int getService();
	int getWaiting();
	bool getServe();
	int getDeparture();
private:
	int arrival;
	int service;
	int waiting;
	bool serve;
	int departure;
};