#include "Header.h"
//G³ówny plik
int main() {

	dd rr;
	dd baza[20];
	FILE* data;
	FILE* wylacz;
	errno_t err;
	time_t t = time(NULL);
	struct tm* tm_local = localtime(&t);
	int s = 0;
	int min = 0;
	int g = 0;
	int d = 0;
	int m = 0;
	int r = 0;

	s_start();
	int punkty = 0;
	info(&punkty);
	punkty = 0;
	char tekst[10] = "-----"; //domyslna nazwa gracza
	int wyborpa = 14; //domyslny kolor paletki
	int wyborpi = 14; //domyslny kolor pileczki
	int poz = 0; //domyslny poziom gry
	char poziom[10] = "-----"; //domyslny poziom gry
	char choice = '0';
	char choice1 = '0';
	char choice2 = '0';
	char wlacz;

	while (choice != '8' && choice != 27) {
		system("CLS");
		menu();
		//scanf_s("%c", &choice);		
		choice = _getch();
		switch (choice) {
			//Wprowadzenie danych gracza
		case('1'):
			system("CLS");
			ramka(1, 1, 40, 6);
			gotoxy(9, 2);
			printf("Z M I A N A  G R A C Z A");
			kolor(7);
			gotoxy(2, 5);
			printf("Podaj nazwe: ");
			scanf_s("%s", tekst, _countof(tekst));
			break;
		case('2'):
			system("CLS");
			ramka(1, 1, 26, 8);
			gotoxy(3, 2);
			printf("M E N U  W Y G L A D U");
			gotoxy(2, 4);
			kolor(2);
			printf("1 - Wyglad paletki");
			gotoxy(2, 5);
			kolor(9);
			printf("2 - Wyglad pileczki");
			gotoxy(2, 7);
			kolor(7);
			printf("Co chcesz zmienic? -> ");

			choice1 = _getch();
			if (choice1 == '1') {
				system("CLS");
				kolor(14);
				ramka(1, 1, 25, 14);
				gotoxy(1, 15);
				printf("ESC - powrot do menu");
				gotoxy(2, 2);
				kolor(2);
				printf("Lista kolorow:");
				gotoxy(2, 4);
				kolor(1);
				printf("1 - Niebieski");
				gotoxy(2, 5);
				kolor(2);
				printf("2 - Zielony");
				gotoxy(2, 6);
				kolor(3);
				printf("3 - Jasno niebieski");
				gotoxy(2, 7);
				kolor(4);
				printf("4 - Czerwony");
				gotoxy(2, 8);
				kolor(5);
				printf("5 - Rozowy");
				gotoxy(2, 9);
				kolor(6);
				printf("6 - Zolty");
				gotoxy(2, 10);
				kolor(7);
				printf("7 - Bialy");
				gotoxy(2, 11);
				kolor(1);
				printf("8"); printf(" "); kolor(2); printf("-"); printf(" "); kolor(3); printf("K"); kolor(4); printf("o"); kolor(5); printf("l"); kolor(6); printf("o"); kolor(7); printf("r"); kolor(8); printf("o"); kolor(9); printf("w"); kolor(10); printf("y");
				gotoxy(2, 13);
				kolor(7);
				printf("Wybierz kolor -> ");
				choice2 = _getch();
				if (choice2 == '1') wyborpa = 1;
				else if (choice2 == '2') wyborpa = 2;
				else if (choice2 == '3') wyborpa = 3;
				else if (choice2 == '4') wyborpa = 4;
				else if (choice2 == '5') wyborpa = 5;
				else if (choice2 == '6') wyborpa = 6;
				else if (choice2 == '7') wyborpa = 7;
				else if (choice2 == '8') wyborpa = 8;
				else if (choice2 == 27) break;
				else {
					system("CLS");
					gotoxy(1, 1);
					kolor(4);
					printf("Taki kolor nie istnieje.");
					for (int i = 1; i < 100; i++) {
						if (_kbhit()) {
							char key = ' ';
							key = _getch();
						}
						Sleep(1);
					}
				}
				break;
			}
			else if (choice1 == '2') {
				system("CLS");
				kolor(14);
				ramka(1, 1, 25, 14);
				gotoxy(1, 15);
				printf("ESC - powrot do menu");
				gotoxy(2, 2);
				kolor(2);
				printf("Lista kolorow:");
				gotoxy(2, 4);
				kolor(1);
				printf("1 - Niebieski");
				gotoxy(2, 5);
				kolor(2);
				printf("2 - Zielony");
				gotoxy(2, 6);
				kolor(3);
				printf("3 - Jasno niebieski");
				gotoxy(2, 7);
				kolor(4);
				printf("4 - Czerwony");
				gotoxy(2, 8);
				kolor(5);
				printf("5 - Rozowy");
				gotoxy(2, 9);
				kolor(6);
				printf("6 - Zolty");
				gotoxy(2, 10);
				kolor(7);
				printf("7 - Bialy");
				gotoxy(2, 11);
				kolor(1);
				printf("8"); printf(" "); kolor(2); printf("-"); printf(" "); kolor(3); printf("K"); kolor(4); printf("o"); kolor(5); printf("l"); kolor(6); printf("o"); kolor(7); printf("r"); kolor(8); printf("o"); kolor(9); printf("w"); kolor(10); printf("y");
				gotoxy(2, 13);
				kolor(7);
				printf("Wybierz kolor -> ");
				choice2 = _getch();
				if (choice2 == '1') wyborpi = 1;
				else if (choice2 == '2') wyborpi = 2;
				else if (choice2 == '3') wyborpi = 3;
				else if (choice2 == '4') wyborpi = 4;
				else if (choice2 == '5') wyborpi = 5;
				else if (choice2 == '6') wyborpi = 6;
				else if (choice2 == '7') wyborpi = 7;
				else if (choice2 == '8') wyborpi = 8;
				else if (choice2 == 27) break;
				else {
					system("CLS");
					gotoxy(1, 1);
					kolor(4);
					printf("Taki kolor nie istnieje.");
					for (int i = 1; i < 100; i++) {
						if (_kbhit()) {
							char key = ' ';
							key = _getch();
						}
						Sleep(1);
					}
				}
				break;
			}
			else {
				system("CLS");
				gotoxy(1, 1);
				kolor(4);
				printf("Taka pozycja nie istnieje.");
				for (int i = 1; i < 100; i++) {
					if (_kbhit()) {
						char key = ' ';
						key = _getch();
					}
					Sleep(1);
				}
			}
			break;
			//Wybór poziomu
		case('3'):
			system("CLS");
			ramka(1, 1, 28, 9);
			gotoxy(3, 2);
			printf("W Y B O R  P O Z I O M U");
			gotoxy(2, 10);
			printf("ESC - powrot do menu");
			gotoxy(2, 4);
			kolor(2);
			printf("1 - Latwy");
			gotoxy(2, 5);
			kolor(9);
			printf("2 - Sredni");
			gotoxy(2, 6);
			kolor(5);
			printf("3 - Trudny");
			gotoxy(2, 8);
			kolor(7);
			printf("Wybierz poziom -> ");
			choice1 = _getch();
			switch (choice1) {

			case('1'):
			{
				poz = 1;
				char poziom1[12] = "latwy";
				strcpy(poziom, poziom1);
				break;
				fprintf(data, "%s", poziom);
			}
			case('2'):
			{
				poz = 2;
				char poziom1[12] = "sredni";
				strcpy(poziom, poziom1);
				break;
				fprintf(data, "%s", poziom);
			}
			case('3'):
			{
				poz = 3;
				char poziom1[12] = "trudny";
				strcpy(poziom, poziom1);
				break;
				fprintf(data, "%s", poziom);
			}
			case(27):
			{
				break;
			}
			default:
				system("CLS");
				kolor(4);
				gotoxy(1, 1);
				printf("Taki poziom nie istnieje"); 
				for (int i = 1; i < 100; i++) {
					if (_kbhit()) {
						char key = ' ';
						key = _getch();
					}
					Sleep(1);
				}
				choice1 = ' ';
				system("CLS");
			}
			break;
			//Gra
		case('4'):
			system("CLS");
			if (poz == 0) {
				ShowCursor(false);
				gotoxy(1, 1);
				kolor(4);
				printf("Nie wybrano poziomu gry");
				Sleep(500);
				break;
				ShowCursor(true);
			}
			punkty = gra(&poz, &wyborpa, &wyborpi);
			s = tm_local->tm_sec;
			min = tm_local->tm_min + 1;
			g = tm_local->tm_hour;
			d = tm_local->tm_mday;
			m = (tm_local->tm_mon) + 1;
			r = (tm_local->tm_year) + 1900;
			err = fopen_s(&data, "data2.dat", "a+");
			if (err == 0) {
				fprintf(data, "%s %s %d %d.%d.%d %d:%d:%d\n", tekst, poziom, punkty, d, m, r, g, min, s);
				fclose(data);
			}
			else {
				printf("Nie udalo sie otworzyc pliku data2.dat\n");
				Sleep(1000);
			}
			break;
			//Raport z gry
		case('5'):
			choice1 = 0;
			system("CLS");
			fopen_s(&data, "data2.dat", "a+");
			fscanf_s(data, "%c", &err);
			if (err != 0) {
				kolor(14);
				ramka(0, 0, 40, 10);
				gotoxy(9, 1);
				printf("R A P O R T  Z  G R Y");
				kolor(7);
				gotoxy(9, 4);
				printf("Gracz: %s", tekst);
				
				if (d == 0 || m == 0 || r == 0) {
					gotoxy(9, 7);
					printf("Data gry: nie zagrano");
					gotoxy(9, 8);
					printf("Godzina gry: nie zagrano");
				}
				else {
					gotoxy(9, 7);
					printf("Data gry: %d.%d.%d", d, m, r);
					gotoxy(9, 8);
					printf("Godzina gry: %d:%d:%d", g, min, s);
				}
				gotoxy(9, 5);
				printf("Poziom: %s", poziom);
				gotoxy(9, 6);
				printf("Punkty: %d", punkty);
			}
			else {
				printf("Nie udalo sie otworzyc pliku data2.dat\n");
				Sleep(1000);
			}
			fclose(data);
			kolor(14);
			gotoxy(1, 11);
			printf("Nacisnij dowolny przycisk aby wyjsc");
			while (choice1 == 0) {
				choice1 = _getch();
				break;
			}
			choice1 = 0;
			break;
			//Historia gier
		case('6'):
			system("CLS");
			fopen_s(&data, "data2.dat", "r");
			if (r == 0) {
				historia(data, baza, s, min, g, d, m, r, tekst, poziom, punkty, choice1);
				s = 0;
				min = 0;
				g = 0;
				d = 0;
				m = 0;
				r = 0;
				punkty = 0;
				char tekst1[10] = "-----";
				char poziom1[10] = "-----";
				strcpy(tekst, tekst1);
				strcpy(poziom, poziom1);
			}
			else {
				historia(data, baza, s, min, g, d, m, r, tekst, poziom, punkty, choice1);
			}
			break;
			//Reset danych
		case('7'):
			system("CLS");
			fopen_s(&data, "data2.dat", "w");
			fprintf(data, "%s", "");
			fclose(data);
			fopen_s(&wylacz, "wylacz.dat", "w");
			fprintf(wylacz, "%s", "0");
			fclose(wylacz);
			s = 0;
			min = 0;
			g = 0;
			d = 0;
			m = 0;
			r = 0;
			punkty = 0;
			{
				char tekst1[10] = "-----";
				char poziom1[10] = "-----";
				strcpy(tekst, tekst1);
				strcpy(poziom, poziom1);
			}
			gotoxy(1, 1);
			kolor(14);
			printf("Dane zostaly usuniete\n");
			for (int i = 1; i < 100; i++) {
				if (_kbhit()) {
					char key = ' ';
					key = _getch();
				}
				Sleep(1);
			}
			break;
			//Wyjœcie z gry
		case(27):
			gotoxy(0, 25);
			break;
		default:
			ShowCursor(false);
			system("CLS");
			kolor(4);
			strona_d();
			for (int i = 1; i < 150; i++) {
				if (_kbhit()) {
					char key = ' ';
					key = _getch();
				}
				Sleep(1);
			}
			choice = ' ';
			system("CLS");
			ShowCursor(true);
		}
	}
}