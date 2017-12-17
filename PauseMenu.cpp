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

    cout << "1. Zapisz gre\n" << "2. Wczytaj Gre\n" << "3. Opcje Gry\n" << "4. Instrukcja\n\n\n" << "9. Menu Glowne\n" << "0. Wznow Gre\n\n" << "Wybor: ";
    cin >> read;

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
    case 9:
        system("cls");
        MainMenu(player);
        break;
    case 0:
        system("cls");
        play(player);
        break;
    default:
        system("cls");
        PauseMenu(player);
        break;
    }
}
