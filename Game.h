#pragma once
#include "Field.h"
#include "Helper.h"
#include "Match.h"
class Game {
public:
	Game();
	char play(); //���������� ������ ����������
	// 'x' - �������, 'o' - �����, 'd' - �����
protected:
	bool handleInput();
	Field field;
	Helper helper;
	Match match;
	int turnsLeft;
	char winner = '-';
};