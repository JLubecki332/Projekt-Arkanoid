#include "Header.h"
//Druk punktów, zbitych obiektów oraz pozosta³ych obiektów na ekranie gry
void druk1(int* punkty, int ps, int gs, int *punkty1, int *liczba) {
	if (*punkty < 0) {
		*punkty = 0;
	}
	kolor(7);
	gotoxy(ps +2, gs+2); printf("     ");
	gotoxy(ps +2, gs+2); printf("%i", *punkty);
	gotoxy(ps + 10, gs + 2); printf("     ");
	gotoxy(ps + 10, gs + 2); printf("%i", *punkty1);
	gotoxy(ps + 17, gs + 2); printf("     ");
	gotoxy(ps + 17, gs + 2); printf("%i", *liczba);
}