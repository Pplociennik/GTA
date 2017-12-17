#include <iostream>
#include <windows.h>
#include "Interface.hpp"

using namespace std;

void MainMenu(Character player)
{
    system("cls");
    int read;
    cout << "-=GRIND TEST ACCESS=-\n\n" << "1. Nowa Gra\n" << "2. Wczytaj Gre\n" << "3. Opcje Gry\n" << "4. Instrukcja\n" << "5. Autor\n" << "6. Wyjdz z Gry\n\n" << "Wybierz opcje: ";
    cin >> read;

    switch(read){
    case 1:
        start_new_game(player);
        break;
    case 2:
        LoadGame(player);
        break;
    case 3:
        Options(player);
        break;
    case 4:
        //
        break;
    case 5:
        //
        break;
    case 6:
        exit(0);
    default:
        option_error();
        MainMenu(player);
    }
}
