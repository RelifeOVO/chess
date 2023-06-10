#pragma once
#include "Chess.h"

class Man
{
public:
	void init(Chess *chess); //³õÊ¼»¯ÆåÅÌ
	void go(); //ÏÂÆå
private:
	Chess* chess;
};

