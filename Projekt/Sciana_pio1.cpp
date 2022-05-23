#include "Header.h"
//Funkcja odbicia pi³eczki od œcian pionowych
void sciana_pio1(int* x, int* vx, int ls, int ps, int gs, int ds, int* poz, int* xprz, int* xprz1, int* xprz2) {
	if (*poz == 1) {
		if ((*x > ps - 3) || (*x < ls + 3)) {
			if (*x > ps - 2) {
				*x = ps - 3;
				ramkaG(poz, ls, gs, ps, ds);
				*vx = -1 * (*vx);
			}
			if (*x < ls + 2) {
				*x = ls + 3;
				ramkaG(poz, ls, gs, ps, ds);
				*vx = -1 * (*vx);
			}
		}
	}
	if (*poz == 2 || *poz == 3) {
		if ((*x > ps - 1) || (*x < ls + 1)) {
			if (*x > ps - 1) {
				*x = ps - 2;
				ramkaG(poz, ls, gs, ps, ds);
				*vx = -1 * (*vx);
			}
			if (*x < ls + 1) {
				*x = ls + 2;
				ramkaG(poz, ls, gs, ps, ds);
				*vx = -1 * (*vx);
			}
		}
		if (*xprz > ps - 4) {
			*xprz = ls + 1;
			ramkaG(poz, ls, gs, ps, ds);
		}
		if (*xprz1 < ls + 4) {
			*xprz1 = ps - 4;
			ramkaG(poz, ls, gs, ps, ds);
		}
		if (*xprz2 > ps - 4) {
			*xprz2 = ls + 1;
			ramkaG(poz, ls, gs, ps, ds);
		}
	}
}
