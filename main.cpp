#include <iostream>
#include "Game.h"
using namespace std;



int main() {
    setlocale(0, "ru");
    Game game;
    char winner = game.play();
    if (winner != 'd')
        cout << "\nПобедил " << winner << "!";
    else 
        cout << "Ничья!";
 }
