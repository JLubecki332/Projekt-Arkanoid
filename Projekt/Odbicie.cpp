#include "Header.h"
//Funkcja odbicia od paletki w zale¿noœci od wybranego poziomu
void paletka(int* x,
	int y,
	int xp,
	int* vy,
	int *vx,
	int* punkty,
	int yp, 
	int ls,
	int ps, 
	int *poz,
	int ekran[25][80],
	int xprz, 
	int yprz,
	int xprz1,
	int yprz1, 
	int xprz2,
	int yprz2) 
{

	if(*poz == 3) {
		if ((yp == y) && ((*x >= xp) && (*x <= xp + 4)) ||
			((yprz == y) && ((*x >= xprz - 1) && (*x <= xprz + 2))) ||
			((yprz1 == y) && ((*x >= xprz1) && (*x <= xprz1 + 3))) ||
			((yprz2 == y) && ((*x >= xprz2 - 1) && (*x <= xprz2 + 2))))
		{
			Beep(1050, 2);
			(*vy) = -1 * (*vy);
			*x = (*x) + rand() % 2;
		}
	}
	else{
		if ((yp == y) && ((*x >= xp) && (*x <= xp + 6)))
		{
			Beep(1050, 2);
			(*vy) = -1 * (*vy);
				*x = (*x) + rand() % 2;
		}
	}
	
}