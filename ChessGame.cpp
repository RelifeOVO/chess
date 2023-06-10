#include "ChessGame.h"

ChessGame::ChessGame(Man* man, AI* ai, Chess* chess)
{
	this->man = man;
	this->ai = ai;
	this->chess = chess;

	ai->init(chess);
	man->init(chess);
}



void ChessGame::play() //开始五子棋游戏
{
	chess->init();
	while (1) {
		man->go();
		if (chess->checkOver()) {
			chess->init();;
			continue;
		}

		ai->go();
		if (chess->checkOver()) {
			chess->init();
			continue;
		}
	}
}