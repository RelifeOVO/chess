#include <iostream>
#include "ChessGame.h"
#include "tools.h"


int main(void) {
	//Chess chess;
	Chess chess(13, 44, 43, 67.4);
	Man man;
	AI ai;
	ChessGame game(&man, &ai, &chess);


	game.play();

	return 0;
}