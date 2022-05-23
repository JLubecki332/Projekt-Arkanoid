#include "Header.h"
//Menu trwaj¹cego samouczka
void menui1(int xx, int yy) {
		ShowCursor(false);
		gotoxy(36, 1);
		kolor(420);
		ramka(37, 1, 79, 13);
		kolor(14);
		gotoxy(49, 3);
		printf("S A M O U C Z E K \n");
		kolor(7);
		gotoxy(41, 5);
		printf("Witaj w menu, w miejscu, w ktorym");
		gotoxy(41, 6);
		printf("przed kazda gra bedziesz mogl");
		gotoxy(41, 7);
		printf("zrobic takie rzeczy jak:");
		if (xx != 0 && yy != 0) {
			gotoxy(xx, yy);
			kolor(420);
			printf("<~~");
		}
}