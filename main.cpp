#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0502
#endif

#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Interface.hpp"

using namespace std;



int main()
{
//system("mode con COLS=700");

SetConsoleDisplayMode( GetStdHandle( STD_OUTPUT_HANDLE ), CONSOLE_FULLSCREEN_MODE, NULL);

ShowConsoleCursor(false);

load_config_c();
load_config_g();
Character player("Tommy", '@');
    MainMenu(player);
    return 0;
}
