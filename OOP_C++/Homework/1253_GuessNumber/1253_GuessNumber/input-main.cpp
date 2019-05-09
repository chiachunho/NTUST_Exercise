#include "Player.h"
#include "HumanPlayer.h"
#include "ComputerPlayer.h"

// Main
int main()

{
	HumanPlayer playerH1, playerH2;
	ComputerPlayer playerC1, playerC2;

	play(playerH1, playerH2);
	play(playerH1, playerC1);
	play(playerC1, playerC2);

	return 0;
}