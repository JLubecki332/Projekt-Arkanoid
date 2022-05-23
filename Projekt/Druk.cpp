#include "Header.h"
//Druk informacji na ekranie gry
void druk(int ps, int ds, int gs, int ls) {
	kolor(7);
	gotoxy(ls+1, ds +2); printf("ESC - koniec");
	gotoxy(ls+1, ds +3); printf("A/strzalka w lewo - ruch w lewo");
	gotoxy(ls+1, ds +4); printf("D/strzalka w prawo - ruch w prawo");
	gotoxy(ps +2, gs+1); printf("Punkty");
	gotoxy(ps + 10, gs + 1); printf("Zbite");
	gotoxy(ps + 17, gs + 1); printf("Pozostalo");
}