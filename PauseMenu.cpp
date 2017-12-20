#include <iostream>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <vector>
#include <fstream>
#include "Interface.hpp"

using namespace std;

void PauseMenu(Character player)
{
    system("cls");
    int read;

    cout << "PAUZA\n\n";
    cout << "   Zapisz gre\n" << "   Wczytaj Gre\n" << "   Opcje Gry\n" << "   Instrukcja\n" << "   Menu Glowne\n" << "   Wznow Gre\n\n";

    read = MenuControls(2, 7);

    switch(read)
    {
    case 1:
        system("cls");
        SaveGame(player);
        break;
    case 2:
        system("cls");
        LoadGame(player);
        break;
    case 3:
        system("cls");
        Options(player);
        break;
    case 4:
        system("cls");
        Manual(player);
        break;
    case 5:
        system("cls");
        MainMenu(player);
        break;
    case 6:
        system("cls");
        play(player);
        break;
    default:
        system("cls");
        PauseMenu(player);
        break;
    }
}
