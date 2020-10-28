#include "Match.h"

int Match::matchArr(char* arr) {
	for (int i = 0; i < 8; i++) {
		char liter = arr[conditions[i][0]];
		if (liter != '-' && liter == arr[conditions[i][1]] && liter == arr[conditions[i][2]])
			return liter == 'x' ? 1 : -1;
	}
	return 0;
}
