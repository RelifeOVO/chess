#pragma once
#include "Man.h"
#include "AI.h"
#include "Chess.h"


class ChessGame
{
public:
	ChessGame(Man*, AI*, Chess*);
	void play(); //开始对局

private:
	Man* man;
	AI* ai;
	Chess* chess;
};

