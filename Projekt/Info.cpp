#include "Header.h"
//Menu startowe samouczka
void info(int* punkty) {
	int choice = 0;
	int choice1 = 0;
	int choice2 = 0;
	int w1 = 1;
	char wylacz1;
	FILE* wylacz;
	FILE* wpisz;
	fopen_s(&wylacz, "wylacz.dat", "r");
	fscanf_s(wylacz, "%c", &wylacz1);
	if (wylacz1 != '1') {
		ShowCursor(false);
		while (choice1 != '2') {
			menui();
			choice = _getch();
			switch (choice) {
				//Czy chcesz zobaczyæ samouczek?
			case('1')://Tak
				system("CLS");
				samouczek(punkty);
				system("CLS");
				break;
			case('2')://Nie
				system("CLS");
				menui();
				gotoxy(3, 5);
				printf("                     ");
				gotoxy(4, 4);
				printf("Czy chcesz trwale wylaczyc samouczek?");
				choice1 = _getch();
				switch (choice1) {
					//Czy chcesz trwale wy³¹czyæ samouczek?
				case('1')://Tak
					system("CLS");
					system("CLS");
					menui();
					gotoxy(2, 5);
					printf("                     ");
					gotoxy(3, 4);
					printf("Trwale wylaczenie mozna wylaczyc tylko");
					gotoxy(3, 5);
					printf("przez zrestartowanie danych w menu.");
					gotoxy(3, 6);
					printf("Czy na pewno wylaczyc?");
					//Trwa³e wy³¹czenie
					choice2 = _getch();
					switch (choice2) {
					case('1')://Tak
						system("CLS");
						fclose(wylacz);
						fopen_s(&wylacz, "wylacz.dat", "wb");
						fprintf(wylacz, "%d", w1);
						fclose(wylacz);
						break;
					case('2')://Nie
						break;

					default:
						system("CLS");
						printf("Wybierz jedna z dwoch opcji.");
						Sleep(500);
						choice2 = ' ';
						system("CLS");
					}
					break;
				case('2')://Nie
					system("CLS");
					break;
				default:
					system("CLS");
					printf("Wybierz jedna z dwoch opcji."); Sleep(500);
					choice1 = ' ';
					system("CLS");
				}
				break;
			default:
				system("CLS");
				printf("Wybierz jedna z dwoch opcji."); Sleep(500);
				choice = ' ';
				system("CLS");
			}

			if (choice2 == '2' || choice2 == '1') {
				break;
			}
			if (choice == '1') {
				break;
			}
		}
	}
	ShowCursor(true);
	fclose(wylacz);
}