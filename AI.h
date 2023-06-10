#pragma once
#include "Chess.h"

class AI
{
public:
	void init(Chess *chess); //初始化棋盘
	void go(); //自动下棋
private:
	Chess* chess;
	// 存储各个点位的评分情况，作为AI下棋依据
	vector<vector<int>> scoreMap;

	void calculateScore(); //实现评分计算
	ChessPos think();  //AI实现思考（即遍历找出评分最高的位置）
};

