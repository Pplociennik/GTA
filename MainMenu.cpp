#include <iostream>
#include <windows.h>
#include "Interface.hpp"

using namespace std;

void MainMenu(Character player)
{
ShowConsoleCursor(false);

    system("cls");
    int read;
    cout << "-=GRIND TEST ACCESS=-\n\n" << "   Nowa Gra\n" << "   Wczytaj Gre\n" << "   Opcje Gry\n" << "   Instrukcja\n" << "   Autor\n" << "   Wyjdz z Gry";


  read = MenuControls(2, 7);

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
        Manual(player);
        break;
    case 5:
        MainMenu(player);
        break;
    case 6:
        exit(0);
    default:
        option_error();
        MainMenu(player);
    }
}
