#pragma once
class Field {
public:
	Field();
	void setTurnSequence(char first, char second);
	char getTurn();
	char* getArray();
	void show();
	bool makeAMove(int index);
private:
	int turn = 0;
	char players[2];
	char arr[9];
};