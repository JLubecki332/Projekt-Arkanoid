#include "Header.h"
//Ramki w grze
void ramkaG(int* poz, int ls, int gs, int ps, int ds) {
	if (*poz == 1) {
		kolor(2);
		ramka(ls, gs, ps, ds);
		kolor(14);
		ramka(ps + 1, gs, ps + 8, gs + 3);
		ramka(ps + 9, gs, ps + 15, gs + 3);
		ramka(ps + 16, gs, ps + 26, gs + 3);
		ramka(ls, ds + 1, ls + 36, ds + 5);
	}
	if (*poz == 2) {
		kolor(9);
		ramka(ls, gs, ps, ds);
		kolor(14);
		ramka(ps + 1, gs, ps + 8, gs + 3);
		ramka(ps + 9, gs, ps + 15, gs + 3);
		ramka(ps + 16, gs, ps + 26, gs + 3);
		ramka(ls, ds + 1, ls + 36, ds + 5);
	}
	if (*poz == 3) {
		kolor(5);
		ramka(ls, gs, ps, ds);
		kolor(14);
		ramka(ps + 1, gs, ps + 8, gs + 3);
		ramka(ps + 9, gs, ps + 15, gs + 3);
		ramka(ps + 16, gs, ps + 26, gs + 3);
		ramka(ls, ds + 1, ls + 36, ds + 5);
	}
}