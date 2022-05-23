#include "Header.h"
//Gra w samouczku
int gras(int* poz, int* wyborpa, int* wyborpi) {
	int x, y, vx, vy;
	int xp, yp, vxp, vyp;
	int xprz, yprz, vyprz;
	int xprz1, yprz1, vyprz1;
	int xprz2, yprz2, vyprz2;

	int liczba = 0;
	int punkty1 = 0;
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
	druk2(x, y, xp, yp, poz, wyborpa, wyborpi, xprz, yprz, xprz1, yprz1, xprz2, yprz2);
	while (punkty != 50)
	{
		ShowCursor(false);
		kolor(420);
		ramka(ps + 1, gs + 5, ps + 42, gs + 12);
		kolor(14);
		gotoxy(ps + 14, gs + 7);
		printf("S A M O U C Z E K \n");
		kolor(7);
		gotoxy(ps + 5, gs + 9);
		printf("Grasz na poziomie latwym na");
		gotoxy(ps + 5, gs + 10);
		printf("kolejnych nie bedzie tak latwo ;)");
		animacja(x, y, xp, yp, poz, wyborpa, wyborpi, xprz, yprz, xprz1, yprz1, xprz2, yprz2);
		ruch(&x, &y, &vx, &vy, &punkty, &punkty1, ls, ps, ds, gs, ekran, poz, &xprz, &yprz, &vyprz, &xprz1, &yprz1, &vyprz1, &xprz2, &yprz2, &vyprz2, &liczba);
		paletka(&x, y, xp, &vy, &vx, &punkty, yp, ls, ps, poz, ekran, xprz, yprz, xprz1, yprz1, xprz2, yprz2);
		klaw(&yp, &xp, &vxp, &koniec, ps, ls, poz);
		druk1(&punkty, ps, gs, &punkty1, &liczba);
	}
	ShowCursor(true);
	return punkty;
}