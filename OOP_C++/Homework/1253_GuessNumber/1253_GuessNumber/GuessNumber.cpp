// Student ID: B10615043
// Date: May 29, 2018
// Last Update: May 29, 2018
// Problem statement: This C++ program to implement function.
#include "Player.h"

// you can modify the following codes to let your ¡§guess¡¨ more smarter

bool checkForWin(int guess, int answer)
{
	if (answer == guess)
	{
		cout << "You're right! You win!" << endl;
		Player::resetRange();
		return true;
	}
	else if (answer < guess)
	{
		cout << "Your guess is too high." << endl;
		Player::setRange('h', guess);
		Player::printRange();
	}

	else
	{
		cout << "Your guess is too low." << endl;
		Player::setRange('l', guess);
		Player::printRange();
	}
	return false;
}

void play(Player &player1, Player &player2)
{
	int answer = 0, guess = 0;

	answer = rand() % 101;
	bool win = false;
	while (!win)
	{
		cout << "Player 1's turn to guess." << endl;
		guess = player1.getGuess();
		win = checkForWin(guess, answer);
		if (win) return;
		cout << "Player 2's turn to guess." << endl;
		guess = player2.getGuess();
		win = checkForWin(guess, answer);
	}

}