#pragma once
#include "Field.h"
#include "Helper.h"
#include "Match.h"
class Game {
public:
	Game();
	char play(); //Возвращает символ победителя
	// 'x' - крестик, 'o' - нолик, 'd' - ничья
protected:
	bool handleInput();
	Field field;
	Helper helper;
	Match match;
	int turnsLeft;
	char winner = '-';
};