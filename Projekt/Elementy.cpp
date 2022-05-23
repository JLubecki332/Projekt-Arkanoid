#include "Header.h"
//Funkcja odbicia od elementów i punktacji podczas gry
void elem(int x, int y, int* vy, int* vx, int* punkty, int ekran[25][80], int ps, int ds, int* poz, int* punkty1, int* liczba) {
	if (ekran[y][x] == 1) {
		*vy = -1 * (*vy);
		ekran[y][x] = 0;
		(*punkty)++;
		(*punkty1)++;
		(*liczba)--;
		Beep(1500, 5);
	}
	if (ekran[y][x] == 2) {
		*vy = -1 * (*vy);
		kolor(7);
		gotoxy(x, y);  printf("O");
	}
	if (ekran[y][x] == 3) {
		*vx = -1 * (*vx);
		kolor(7);
		gotoxy(x, y);  printf("O");
	}
	if (ekran[y][x] == 4) {
		*vx = -1 * (*vx);
		*vy = -1 * (*vy);
		kolor(7);
		gotoxy(x, y);  printf("O");
	}
}