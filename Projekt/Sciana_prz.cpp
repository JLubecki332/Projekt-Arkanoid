#include "Header.h"
//Funkcja odbicia przeszkód od œcian poziomych
int sciana_prz(int ds, int yprz, int vyprz, int yprz1, int vyprz1, int yprz2, int vyprz2, int *poz)//œciany dla przeszkód
{
	if (*poz == 2) {
		if (yprz1 = ((ds / 2)) | (ds)) {
			vyprz1 = -1 * vyprz1;
		}
		
		if (yprz2 >= ((ds / 2) + 4) || yprz2 <= ((ds / 2) + 6)) {
			vyprz2 = -1 * vyprz2;
		}
	}
	if (*poz == 3) {
		if (yprz >= ((ds / 2) + 3) || yprz <= ((ds / 2) - 2)) {
			vyprz = -1 * vyprz;
		}
		if (yprz1 >= ((ds / 2)) || yprz1 <= ((ds / 2) - 5)) {
			vyprz1 = -1 * vyprz1;
		}
		if (yprz2 >= ((ds / 2) - 4) || yprz2 <= ((ds / 2) - 9)) {
			vyprz2 = -1 * vyprz2;
		}
		
	}
	return vyprz1;
	return vyprz2;
}