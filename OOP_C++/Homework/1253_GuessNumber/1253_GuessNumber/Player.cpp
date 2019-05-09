// Student ID: B10615043
// Date: May 29, 2018
// Last Update: May 29, 2018
// Problem statement: This C++ header to implement class Player.
#include "Player.h"

int Player::begin = 0;
int Player::end = 0;

Player::Player()
{
}

Player::~Player()
{
}

int Player::getGuess()
{
	return 0;
}

void Player::resetRange()
{
	Player::begin = 0;
	Player::end = 100;
}

void Player::setRange(char mode, int number)
{
	if (mode == 'h')
	{
		Player::end = number;
	}
	else if (mode == 'l')
	{
		Player::begin = number;
	}
}

void Player::printRange()
{
	cout << Player::begin << "~" << Player::end << endl;
}
