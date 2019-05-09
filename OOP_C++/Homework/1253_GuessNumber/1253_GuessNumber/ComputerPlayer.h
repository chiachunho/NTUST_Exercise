// Student ID: B10615043
// Date: May 29, 2018
// Last Update: May 29, 2018
// Problem statement: This C++ header to declare class ComputerPlayer.
#pragma once
#include "Player.h"

class ComputerPlayer :
	public Player
{
public:
	// constructor
	ComputerPlayer();
	~ComputerPlayer();

	// Let computer to guess number smarter
	virtual int getGuess();
};

