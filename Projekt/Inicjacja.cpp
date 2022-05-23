#include "Header.h"
//Nadanie wartoœci po³o¿eñ elementów w grze zale¿nie od wybranego poziomu
void inicjacja(int* x, int* y, int* vx, int* vy, int* xp, int* yp, int* vxp, int* vyp, int ls, int ps, int ds , int gs, int *poz, int* xprz, int* yprz, int* vyprz, int* xprz1, int* yprz1, int* vyprz1, int* xprz2, int* yprz2, int* vyprz2) {
	
	
	if (*poz == 1) {
		*vx = 1; *vy = 1;
		*vxp = 2; *vyp = 1;
		*xp = (ps / 2)-3;
	}
	if (*poz == 2) {
		*vx = 1; *vy = 1;
		*vxp = 3; *vyp = 1;
		*xprz1 = (ps / 3) + 3; *yprz1 = (ds / 2) + 3;
		*xprz2 = (ps / 4) + 3; *yprz2 = (ds / 2) + 5;
		*vyprz1 = 0;
		*vyprz2 = 0;
		*xp = (ps / 2) - 2;
	}
	if (*poz == 3) {
		*xprz = (ps / 2) + 3; *yprz = (ds / 2);
		*xprz1 = (ps / 3) + 3; *yprz1 = (ds / 2) + (ds/4);
		*xprz2 = (ps / 4) + 3; *yprz2 = (ds / 2) + (ds / 3);
		*vx = 1; *vy = 1;
		*vxp = 4; *vyp = 1;
		*vyprz = 0;
		*vyprz1 = 0;
		*vyprz2 = 0;
		*xp = (ps / 2) - 2;
	}
	*yp = ds - 3;
	*x = ps / 2; *y = *yp - 1;
}