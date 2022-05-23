#include "Header.h"
//G³ówny plik gry
int gra(int *poz, int *wyborpa, int *wyborpi) {
	int x, y, vx, vy;
	int xp, yp, vxp, vyp;
	int xprz, yprz, vyprz;
	int xprz1, yprz1, vyprz1;
	int xprz2, yprz2, vyprz2;

	int liczba = 0;
	int punkty1 = 0;
	int liczba1;
	int ls = 1;
	int ps = 60;
	int ds = 25;
	int gs = 1;
	char ch1 = ' ';
	int koniec = 1;
	int punkty = 0;
	int ekran[25][80];
	

	inicjacja(&x, &y, &vx, &vy, &xp, &yp, &vxp, &vyp, ls, ps, ds, gs, poz, &xprz, &yprz, &vyprz, &xprz1, &yprz1, &vyprz1, &xprz2, &yprz2, &vyprz2);
	s_pocz(ls, ps, ds, gs, poz);
	druk(ps, ds, gs, ls);
	tablica(ekran, ps, ls, ds, gs, poz, &liczba);
	liczba1 = liczba;
	druk2(x, y, xp, yp, poz, wyborpa, wyborpi, xprz, yprz, xprz1, yprz1, xprz2, yprz2);
	while (koniec) {
		ShowCursor(false);
		animacja(x, y, xp, yp, poz, wyborpa, wyborpi, xprz, yprz, xprz1, yprz1, xprz2, yprz2);
		ruch(&x, &y, &vx, &vy, &punkty, &punkty1, ls, ps, ds, gs, ekran, poz, &xprz, &yprz, &vyprz, &xprz1, &yprz1, &vyprz1, &xprz2, &yprz2, &vyprz2, &liczba);
		paletka(&x, y, xp, &vy, &vx, &punkty, yp, ls, ps, poz, ekran, xprz, yprz, xprz1, yprz1, xprz2,yprz2);
		klaw(&yp, &xp, &vxp, &koniec, ps, ls, poz);
		druk1(&punkty, ps, gs, &punkty1, &liczba);
		if (punkty1 == liczba1) {
			break;
		}
	}
	system("CLS");
	if (punkty1 == liczba1) {
		kolor(14);
		gotoxy(1, 1);
		printf("##    ##  #######  ##    ## #### ########  ######      ######   ########  ##    ## ");
		gotoxy(1, 2);
		printf("##   ##  ##     ## ###   ##  ##  ##       ##    ##    ##    ##  ##     ##  ##  ##  ");
		gotoxy(1, 3);
		printf("##  ##   ##     ## ####  ##  ##  ##       ##          ##        ##     ##   ####   ");
		gotoxy(1, 4);
		printf("#####    ##     ## ## ## ##  ##  ######   ##          ##   #### ########     ##    ");
		gotoxy(1, 5);
		printf("##  ##   ##     ## ##  ####  ##  ##       ##          ##    ##  ##   ##      ##    ");
		gotoxy(1, 6);
		printf("##   ##  ##     ## ##   ###  ##  ##       ##    ##    ##    ##  ##    ##     ##    ");
		gotoxy(1, 7);
		printf("##    ##  #######  ##    ## #### ########  ######      ######   ##     ##    ##    ");
		gotoxy(1, 10);
		printf(" ######   ########     ###    ######## ##     ## ##          ###     ######        ## ########    #### ");
		gotoxy(1, 11);
		printf("##    ##  ##     ##   ## ##      ##    ##     ## ##         ## ##   ##    ##       ## ##          #### ");
		gotoxy(1, 12);
		printf("##        ##     ##  ##   ##     ##    ##     ## ##        ##   ##  ##             ## ##          #### ");
		gotoxy(1, 13);
		printf("##   #### ########  ##     ##    ##    ##     ## ##       ##     ## ##             ## ######       ##  ");
		gotoxy(1, 14);
		printf("##    ##  ##   ##   #########    ##    ##     ## ##       ######### ##       ##    ## ##               ");
		gotoxy(1, 15);
		printf("##    ##  ##    ##  ##     ##    ##    ##     ## ##       ##     ## ##    ## ##    ## ##          #### ");
		gotoxy(1, 16);
		printf(" ######   ##     ## ##     ##    ##     #######  ######## ##     ##  ######   ######  ########    #### ");
		gotoxy(1, 18);
		printf("Twoj wynik to: %d", punkty);
		Sleep(3000);
	}
	else {
		kolor(14);
		gotoxy(1, 1);
		printf("##    ##  #######  ##    ## #### ########  ######      ######   ########  ##    ## ");
		gotoxy(1, 2);
		printf("##   ##  ##     ## ###   ##  ##  ##       ##    ##    ##    ##  ##     ##  ##  ##  ");
		gotoxy(1, 3);
		printf("##  ##   ##     ## ####  ##  ##  ##       ##          ##        ##     ##   ####   ");
		gotoxy(1, 4);
		printf("#####    ##     ## ## ## ##  ##  ######   ##          ##   #### ########     ##    ");
		gotoxy(1, 5);
		printf("##  ##   ##     ## ##  ####  ##  ##       ##          ##    ##  ##   ##      ##    ");
		gotoxy(1, 6);
		printf("##   ##  ##     ## ##   ###  ##  ##       ##    ##    ##    ##  ##    ##     ##    ");
		gotoxy(1, 7);
		printf("##    ##  #######  ##    ## #### ########  ######      ######   ##     ##    ##    ");
		gotoxy(1, 9);
		printf("Twoj wynik to: %d", punkty);
		Sleep(3000);
	}
	system("CLS");
	ShowCursor(true);
	return punkty;
}