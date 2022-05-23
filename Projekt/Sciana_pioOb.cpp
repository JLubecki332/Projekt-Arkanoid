#include "Header.h"
void sciana_pioOb(int x, int y, int* vy, int* vx, int ekran[25][80]) {
	if (ekran[y][x] == 3) {
		*vx = -1 * (*vx);
	}
}