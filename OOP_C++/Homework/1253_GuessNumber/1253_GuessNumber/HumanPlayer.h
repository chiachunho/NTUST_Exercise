// Student ID: B10615043
// Date: May 29, 2018
// Last Update: May 29, 2018
// Problem statement: This C++ header to declare class HumanPlayer.
#pragma once
#include "Player.h"

class HumanPlayer :
	public Player
{
public:
	// constructor
	HumanPlayer();
	~HumanPlayer();

	// user should input the guess number
	virtual int getGuess();
};

