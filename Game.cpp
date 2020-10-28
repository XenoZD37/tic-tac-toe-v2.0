#include <iostream>
#include "Game.h"
Game::Game() {
	field.setTurnSequence('x', 'o');
	turnsLeft = 9;
}

char Game::play() {
	while (true) {
		system("cls");
		field.show();
		if (winner != '-')
			return winner;
		helper.show();
		if (handleInput())
			turnsLeft--;
		int temp = match.matchArr(field.getArray());
		if (temp == 1)
			winner = 'x';
		if (temp == -1)
			winner = 'o';
		if (turnsLeft == 0)
			winner = 'd';
	}
}

bool Game::handleInput() {
	int index;
	std::cout << "Ходит " << field.getTurn() << ": ";
	std::cin >> index;
	if (index == 0) {
		helper.expand();
		return false;
	}
	index--;
	if (index >= 0 && index <= 8)
		return field.makeAMove(index);
}