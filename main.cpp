#include <iostream>
#include <windows.h>
#include "Interface.hpp"

using namespace std;



int main()
{
load_config_c();
load_config_g();
Character player("Tommy", '@');
    MainMenu(player);

 /*   cout << "Wybierz imie dla swojej postaci: ";
    cin >> namechar;

    Character player(namechar, createCharacter());

    system("cls");

   cout << player.getHairstyle(); */

  /*  Character player("Stefan", '@');
    string imie = player.getName();
    int hapsy = player.getHitpoints();
    cout << imie <<" ma " << hapsy << " HP.\n\n";

    Weapons tool("Bazooka", 25, 10, 6.30, "Kaboom!");
    cout << player.getName() << " posiada bron o nazwie: " << tool.getName() << ", zadaje obrazenia: " << tool.getDamage() << " o promieniu: " << tool.getRadius() << ". Kosztowala ona Stefana: " << tool.getCost() << " $. Opis broni: " << tool.getDescription() << "\n\n";


    Pistol pistol1("Pistolet", 10, 1, 1.30, "Zwykly pistolet, ale potrafi zranic!");
    cout << player.getName() << " posiada bron o nazwie: " << pistol1.getName() << ", zadaje obrazenia: " << pistol1.getDamage() << " o promieniu: " << pistol1.getRadius() << ". Kosztowala ona Stefana: " << pistol1.getCost() << " $. Opis broni: " << pistol1.getDescription() << "\n\n";


    cout << endl << endl << player.getHairstyle();*/

    SaveGame(player);
    return 0;
}
