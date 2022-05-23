#include "Header.h"
//Funkcja ruchu elementów w grze
void ruch(int* x, int* y, int* vx, int* vy, int* punkty, int* punkty1, int ls, int ps, int ds, int gs, int ekran[25][80], int* poz, int* xprz, int* yprz, int* vyprz, int* xprz1, int* yprz1, int* vyprz1, int* xprz2, int* yprz2, int* vyprz2, int* liczba) {
	elem(*x, *y, vy, vx, punkty, ekran, ps, ds, poz, punkty1, liczba);
	*x = *x + *vx;
	*y = *y + *vy;
	*xprz = *xprz + 1;
	*yprz = *yprz + *vyprz;
	*xprz1 = *xprz1 - 1;
	*yprz1 = *yprz1 + *vyprz1;
	*xprz2 = *xprz2 + 1;
	*yprz2 = *yprz2 + *vyprz2;
	sciana_pio1(x, vx, ls, ps, gs, ds, poz, xprz, xprz1, xprz2);
	*vy = sciana_poz1(*y, *vy, punkty, ds, gs, ps, ls, poz);
	*vyprz = sciana_prz(ds, *yprz, *vyprz, *yprz1, *vyprz1, *yprz2, *vyprz2, poz);
	*vyprz1 = sciana_prz(ds, *yprz, *vyprz, *yprz1, *vyprz1, *yprz2, *vyprz2, poz);
	*vyprz2 = sciana_prz(ds, *yprz, *vyprz, *yprz1, *vyprz1, *yprz2, *vyprz2, poz);
}