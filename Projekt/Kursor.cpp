#include "Header.h"
//Funkcja wyboru koordynatów oraz chowania kursora
void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void ShowCursor(bool show) {
	HANDLE hConsoleOutput;
	CONSOLE_CURSOR_INFO structCursorInfo;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleCursorInfo(hConsoleOutput, &structCursorInfo);
	structCursorInfo.bVisible = show;
	SetConsoleCursorInfo(hConsoleOutput, &structCursorInfo);
}