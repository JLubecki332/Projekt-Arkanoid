#include "Header.h"
//Rysowanie elementów na ekranie gry

void tablica(int ekran[25][80], int ps, int ls, int ds, int gs, int* poz, int* liczba) {
	if (*poz == 1) {
		//obiekty do zbicia
		for (int i = gs + 3; i < ds / 2; i++) {
			for (int j = ls + 3; j < ps - 2; j = j + rand() % 2) {
				ekran[i][j] = rand() % 2;
				if (ekran[i][j] == 1) {
					*liczba = *liczba + 1;
				}
			}
		}
		//œciany
		for (int i = gs + 1; i < gs + 2; i++)
			for (int j = ls + 2; j < ps - 1; j++)
				ekran[i][j] = 2;
		for (int i = gs + 2; i < ds - 1; i++)
			for (int j = ls + 1; j < ls + 2; j++)
				ekran[i][j] = 3;
		for (int i = gs + 2; i < ds - 1; i++)
			for (int j = ps - 1; j < ps; j++)
				ekran[i][j] = 3;

		//k¹ty
		for (int i = gs + 1; i < gs + 2; i++)
			for (int j = ls + 1; j < ls + 2; j++)
				ekran[i][j] = 4;
		for (int i = gs + 1; i < gs + 2; i++)
			for (int j = ps - 1; j < ps; j++)
				ekran[i][j] = 4;
		for (int i = ds - 1; i < ds; i++)
			for (int j = ls + 1; j < ls + 2; j++)
				ekran[i][j] = 4;
		for (int i = ds - 1; i < ds; i++)
			for (int j = ps - 1; j < ps; j++)
				ekran[i][j] = 4;

		//dó³
		for (int i = ds - 1; i < ds; i++)
			for (int j = ls + 2; j < ps - 1; j++)
				ekran[i][j] = 2;

	}
	if (*poz == 2) {
		//obiekty do zbicia
		for (int i = gs + 3; i < (ds / 3); i++) {
			for (int j = ls + 3; j < (ps / 2) - 5; j++) {
				ekran[i][j] = rand() % 2;
				if (ekran[i][j] == 1) {
					*liczba = *liczba + 1;
				}
			}
		}
		for (int i = gs + 3; i < ds / 3; i++) {
			for (int j = (ps / 2) + 8; j < ps - 2; j++) {
				ekran[i][j] = rand() % 2;
				if (ekran[i][j] == 1) {
					*liczba = *liczba + 1;
				}
			}
		}
		//œciany
		for (int i = gs + 1; i < gs + 2; i++)
			for (int j = ls + 2; j < ps - 1; j++)
				ekran[i][j] = 2;

		for (int i = gs + 2; i < (ds / 3) + 2; i++)
			for (int j = ls + 1; j < ls + 2; j++)
				ekran[i][j] = 3;

		for (int i = gs + 2; i < (ds / 3) + 2; i++)
			for (int j = ps - 1; j < ps; j++)
				ekran[i][j] = 3;

		//œciany poziome dó³
		for (int i = (ds / 3) + 1; i < (ds / 3) + 2; i++)
			for (int j = ls + 1; j < (ps / 2) - 4; j++)
				ekran[i][j] = 2;
		for (int i = (ds / 3) + 1; i < (ds / 3) + 2; i++)
			for (int j = (ps / 2) + 7; j < ps; j++)
				ekran[i][j] = 2;
		for (int i = (ds / 2) + 1; i < (ds / 2) + 2; i++)
			for (int j = (ps / 2) - 1; j < (ps / 2) + 4; j++)
				ekran[i][j] = 2;
		//k¹ty
		for (int i = gs + 1; i < gs + 2; i++)
			for (int j = ls + 1; j < ls + 2; j++)
				ekran[i][j] = 4;
		for (int i = gs + 1; i < gs + 2; i++)
			for (int j = ps - 1; j < ps; j++)
				ekran[i][j] = 4;
		for (int i = ds - 1; i < ds; i++)
			for (int j = ls + 1; j < ls + 2; j++)
				ekran[i][j] = 4;
		for (int i = ds - 1; i < ds; i++)
			for (int j = ps - 1; j < ps; j++)
				ekran[i][j] = 4;

		//dó³
		for (int i = ds - 1; i < ds; i++)
			for (int j = ls + 1; j < ps; j++)
				ekran[i][j] = 2;

	}
	if (*poz == 3) {
		//obiekty do zbicia
		for (int i = gs + 4; i < (ds / 3) - 1; i++)
			for (int j = ((ps / 2) - 2) / 2 - 2; j < ((ps / 2) - 2) / 2 + 4; j++) {
				ekran[i][j] = 1;
				*liczba = *liczba + 1;
			}

		for (int i = gs + 4; i < (ds / 3) - 1; i++)
			for (int j = ((ps / 2) + 2 + (ps / 4)) - 2; j < ((ps / 2) + 2 + (ps / 4)) + 4; j++) {
				ekran[i][j] = 1;
				*liczba = *liczba + 1;
			}
		//œciany
		for (int i = gs + 1; i < gs + 2; i++)
			for (int j = ls + 2; j < ps - 1; j++)
				ekran[i][j] = 2;

		for (int i = gs + 2; i < (ds / 3) + 2; i++)
			for (int j = ls + 1; j < ls + 2; j++)
				ekran[i][j] = 3;

		for (int i = gs + 2; i < (ds / 3) + 2; i++)
			for (int j = ps - 1; j < ps; j++)
				ekran[i][j] = 3;

		//œciany poziome dó³
		for (int i = (ds / 3) + 1; i < (ds / 3) + 2; i++)
			for (int j = ls + 1; j < (ps / 2) - 2; j++)
				ekran[i][j] = 2;
		for (int i = (ds / 3) + 1; i < (ds / 3) + 2; i++)
			for (int j = (ps / 2) + 6; j < ps; j++)
				ekran[i][j] = 2;

		//dodatkowe poziom dó³
		for (int i = (ds / 3) - 2; i < (ds / 3) - 1; i++)
			for (int j = (ps / 2) - 2; j < (ps / 2) - 1; j++)
				ekran[i][j] = 2;
		for (int i = (ds / 3) - 2; i < (ds / 3) - 1; i++)
			for (int j = (ps / 2) + 5; j < (ps / 2) + 6; j++)
				ekran[i][j] = 2;

		//œciany pionowe dó³
		for (int i = (ds / 3) - 2; i < (ds / 3) + 1; i++)
			for (int j = (ps / 2) - 3; j < (ps / 2) - 2; j++)
				ekran[i][j] = 3;
		for (int i = (ds / 3) - 2; i < (ds / 3) + 1; i++)
			for (int j = (ps / 2) + 6; j < (ps / 2) + 7; j++)
				ekran[i][j] = 3;

		//k¹ty
		for (int i = gs + 1; i < gs + 2; i++)
			for (int j = ls + 1; j < ls + 2; j++)
				ekran[i][j] = 4;
		for (int i = gs + 1; i < gs + 2; i++)
			for (int j = ps - 1; j < ps; j++)
				ekran[i][j] = 4;
		for (int i = ds - 1; i < ds; i++)
			for (int j = ls + 1; j < ls + 2; j++)
				ekran[i][j] = 4;
		for (int i = ds - 1; i < ds; i++)
			for (int j = ps - 1; j < ps; j++)
				ekran[i][j] = 4;

		//dó³
		for (int i = ds - 1; i < ds; i++)
			for (int j = ls + 2; j < ps - 1; j++)
				ekran[i][j] = 2;


	}
	for (int i = gs + 1; i < ds; i++)
		for (int j = ls + 1; j < ps; j++) {
			gotoxy(j, i);
			if (ekran[i][j] == 1) {
				int c = (rand() % 10) + 1;
				if (c == 7) {
					c = (rand() % 10) + 1;
				}
				kolor(c);
				printf("X");
			}
			if (ekran[i][j] == 2) {
				kolor(7);
				printf("O");
			}
			if (ekran[i][j] == 3) {
				kolor(7);
				printf("O");
			}
			if (ekran[i][j] == 4) {
				kolor(7);
				printf("O");
			}
		}

}