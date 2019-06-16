#pragma once
using namespace std;

#include "Board.h"
#include "Slot.h"
#include <string>
#include <iostream>


void runner()
{
	Board monopoly;
	Player players[2] = { Player("Stav",monopoly, 350), Player("Ronen",monopoly, 350) };
	cout << monopoly;
	for (int i = 0; i < Player::get_counter(); i++)
		cout << players[i];
	monopoly.play(players);
	return;
}

int main()
{
	runner();
	cout << "Leaks: " << _CrtDumpMemoryLeaks() << endl;

	return 0;
}