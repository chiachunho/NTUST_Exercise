// Student ID: B10615043
// Date: May 29, 2018
// Last Update: May 29, 2018
// Problem statement: This C++ header to declare class Player.
#pragma once
#include <iostream>

using namespace std;

class Player
{
public:
	// constructor
	Player();
	~Player();

	// getGuess function
	virtual int getGuess();

	// Helper function for getGuess()
	static void resetRange();
	static void setRange(char mode, int number);
	static void printRange();
protected:
	// Static data member to record guessNumber range
	static int begin;
	static int end;
};

// Some other functions
bool checkForWin(int guess, int answer);
void play(Player &player1, Player &player2);