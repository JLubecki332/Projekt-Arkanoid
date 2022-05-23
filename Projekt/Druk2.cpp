#include "Header.h"
//Druk elementów na ekranie startowym gry
void druk2(int x, int y, int xp, int yp, int* poz, int* wyborpa, int* wyborpi, int xprz, int yprz, int xprz1, int yprz1, int xprz2, int yprz2) {
	if (*poz == 1) {
		int cpi = *wyborpi;
		int cpa = *wyborpa;
		if (*wyborpi == 8) {
			cpi = (rand() % 11) + 1;
		}
		if (*wyborpa == 8) {
			cpa = (rand() % 11) + 1;
		}
		kolor(cpi);
		gotoxy(x, y);  printf("o");
		kolor(cpa);
		gotoxy(xp, yp);  printf("=======");
		Sleep(250);
		gotoxy(x, y);  printf(" ");
		gotoxy(xp, yp);  printf("       ");
	}
	if (*poz == 2) {
		int cpi = *wyborpi;
		int cpa = *wyborpa;
		if (*wyborpi == 8) {
			cpi = (rand() % 11) + 1;
		}
		if (*wyborpa == 8) {
			cpa = (rand() % 11) + 1;
		}
		kolor(cpi);
		gotoxy(x, y);  printf("o");
		kolor(cpa);
		gotoxy(xp, yp);  printf("=====");
		kolor((rand() % 10) + 1);
		gotoxy(xprz1, yprz1); printf("°±±");
		gotoxy(xprz2, yprz2); printf("±±°");
		Sleep(250);
		gotoxy(x, y);  printf(" ");
		gotoxy(xp, yp);  printf("     ");
		gotoxy(xprz1, yprz1); printf("   ");
		gotoxy(xprz2, yprz2); printf("   ");
	}
	if (*poz == 3) {
		int cpi = *wyborpi;
		int cpa = *wyborpa;
		if (*wyborpi == 8) {
			cpi = (rand() % 11) + 1;
		}
		if (*wyborpa == 8) {
			cpa = (rand() % 11) + 1;
		}
		kolor(cpi);
		gotoxy(x, y);  printf("o");
		kolor(cpa);
		gotoxy(xp, yp);  printf("=====");
		kolor((rand() % 2) + 4);
		gotoxy(xprz, yprz); printf("±±°");
		gotoxy(xprz1, yprz1); printf("°±±");
		gotoxy(xprz2, yprz2); printf("±±°");
		Sleep(250);
		gotoxy(x, y);  printf(" ");
		gotoxy(xp, yp);  printf("     ");
		gotoxy(xprz, yprz); printf("    ");
		gotoxy(xprz1, yprz1); printf("   ");
		gotoxy(xprz2, yprz2); printf("   ");
	}
}