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

    cout << endl << endl << "0. wroc\n\n" << "Wybor: ";
    cin >> read;

    if(read == 0)
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
    cout << "Szpital - miejsce, w ktorym odradzasz sie po smierci. Uwaga! Personel szpitala to bardzo pazerne i niemile typki, ktore z checia pomocy maja malo wspolnego, dlatego pobieraja 300 $ za kazda usluge!\n\n";
    cout << "Apteka - miejsce, w ktorym za drobna oplata mozesz uzupelnic swoje zdrowie\n\n\n";
    cout << "0. wroc\n\n" << "Wybor: ";

    cin >> read;

    if(read == 0)
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
    cout << "0. wroc\n\n" << "Wybor: ";
    cin >> read;

    if(read == 0)
    {
        Manual(player);
    }
    else{}
}

void Manual(Character player)
{
    system("cls");

    int read;

    cout << "1. Zasady Gry\n";
    cout << "2. Budynki\n";
    cout << "3. Rodzaje Broni\n\n\n";
    cout << "0. Menu Glowne\n\n" << "Wybor: ";

    cin >> read;

    switch(read)
    {
    case 0:
        MainMenu(player);
        break;
    case 1:
        Rules(player);
        break;
    case 2:
        Buildings(player);
        break;
    case 3:
        Weapons_types(player);
        break;
    default:
        Manual(player);
        break;
    }
}
