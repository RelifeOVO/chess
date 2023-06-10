#pragma once
#include <graphics.h>
#include <vector>
using namespace std;


struct ChessPos //���ӵ�λ��
{
	int row;
	int col;
	ChessPos(int r = 0, int c = 0) :row(r), col(c) {}
};

typedef enum
{
	CHESS_WHITE = -1, //������
	CHESS_BLACK = 1 //������
}chess_kind_t;

class Chess
{
public:
	void init(); //��ʼ��
	bool clickBoard(int x, int y, ChessPos* pos); //����λ���Ƿ���Ч
	void chessDown(ChessPos* pos, chess_kind_t kind); //����(������λ�ú�������ɫ)
	int getGradeSize(); //��ȡ���̵Ĵ�С
	bool checkOver(); //����Ƿ����
	bool checkWin(); //����Ƿ�ʤ��

	int getChessData(ChessPos* pos); //��ȡָ��λ�õ���������
	int getChessData(int row, int col);

	Chess(int gradeSize, int marginX, int marginY, float chessSize); //���캯��

	ChessPos lastPos; //�ϴ����ӵ�λ��

private:
	// ���̳ߴ�
	int gradeSize;
	float margin_x;//49;
	int margin_y;// 49;
	float chessSize; //���Ӵ�С�����̷����С��

	IMAGE chessBlackImg;
	IMAGE chessWhiteImg;

	// �洢��ǰ��Ϸ���̺����ӵ����,�հ�Ϊ0������1������-1
	vector<vector<int>> chessMap;

	// ��ʾ���巽, true:���巽  false: AI ���巽��AI����
	bool playerFlag;

	void updateGameMap(ChessPos* pos);
};

