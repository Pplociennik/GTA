#include <iostream>
#include <windows.h>
#include "Interface.hpp"

using namespace std;


void Options(Character player)
{
    system("cls");
    cout << "OPCJE GRY\n\n";
    int read;
    cout << "1. Sterowanie";
    cin >> read;

    switch(read)
    {
    case 0:
        MainMenu(player);
    case 1:
        system("cls");
        Controls(player);
        break;
    }
}
