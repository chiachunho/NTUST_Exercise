// Student ID: B10615043
// Date: May 29, 2018
// Last Update: May 29, 2018
// Problem statement: This C++ header to implement class ComputerPlayer.
#include "ComputerPlayer.h"

ComputerPlayer::ComputerPlayer()
{
}

ComputerPlayer::~ComputerPlayer()
{
}

// Let computer to guess number smarter
int ComputerPlayer::getGuess()
{
	int guess = (Player::begin + Player::end) / 2;
	cout << "computer guess " << guess << endl;

	return guess;
}
