#include "Header.h"
//Historia gier mo¿liwa do wyboru w menu
void historia(FILE* data, dd baza[20], int s, int min, int g, int d, int m, int r, char tekst[10], char poziom[10], int punkty, char choice1) {
	{
		choice1 = 0;
		int i = 0;
		while (!feof(data)) {
			fscanf(data, "%s %s %d %d.%d.%d %d:%d:%d\n", tekst, poziom, &punkty, &d, &m, &r, &g, &min, &s);
			strcpy_s(baza[i].t, tekst);
			strcpy_s(baza[i].po, poziom);
			baza[i].pu = punkty;
			baza[i].d = d;
			baza[i].m = m;
			baza[i].r = r;
			baza[i].g = g;
			baza[i].min = min;
			baza[i].s = s;
			i++;
		}
		fclose(data);
		for (int j = (i - 1); j >= -1; j--) {
			while (choice1 != 77 && choice1 != 'd' && choice1 != 'D' && choice1 != 75 && choice1 != 'a' && choice1 != 'A' && choice1 != 27) {
				kolor(14);
				ramka(0, 0, 40, 10);
				gotoxy(8, 1);
				printf("H I S T O R I A  G I E R");
				gotoxy(2, 3);
				for (int l = 4; l < 9; l++) {
					for (int k = 8; k < 30; k++) {
						gotoxy(k, l);
						printf(" ");
					}
				}
				gotoxy(8, 4);
				kolor(420);
				printf("Gracz: %s", baza[j].t);
				gotoxy(8, 5);
				kolor(420);
				printf("Poziom: %s", baza[j].po);
				gotoxy(8, 6);
				kolor(420);
				printf("Punkty: %d\n\n", baza[j].pu);
				if (baza[j].d == 0 || baza[j].m == 0 || baza[j].r == 0) {
					gotoxy(8, 7);
					kolor(420);
					printf("Data gry: nie zagrano");
					gotoxy(8, 8);
					kolor(420);
					printf("Godzina gry: nie zagrano");
				}
				else {
					gotoxy(8, 7);
					kolor(420);
					printf("Data: %d.%d.%d", baza[j].d, baza[j].m, baza[j].r);
					gotoxy(8, 8);
					kolor(420);
					printf("Godzina: %d:%d:%d", baza[j].g, baza[j].min, baza[j].s);
				}
				kolor(14);
				ramka(0, 11, 35, 15);
				kolor(7);
				gotoxy(2, 12);
				printf("D/strzalka w prawo - starsza gra");
				gotoxy(2, 13);
				printf("A/strzalka w lewo - nowsza gra");
				gotoxy(2, 14);
				printf("esc - wyjscie");
				choice1 = _getch();
			}
			if (choice1 == 75 || choice1 == 'a' || choice1 == 'A') {
				j = j + 2;
				if (j >= (i + 1)) {
					j = i;
				}
			}
			if (j <= 0) {
				j = 1;
			}
			if (choice1 == 27) {
				break;
			}
			choice1 = 0;
		}
		choice1 = 0;
		fclose(data);
	}
}