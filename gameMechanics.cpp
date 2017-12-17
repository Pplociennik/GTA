#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <time.h>
#include <unistd.h>
#include "Interface.hpp"

using namespace std;

void gotoxy(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void goUp(int x, int y, char sign)
{
gotoxy(x,y);
cout<<" ";
gotoxy(x,y-1);
cout<<sign;
}

void goDown(int x, int y, char sign)
{
gotoxy(x,y);
cout<<" ";
gotoxy(x,y+1);
cout<<sign;
}

void goRight(int x, int y, char sign)
{
gotoxy(x,y);
cout<<" ";
gotoxy(x+1,y);
cout<<sign;
}

void goLeft(int x, int y, char sign)
{
gotoxy(x,y);
cout<<" ";
gotoxy(x-1,y);
cout<<sign;
}
