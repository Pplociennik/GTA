#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include "Interface.hpp"

using namespace std;

int MenuControls(int bego, int endo)
{
    int beg = bego;;
    char key;
    int option = bego;

    gotoxy(0, option);
    cout << "< ";
    gotoxy(15, option);
    cout << " >";

    do
    {
        key = getch();
        if(key == 's')
        {
            if(option != endo)
            {
            gotoxy(0, option);
            cout << "  ";
            gotoxy(15, option);
            cout << "  ";

            option++;

            gotoxy(0, option);
            cout << "< ";
            gotoxy(15, option);
            cout << " >";
            }
        }

        else if(key == 'w')
        {
            if(option != beg)
            {
                gotoxy(0, option);
                cout << "  ";
                gotoxy(15, option);
                cout << "  ";

                option--;

                gotoxy(0, option);
                cout << "< ";
                gotoxy(15, option);
                cout << " >";
            }
        }

        else if(key == 0x0D)
        {
            return option-1;
        }
    }
    while(key != 27);
}
