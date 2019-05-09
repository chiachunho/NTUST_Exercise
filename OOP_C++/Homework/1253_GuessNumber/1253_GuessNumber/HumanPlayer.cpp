// Student ID: B10615043
// Date: May 29, 2018
// Last Update: May 29, 2018
// Problem statement: This C++ header to implement class HumanPlayer.
#include "HumanPlayer.h"

HumanPlayer::HumanPlayer()
{
}


HumanPlayer::~HumanPlayer()
{
}


// user should input the guess number
int HumanPlayer::getGuess()
{
	int guess;
	cin >> guess;

	return guess;
}
