#include <iostream>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <vector>
#include <fstream>
#include "Interface.hpp"

using namespace std;

int x = 1;
int y = 1;
char znak;
char playerc;

char Up_g = 'w';
char Down_g = 's';
char Left_g = 'a';
char Right_g = 'd';


void load_config_g()
{
    fstream plik;
    string linia;
    int numer = 0;

    plik.open("config.txt",ios::in);

    	fstream file;
	vector <char> dane;
	file.open ("config.txt", std::fstream::in);
	char x;
	while(file >>x){
		dane.push_back(x);
	}
	file.close();

	//Up_c = dane[0];
	Up_g = dane[0];

	//Down_c = dane[1];
	Down_g = dane[1];

	//Left_c = dane[2];
	Left_g = dane[2];

	//Right_c = dane[3];
	Right_g = dane[3];

        plik.close();
        return;
    }

    void changeX(Character player)
    {
        gotoxy(47, 1);
        cout << "    ";
        gotoxy(48, 1);
        cout << player.getX();
    }

        void changeY(Character player)
    {
        gotoxy(47, 2);
        cout << "    ";
        gotoxy(48, 2);
        cout << player.getY();
    }

    void showPlayer(Character player)
    {
        cout << player.getName() << " " << player.getHairstyle() << endl;
cout << "          " << "ZDROWIE: " << player.getHitpoints();
gotoxy(25, 1); cout << "KASA: " << player.getMoney() << " $"; gotoxy(45, 1); cout << "X: " << player.getX() << endl;
cout << "          " <<  "OCHRONA: " << player.getArmor();
gotoxy(25, 2); cout << "BRON: " << player.getWeapon(); gotoxy(45, 2); cout << "Y: " << player.getY() << endl;


cout << "----------------------------------------------------------------------------------------------------------------";
    }

void play(Character player)
{

ShowConsoleCursor(false);



    system("cls");
    load_config_g();
    x = player.getX();
    y = player.getY();


showPlayer(player);

        gotoxy(player.getX(), player.getY());
        cout << player.getHairstyle();

    do
    {
        znak = getch();
        gotoxy(player.getX(), player.getY());
        cout << playerc;
        if(znak == Up_g)
        {

            goUp(player.getX(), player.getY(), player.getHairstyle());
            y--;
            player.setX(x);
            player.setY(y);
            changeY(player);

        }
        else if(znak == Left_g)
        {

            goLeft(player.getX(), player.getY(), player.getHairstyle());
            x--;
            player.setX(x);
            player.setY(y);
            changeX(player);

        }
        else if(znak == Right_g)
        {

            goRight(player.getX(), player.getY(), player.getHairstyle());
            x++;
            player.setX(x);
            player.setY(y);
            changeX(player);



        }
        else if(znak == Down_g)
        {

            goDown(player.getX(), player.getY(), player.getHairstyle());
            y++;
                player.setX(x);
            player.setY(y);
            changeY(player);


        }
        else if(znak == 27)
        {
            PauseMenu(player);
        }
    }
    while(1==1);
}

void start_new_game(Character player)
{
            system("cls");
    string namechar;
    cout << "Wybierz imie dla swojej postaci: ";
    cin >> namechar;
    player.setName(namechar);
    player.setHitpoints(100);
    player.setMoney(100.00);
    player.setPistol(1);
    player.setShotgun(0);
    player.setGrenades(0);
    player.setBazook(0);
    player.setWeapon("Pistol");
    player.setArmor(0);
    player.set_pistol_ammo(36);
    player.set_shotgun_ammo(0);
    player.set_grenades(0);
    player.set_bazook_ammo(0);
    player.setX(1);
    player.setY(5);
    player.setHairstyle(createCharacter());
    play(player);

}
