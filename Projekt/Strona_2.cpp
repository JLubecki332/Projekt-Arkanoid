#include "Header.h"
//Ekran ³adowania gry
void s_pocz(int ls, int ps, int ds, int gs, int* poz) {
	ShowCursor(false);
	gotoxy(0, 0);
	kolor(14);
	printf(" *   ###    ######   ##   ##    ###    ##   ##   #####    ######  ##### *\n"); Sleep(5);
	printf(" *  ## ##   ##   ##  ##  ##    ## ##   ###  ##  ##   ##     ##    ##  ## *\n"); Sleep(5);
	printf(" * ##   ##  ##   ##  ## ##    ##   ##  #### ##  ##   ##     ##    ##   ## *\n"); Sleep(5);
	printf(" * ##   ##  ##   ##  ####     ##   ##  ## ####  ##   ##     ##    ##   ## *\n"); Sleep(5);
	printf(" * #######  ######   ## ##    #######  ##  ###  ##   ##     ##    ##   ## *\n"); Sleep(5);
	printf(" * ##   ##  ##  ##   ##  ##   ##   ##  ##   ##  ##   ##     ##    ##  ## *\n"); Sleep(5);
	printf(" * ##   ##  ##   ##  ##   ##  ##   ##  ##   ##   #####    ######  ##### *\n"); Sleep(5);
	printf("\n");
	ramka(1, 9, 74, 13);
	for (int i = 3; i < 73; i++) {
		if (i < 65) {
			Beep(3700 + (i * 20), 2);
		}
		kolor(7);
		gotoxy(i, 10);
		printf("±");
		gotoxy(i, 11);
		printf("±");
		gotoxy(i, 12);
		printf("±");
		Sleep(75);
	}
	Sleep(1000);
	ShowCursor(true);
	system("CLS");
	ramkaG(poz, ls, gs, ps, ds);
}