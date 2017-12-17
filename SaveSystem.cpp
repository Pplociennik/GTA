#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <vector>
#include "Interface.hpp"
using namespace std;

void load_slot1(Character player)
{
    fstream plik;
    string linia;
    int numer = 0;

    plik.open("save_slot1.txt",ios::in);

    if(plik.good())
    {
        while(getline(plik,linia))
        {
            switch(numer)
            {
                case 0:
                    player.setName(linia.c_str());
                break;

                case 1:
                    player.setWeapon(linia.c_str());
                break;

                case 2:
                    player.setHitpoints(atoi(linia.c_str()));
                break;

                case 3:
                    player.setArmor(atoi(linia.c_str()));
                break;

                case 4:
                    player.setMoney(atof(linia.c_str()));
                break;

                case 5:
                    player.setPistol(atoi(linia.c_str()));
                break;

                case 6:
                    player.setShotgun(atoi(linia.c_str()));
                break;

                case 7:
                    player.setGrenades(atoi(linia.c_str()));
                break;

                case 8:
                   player.setBazook(atoi(linia.c_str()));
                break;

                case 9:
                    player.set_pistol_ammo(atoi(linia.c_str()));
                break;

                case 10:
                player.set_shotgun_ammo(atoi(linia.c_str()));
                break;
                case 11:
                    player.set_grenades(atoi(linia.c_str()));
                    break;
                case 12:
                    player.set_bazook_ammo(atoi(linia.c_str()));
                    break;
                case 13:
                    {
                        string n;
                        n = linia.c_str();
                        player.setHairstyle(n[0]);
                    }
                    break;
                case 14:
                    player.setX(atoi(linia.c_str()));
                    break;
                case 15:
                    player.setY(atoi(linia.c_str()));
                    break;

            }
            numer++;
        }

        plik.close();

    }
    play(player);
}

void load_slot2(Character player)
{
    fstream plik;
    string linia;
    int numer = 0;

    plik.open("save_slot2.txt",ios::in);

    if(plik.good())
    {
        while(getline(plik,linia))
        {
            switch(numer)
            {
                 case 0:
                    player.setName(linia.c_str());
                break;

                case 1:
                    player.setWeapon(linia.c_str());
                break;

                case 2:
                    player.setHitpoints(atoi(linia.c_str()));
                break;

                case 3:
                    player.setArmor(atoi(linia.c_str()));
                break;

                case 4:
                    player.setMoney(atof(linia.c_str()));
                break;

                case 5:
                    player.setPistol(atoi(linia.c_str()));
                break;

                case 6:
                    player.setShotgun(atoi(linia.c_str()));
                break;

                case 7:
                    player.setGrenades(atoi(linia.c_str()));
                break;

                case 8:
                   player.setBazook(atoi(linia.c_str()));
                break;

                case 9:
                    player.set_pistol_ammo(atoi(linia.c_str()));
                break;

                case 10:
                player.set_shotgun_ammo(atoi(linia.c_str()));
                break;

                case 11:
                    player.set_grenades(atoi(linia.c_str()));
                    break;
                case 12:
                    player.set_bazook_ammo(atoi(linia.c_str()));
                    break;
                case 13:
                    {
                    	fstream file;
	vector <char> chary;
	file.open ("save_slot1.txt", std::fstream::in);
	char x;
	while(file >>x){
		chary.push_back(x);
	}
	file.close();
	plik.close();
                    player.setHairstyle(chary[27]);
                    }
                    break;
                case 14:
                    player.setX(atoi(linia.c_str()));
                    break;
                case 15:
                    player.setY(atoi(linia.c_str()));
                    break;

            }
            numer++;
        }

        plik.close();
    }
    play(player);
}

