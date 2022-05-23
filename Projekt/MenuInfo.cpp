#include "Header.h"
//Menu startowe samouczka
void menui(){
	gotoxy(1, 1);
	kolor(14);
	ramka(1, 1, 42, 10);
	ramka(13, 7, 21, 9);
	ramka(23, 7, 31, 9);
	gotoxy(14, 8);
	kolor(2);
	printf("TAK - 1");
	gotoxy(24, 8);
	kolor(4);
	printf("NIE - 2");
	kolor(14);
	gotoxy(14, 2);
	printf("S A M O U C Z E K \n");
	kolor(7);
	gotoxy(6, 4);
	printf("Witaj w grze Arkanoid. Czy chcesz ");
	gotoxy(6, 5);
	printf("przejsc samouczek?");
	Sleep(50);
}