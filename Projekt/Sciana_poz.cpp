#include "Header.h"
//Funkcja odbicia pi³eczki od œcian poziomych
int sciana_poz1(int y, int vy, int* punkty, int ds, int gs, int ps, int ls, int* poz) {
	if (y <= gs) {
		y = gs + 2;
		vy = -1 * vy;
		ramkaG(poz, ls, gs, ps, ds);
	}
	if (y >= ds) {
		y = ds - 2;
		vy = -1 * vy;
		ramkaG(poz, ls, gs, ps, ds);
	}
	if (y > ds-2) {
		(*punkty)--;
	}
	return vy;
}
