#pragma once
#include "Chess.h"

class AI
{
public:
	void init(Chess *chess); //��ʼ������
	void go(); //�Զ�����
private:
	Chess* chess;
	// �洢������λ�������������ΪAI��������
	vector<vector<int>> scoreMap;

	void calculateScore(); //ʵ�����ּ���
	ChessPos think();  //AIʵ��˼�����������ҳ�������ߵ�λ�ã�
};

