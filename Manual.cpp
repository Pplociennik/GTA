#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Interface.hpp"

using namespace std;

void Rules(Character player)
{
    int read;

    system("cls");
    cout << "Witaj w Grind Test Acces! ...";

    cout << endl << endl << "   Wroc";
    read = MenuControls(2, 2);

    if(read == 1)
    {
        Manual(player);
    }
    else{}
}

void Buildings(Character player)
{
    int read;

    system("cls");
    cout << "OPIS BUDYNKOW\n\n\n";
    cout << "Sklep z bronia - Miejsce, w ktorym mozesz nabyc rozne rodzaje broni oraz amunicje do nich, a takze kamizelke kuloodporna\n\n";
    cout << "Szpital - miejsce, w ktorym odradzasz sie po smierci.\nUwaga! Personel szpitala to bardzo pazerne i niemile typki, ktore z checia pomocy maja malo wspolnego, dlatego pobieraja 300 $ za kazda usluge!\n\n";
    cout << "Apteka - miejsce, w ktorym za drobna oplata mozesz uzupelnic swoje zdrowie\n\n\n";
    cout << "   Wroc";

    read = MenuControls(11, 11);

    if(read == 10)
    {
        Manual(player);
    }
    else{}
}

void Weapons_types(Character player)
{
    system("cls");

    int read;

    cout << "RODZAJE BRONI\n\n\n";
    cout << "Pistolet - zadaje niewielkie obrazenia zarowno z bliska, jak i z dystansu\n\n";
    cout << "Strzelba - zadaje duze obrazenia, ale tylko na niewielki dystans. Posiada jednak duzy rozrzut wystrzelanych pociskow\n\n";
    cout << "Granaty - Chyba wiadomo, co nie?\n\n";
    cout << "Bazooka - wystrzeliwuje rakiety, ktore po zderzeniu z osoba lub obiektem, tworza wielki wybuch\n\n\n";
    cout << "   Wroc";
    read = MenuControls(12, 12);

    if(read == 11)
    {
        Manual(player);
    }
    else{}
}

void Manual(Character player)
{
    system("cls");

    int read;

    cout << "-=INSTRUKCJA=-\n\n";
    cout << "   Zasady Gry\n";
    cout << "   Budynki\n";
    cout << "   Rodzaje Broni\n";
    cout << "   Menu Glowne\n";

    read = MenuControls(2, 5);

    switch(read)
    {
    case 1:
        Rules(player);
        break;
    case 2:
        Buildings(player);
        break;
    case 3:
        Weapons_types(player);
        break;
    case 4:
        MainMenu(player);
        break;
    }
}
