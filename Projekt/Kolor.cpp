#include "Header.h"
//Zmiana kolorów
void kolor(int c) {
	if (c == 420) {
		c = (rand() % 10) + 1;
		if (c == 8) {
			c = (rand() % 6) + 1;
		}
	}
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, c);
}