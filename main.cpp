#include <iostream>
#include <windows.h>
#include "Interface.hpp"

using namespace std;


int main()
{
system("mode 1000");

ShowConsoleCursor(false);

load_config_c();
load_config_g();
Character player("Tommy", '@');
    MainMenu(player);
    return 0;
}
