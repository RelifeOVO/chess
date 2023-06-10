#pragma once
#include <graphics.h>
#include <vector>
using namespace std;


struct ChessPos //棋子的位置
{
	int row;
	int col;
	ChessPos(int r = 0, int c = 0) :row(r), col(c) {}
};

typedef enum
{
	CHESS_WHITE = -1, //白棋子
	CHESS_BLACK = 1 //黑棋子
}chess_kind_t;

class Chess
{
public:
	void init(); //初始化
	bool clickBoard(int x, int y, ChessPos* pos); //落子位置是否有效
	void chessDown(ChessPos* pos, chess_kind_t kind); //落子(参数：位置和棋子颜色)
	int getGradeSize(); //获取棋盘的大小
	bool checkOver(); //检查是否结束
	bool checkWin(); //检查是否胜利

	int getChessData(ChessPos* pos); //获取指定位置的棋子数据
	int getChessData(int row, int col);

	Chess(int gradeSize, int marginX, int marginY, float chessSize); //构造函数

	ChessPos lastPos; //上次落子的位置

private:
	// 棋盘尺寸
	int gradeSize;
	float margin_x;//49;
	int margin_y;// 49;
	float chessSize; //棋子大小（棋盘方格大小）

	IMAGE chessBlackImg;
	IMAGE chessWhiteImg;

	// 存储当前游戏棋盘和棋子的情况,空白为0，黑子1，白子-1
	vector<vector<int>> chessMap;

	// 标示下棋方, true:黑棋方  false: AI 白棋方（AI方）
	bool playerFlag;

	void updateGameMap(ChessPos* pos);
};

