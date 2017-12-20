#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Interface.hpp"

using namespace std;


void Options(Character player)
{
    char key;

    system("cls");
    cout << "OPCJE GRY\n\n";
    int read;
    cout << "   Sterowanie\n" << "   Menu Glowne";

    read = MenuControls(2, 3);

    switch(read)
    {
    case 1:
        system("cls");
        Controls(player);
        break;
    case 2:
        MainMenu(player);
    }
}
