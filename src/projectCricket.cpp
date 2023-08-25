//============================================================================
// Name        : projectCricket.cpp
// Author      : Sai Kumar Bodapatla
// Version     : 1.0
// Copyright   : SK copyright
// Description : Cricket application, using c++
//============================================================================

#include "game.h"
using namespace std;


int main() {

	Game game;
	game.welcome();

	cout << "\nPress Enter to continue";
	cin.get();

    game.showAllPlayers();

	cout << "\nPress Enter to continue";
	cin.get();

	game.selectPlayers();
	game.showTeamPlayers();

    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout << "\nPress Enter to toss";
    cin.get();

    game.toss();

    game.startFirstInnings();

    game.startSecondInnings();

    game.summary();

	return 0;
}
