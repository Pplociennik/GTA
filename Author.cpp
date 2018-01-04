#include <iostream>
#include <time.h>
#include <windows.h>
#include "Interface.hpp"

using namespace std;

void Author(Character player)
{
    for(int i=0; i<42; i++)
    {
        system("cls");
        gotoxy(60, i);
        cout << "Autor: Przemyslaw Plociennik";
        Sleep(50);
        gotoxy(60, i);
        cout << "                                   ";
    }
    system("cls");
    MainMenu(player);
}