void load_slot3(Character player)
{
    fstream plik;
    string linia;
    int numer = 0;

    plik.open("save_slot3.txt",ios::in);

    if(plik.good())
    {
        while(getline(plik,linia))
        {
            switch(numer)
            {
                 case 0:
                    player.setName(linia.c_str());
                break;

                case 1:
                    player.setWeapon(linia.c_str());
                break;

                case 2:
                    player.setHitpoints(atoi(linia.c_str()));
                break;

                case 3:
                    player.setArmor(atoi(linia.c_str()));
                break;

                case 4:
                    player.setMoney(atof(linia.c_str()));
                break;

                case 5:
                    player.setPistol(atoi(linia.c_str()));
                break;

                case 6:
                    player.setShotgun(atoi(linia.c_str()));
                break;

                case 7:
                    player.setGrenades(atoi(linia.c_str()));
                break;

                case 8:
                   player.setBazook(atoi(linia.c_str()));
                break;

                case 9:
                    player.set_pistol_ammo(atoi(linia.c_str()));
                break;

                case 10:
                player.set_shotgun_ammo(atoi(linia.c_str()));
                break;
                case 11:
                    player.set_grenades(atoi(linia.c_str()));
                    break;
                case 12:
                    player.set_bazook_ammo(atoi(linia.c_str()));
                    break;
                case 13:
                    {
                    	fstream file;
	vector <char> chary;
	file.open ("save_slot1.txt", std::fstream::in);
	char x;
	while(file >>x){
		chary.push_back(x);
	}
	file.close();
	plik.close();
                    player.setHairstyle(chary[27]);
                    }
                    break;
                case 14:
                    player.setX(atoi(linia.c_str()));
                    break;
                case 15:
                    player.setY(atoi(linia.c_str()));
                    break;

            }
            numer++;
        }

        plik.close();
    }
    play(player);
}

void save_slot1(string name, string weapon, int hitpoints, int armor, double money, bool pistol, bool shotgun, bool grenade, bool bazook, int pistol_ammo, int shotgun_ammo, int grenades, int bazook_ammo, char hairstyle, int x, int y)	//zapisywanie stanu gry
{
    fstream plik;
    plik.open("save_slot1.txt", ios::out);

    plik << name << endl;
    plik << weapon << endl;
    plik << hitpoints << endl;
    plik << armor << endl;
    plik << money << endl;
    plik << pistol << endl;
    plik << shotgun << endl;
    plik << grenade << endl;
    plik << bazook << endl;
    plik << pistol_ammo << endl;
    plik << shotgun_ammo << endl;
    plik << grenades << endl;
    plik << bazook_ammo << endl;
    plik << hairstyle << endl;
    plik << x << endl;
    plik << y << endl;
    plik.close();
}

void save_slot2(string name, string weapon, int hitpoints, int armor, double money, bool pistol, bool shotgun, bool grenade, bool bazook, int pistol_ammo, int shotgun_ammo, int grenades, int bazook_ammo, char hairstyle, int x, int y)	//zapisywanie stanu gry
{
    fstream plik;
    plik.open("save_slot2.txt", ios::out);

    plik << name << endl;
    plik << weapon << endl;
    plik << hitpoints << endl;
    plik << armor << endl;
    plik << money << endl;
    plik << pistol << endl;
    plik << shotgun << endl;
    plik << grenade << endl;
    plik << bazook << endl;
    plik << pistol_ammo << endl;
    plik << shotgun_ammo << endl;
    plik << grenades << endl;
    plik << bazook_ammo << endl;
    plik << hairstyle << endl;
    plik << x << endl;
    plik << y << endl;
    plik.close();
}

void save_slot3(string name, string weapon, int hitpoints, int armor, double money, bool pistol, bool shotgun, bool grenade, bool bazook, int pistol_ammo, int shotgun_ammo, int grenades, int bazook_ammo, char hairstyle, int x, int y)	//zapisywanie stanu gry
{
    fstream plik;
    plik.open("save_slot3.txt", ios::out);

    plik << name << endl;
    plik << weapon << endl;
    plik << hitpoints << endl;
    plik << armor << endl;
    plik << money << endl;
    plik << pistol << endl;
    plik << shotgun << endl;
    plik << grenade << endl;
    plik << bazook << endl;
    plik << pistol_ammo << endl;
    plik << shotgun_ammo << endl;
    plik << grenades << endl;
    plik << bazook_ammo << endl;
    plik << hairstyle << endl;
    plik << x << endl;
    plik << y << endl;
    plik.close();
}

void save_config(char up, char down, char left, char right)
{
    fstream plik;
    plik.open("config.txt", ios::out);

    plik << up << endl;
    plik << down << endl;
    plik << left << endl;
    plik << right << endl;

    plik.close();
}

