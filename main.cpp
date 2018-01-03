#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Interface.hpp"

using namespace std;



int main()
{
system("mode con COLS=700");

ShowConsoleCursor(false);

load_config_c();
load_config_g();
Character player("Tommy", '@');
    MainMenu(player);
    return 0;
}
