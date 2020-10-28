#include<iostream>
#include "Field.h"
Field::Field() {
	for (int i = 0; i < 9; ++i)
		arr[i] = '-';
}

void Field::setTurnSequence(char first, char second) {
	players[0] = first;
	players[1] = second;
}

char Field::getTurn() {
	return players[turn];
}

char* Field::getArray() {
	return arr;
}

bool Field::makeAMove(int index) {
	if (arr[index] == '-') {
		arr[index] = players[turn];
		turn = 1 - turn;
		return true;
	}
	return false;
}

void Field::show() {
	std::cout << arr[6] << arr[7] << arr[8] << std::endl;
	std::cout << arr[3] << arr[4] << arr[5] << std::endl;
	std::cout << arr[0] << arr[1] << arr[2] << std::endl;
}