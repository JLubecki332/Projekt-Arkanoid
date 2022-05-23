#ifndef H1
#define H1

#include <stdio.h>
#include "windows.h"
#include <conio.h>
#include <time.h>

struct dd {
	int p;
	char t[10];
	char po[10];
	int pu;
	int d;
	int m;
	int r;
	int g;
	int min;
	int s;
};

//Graficzne

void s_pocz1();//Strona_1.cpp
void s_pocz(int ls, int ps, int ds, int gs, int* poz);//Strona_2.cpp
void s_start();//Strona_S.cpp
void strona_d();//Strona_D.cpp

void druk(int ps, int ds, int gs, int ls);//Druk.cpp
void druk1(int* punkty, int ps, int gs, int* punkty1, int* liczba);//Druk1.cpp
void druk2(int x, int y, int xp, int yp, int* poz, int* wyborpa, int* wyborpi, int xprz, int yprz, int xprz1, int yprz1, int xprz2, int yprz2);//Druk2.cpp

void ramka(int x, int y, int dx, int dy);//Ramka.cpp
void ramkaG(int* poz, int ls, int gs, int ps, int ds);//RamkaGry.cpp

void gotoxy(int x, int y);//Kursor.cpp
void ShowCursor(bool show);//Kursor.cpp

void tablica(int ekran[25][80], int ps, int ls, int ds, int gs, int* poz, int *liczba);//Tablica.cpp
void animacja(int x, int y, int xp, int yp, int* poz, int* wyborpa, int* wyborpi, int xprz, int yprz, int xprz1, int yprz1, int xprz2, int yprz2);//Animacje.cpp

void kolor(int c);//Kolor.cpp

void menui1(int xx, int yy);//menui1.cpp
void menu();//Menu.cpp
void menui();//MenuInfo.cpp
void info(int* punkty);//Info.cpp
void samouczek(int* pounkty);//Samouczek.cpp

//funkcyjne

int sciana_poz1(int y, int vy, int* punkty, int ds, int gs, int ps, int ls, int* poz);//Sciana_poz.cpp
int sciana_prz(int ds, int yprz, int vyprz, int yprz1, int vyprz1, int yprz2, int vyprz2, int* poz);//Sciana_prz.cpp
void sciana_pio1(int* x, int* vx, int ls, int ps, int gs, int ds, int* poz, int* xprz, int* xprz1, int* xprz2);//Sciana_pio1.cpp

void inicjacja(int* x, int* y, int* vx, int* vy, int* xp, int* yp, int* vxp, int* vyp, int ls, int ps, int ds, int gs, int* poz, int* xprz, int* yprz, int* vyprz, int* xprz1, int* yprz1, int* vyprz1, int* xprz2, int* yprz2, int* vyprz2);//inicjacja.cpp
void historia(FILE* data, dd baza[20], int s, int min, int g, int d, int m, int r, char tekst[10], char poziom[10], int punkty, char choice1);//historia.cpp
void elem(int x, int y, int* vy, int* vx, int* punkty, int ekran[25][80], int ps, int ds, int* poz, int *punkty1, int* liczba);//Elementy.cpp

void ruch(int* x, int* y, int* vx, int* vy, int* punkty, int* punkty1, int ls, int ps, int ds, int gs, int ekran[25][80], int* poz, int* xprz, int* yprz, int* vyprz, int* xprz1, int* yprz1, int* vyprz1, int* xprz2, int* yprz2, int* vyprz2, int* liczba);//Ruch.cpp
void paletka(int* x, int y, int xp, int* vy, int *vx, int* punkty, int yp, int ls, int ps, int *poz, int ekran[25][80], int xprz, int yprz, int xprz1, int yprz1, int xprz2, int yprz2);//Odbicie.cpp
void klaw(int* yp, int* xp, int* vxp, int* koniec, int ps, int ls, int *poz);//Klawiatura.cpp

int gra(int *poz, int *wyborpa, int *wyborpi);//Gra.cpp
int gras(int* poz, int* wyborpa, int* wyborpi);//GraS.cpp

#endif
