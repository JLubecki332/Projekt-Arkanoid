#include "Header.h"
//Funkcja rysowania ramki
void ramka(int x, int y, int dx, int dy) {
	char aa;
	aa = 201;
	gotoxy(x, y); printf("%c", aa);
	aa = 187;
	gotoxy(dx, y); printf("%c", aa);
	aa = 200;
	gotoxy(x, dy); printf("%c", aa);
	aa = 188;
	gotoxy(dx, dy); printf("%c", aa);
	for (int i = x + 1; i < dx; i++) {
		aa = 205;
		gotoxy(i, y); printf("%c", aa);
		gotoxy(i, dy); printf("%c", aa);
	}
	for (int i = y + 1; i < dy; i++) {
		aa = 186;
		gotoxy(x, i); printf("%c", aa);
		gotoxy(dx, i); printf("%c", aa);

	}
}