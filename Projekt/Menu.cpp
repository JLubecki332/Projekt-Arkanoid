#include "Header.h"
//Menu gry
void menu() {
	s_pocz1();
	gotoxy(0, 0);
	kolor(7);
	printf("     \n");
	printf("     \n");
	kolor(14);
	printf("    ~~~~~ A R K A N O I D ~~~~~\n");
	printf("\n");
	kolor(7);
	printf("    1 - Zmiana gracza \n");
	printf("    2 - Dostosuj paletke \n");
	printf("    3 - Wybierz poziom \n");
	printf("    4 - GRA \n");
	printf("    5 - Raport z gry \n");
	printf("    6 - Historia gier \n");
	printf("    7 - Reset danych \n");
	printf("    ESC - Wyjscie \n");
	printf("\n");
	printf("    Wprowadz numer ->");
	kolor(14);
	ramka(1, 1, 33, 15);
	kolor(7);
	gotoxy(14, 18);
	printf("A I R");
	gotoxy(8, 20);
	printf("G R U P A  N R  2");
	gotoxy(5, 22);
	printf("J A K U B  L U B E C K I");
	kolor(14);
	ramka(1, 17, 33, 23);
	gotoxy(23, 13);
}
