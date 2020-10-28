#include <iostream>
#include "Helper.h"

void Helper::show() {
	if (isOpened)
		std::cout << "Управление\n7 8 9\n4 5 6\n1 2 3\nСкрыть управление - 0" << std::endl;
	else
		std::cout << "Показать управление - 0" << std::endl;
}

void Helper::expand() {
	isOpened = !isOpened;
}