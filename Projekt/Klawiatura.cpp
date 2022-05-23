#include "Header.h"
//Sterowanie paletk¹
void klaw(int* yp, int* xp, int* vxp, int* koniec, int ps, int ls, int *poz) {
	char ch1 = ' ';
	while (_kbhit()) {
		ch1 = _getch();
		if (ch1 == ' ')
			*vxp = -1 * (*vxp);
		if (ch1 == 'a') *xp = *xp - *vxp;
		if (ch1 == 'd') *xp = *xp + *vxp;
		if (ch1 == 75) *xp = *xp - *vxp;
		if (ch1 == 77) *xp = *xp + *vxp;
		if (ch1 == 27) *koniec = 0;
		if (*poz == 1) {
			if (*xp > ps - 8) *xp = ps - 8;
			if (*xp < ls + 2) *xp = ls + 2;
		}
		if (*poz == 2 || *poz == 3) {
			if (*xp > ps - 5) *xp = ps - 5;
			if (*xp < ls + 1) *xp = ls + 1;
		}
		
	}
}