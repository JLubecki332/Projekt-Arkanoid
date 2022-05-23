#include "Header.h"
//Samouczek
void samouczek(int* punkty) {
	ShowCursor(false);
	int poz = 1;
	int wyborpa = 8;
	int wyborpi = 8;
	int k;
	char choice = '0';
	system("CLS");
	for (int i = 0; i <= 100; i++) {
		gotoxy(1, 1);
		kolor(420);
		ramka(1, 1, 43, 15);
		kolor(14);
		gotoxy(14, 3);
		printf("S A M O U C Z E K \n");
		kolor(7);
		gotoxy(3, 5);
		printf("Witaj w grze Arkanoid. Gra polega na");
		gotoxy(3, 6);
		printf("zbiciu wszystkich elementow przy pomocy");
		gotoxy(3, 7);
		printf("ruchomej platformy, dzieki ktorej");
		gotoxy(3, 8);
		printf("odbijesz pileczke zbierajaca punkty.");
		gotoxy(17, 10);
		kolor(4);
		printf("U W A G A !");
		gotoxy(3, 12);
		kolor(7);
		printf("Gdy pileczka dotknie ziemi dostaniesz");
		gotoxy(3, 13);
		printf("ujemne punkty!!");
		kolor(420);
		ramka(1, 16, 43, 19);
		kolor(14);
		gotoxy(3, 17);
		printf("Samuczek przewija sie automatycznie");
		gotoxy(3, 18);
		printf("niecierpliwi moga uzyc spacji :)");
		Sleep(100);
		if (_kbhit()) {
			char key = ' ';
			key = _getch();
			if (key == 32 || key == 13) {
				i = 110;
			}
		}
	}
	menu();
	for (int j = 1; j < 23; j++) {
		gotoxy(36, j);
		printf("                                                     ");
	}
	menui1(0,0);
	for (int i = 0; i <= 55; i++) {
		menui1(23, 4);
		gotoxy(41, 9);
		kolor(14);
		printf("Zmiana nazwy gracza");
		Sleep(75);
		
		if (_kbhit()) {
			char key = ' ';
			key = _getch();
			if (key == 32 || key == 13) {
				i = 55;
			}
		}
	}
	for (int i = 9; i < 12; i++) {
		gotoxy(41, i);
		printf("                   ");
		gotoxy(23, 4);
		printf("   ");
	}
	for (int i = 0; i <= 45; i++) {
		menui1(25,5);
		gotoxy(41, 9);
		kolor(14);
		printf("Dostosowanie koloru paletki");
		gotoxy(41, 10);
		printf("lub pileczki");
		Sleep(75);
		if (_kbhit()) {
			char key = ' ';
			key = _getch();
			if (key == 32 || key == 13) {
				i = 45;
			}
		}
	}
	for (int i = 9; i < 11; i++) {
		gotoxy(41, i);
		printf("                           ");
		gotoxy(25, 5);
		printf("   ");
	}
	for (int i = 0; i <= 45; i++) {
		menui1(23, 6);
		gotoxy(41, 9);
		kolor(14);
		printf("Wybor poziomu trudnosci");
		Sleep(75);
		if (_kbhit()) {
			char key = ' ';
			key = _getch();
			if (key == 32 || key == 13) {
				i = 45;
			}
		}
	}
	for (int i = 9; i < 11; i++) {
		gotoxy(41, i);
		printf("                       ");
		gotoxy(23, 6);
		printf("   ");
	}
	for (int i = 0; i <= 45; i++) {
		menui1(12, 7);
		gotoxy(41, 9);
		kolor(14);
		printf("Uruchomienie gry");
		Sleep(75);
		if (_kbhit()) {
			char key = ' ';
			key = _getch();
			if (key == 32 || key == 13) {
				i = 45;
			}
		}
	}
	for (int i = 9; i < 11; i++) {
		gotoxy(41, i);
		printf("                ");
		gotoxy(12, 7);
		printf("   ");
	}
	for (int i = 0; i <= 45; i++) {
		menui1(21, 8);
		gotoxy(41, 9);
		kolor(14);
		printf("Wyswietlenie raportu z gry");
		Sleep(75);
		if (_kbhit()) {
			char key = ' ';
			key = _getch();
			if (key == 32 || key == 13) {
				i = 45;
			}
		}
	}
	for (int i = 9; i < 11; i++) {
		gotoxy(41, i);
		printf("                          ");
		gotoxy(21, 8);
		printf("   ");
	}
	for (int i = 0; i <= 45; i++) {
		menui1(22, 9);
		gotoxy(41, 9);
		kolor(14);
		printf("Wyswietlenie historii gier");
		Sleep(75);
		if (_kbhit()) {
			char key = ' ';
			key = _getch();
			if (key == 32 || key == 13) {
				i = 45;
			}
		}
	}
	for (int i = 9; i < 11; i++) {
		gotoxy(41, i);
		printf("                          ");
		gotoxy(22, 9);
		printf("   ");
	}
	for (int i = 0; i <= 45; i++) {
		menui1(21, 10);
		gotoxy(41, 9);
		kolor(14);
		printf("Zresetowanie zapisanych danych");
		Sleep(75);
		if (_kbhit()) {
			char key = ' ';
			key = _getch();
			if (key == 32 || key == 13) {
				i = 45;
			}
		}
	}
	for (int i = 9; i < 11; i++) {
		gotoxy(41, i);
		printf("                              ");
		gotoxy(21, 10);
		printf("   ");
	}
	for (int i = 0; i <= 45; i++) {
		menui1(18, 11);
		gotoxy(41, 9);
		kolor(14);
		printf("Wylaczenie gry");
		Sleep(75);
		if (_kbhit()) {
			char key = ' ';
			key = _getch();
			if (key == 32 || key == 13) {
				i = 45;
			}
		}
	}
	for (int i = 5; i < 11; i++) {
		gotoxy(41, i);
		printf("                                         ");
		gotoxy(18, 11);
		printf("   ");
	}
	int stop = 1;
	while (stop != 0)
	{
		k = (rand() % 10) + 1;
		if (k == 7) {
			k = (rand() % 6) + 1;
		}
		gotoxy(12, 7);
		kolor(k);
		printf("<~~");
		ramka(37, 1, 79, 13);
		kolor(14);
		gotoxy(49, 3);
		printf("S A M O U C Z E K \n");
		kolor(7);
		gotoxy(41, 6);
		printf("Czas na przetestowanie gry :)");
		gotoxy(41, 8);
		printf("Twoj cel to zdobycie"); kolor(4); printf(" 50 "); kolor(7); printf("punktow!");
		gotoxy(41, 10);
		printf("Gdy bedziesz gotowy nacisnij "); kolor(k); printf("4");
		Sleep(75);
		if (_kbhit()) {
			int key = _getch();
			if (key == '4') {
				stop = 0;
			}
		}
	}
	system("CLS");
	gras(&poz, &wyborpa, &wyborpi);
	system("CLS");
	menu();
	for (int j = 1; j < 23; j++) {
		gotoxy(36, j);
		printf("                                                     ");
	}
	for (int i = 1; i < 60; i++)
	{
		gotoxy(36, 1);
		kolor(420);
		ramka(37, 1, 79, 13);
		kolor(14);
		gotoxy(49, 3);
		printf("S A M O U C Z E K \n");
		kolor(7);
		gotoxy(41, 5);
		printf("Gratulacje! Jestes gotowy na gre!");
		gotoxy(41, 6);
		printf("Dziekuje za cierpliwosc i zycze");
		gotoxy(41, 7);
		printf("powodzenia. :)");
		Sleep(75);
		if (_kbhit()) {
			char key = ' ';
			key = _getch();
			if (key == 32 || key == 13) {
				i = 60;
			}
		}
	}
	ShowCursor(true);
}