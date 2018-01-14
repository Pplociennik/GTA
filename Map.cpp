#include <iostream>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <vector>
#include <fstream>
#include "Interface.hpp"

using namespace std;

int Mc[150][150];

void fill_map_coords()
{
    for(int i=0;i<150; i++)
    {
        for(int j=0; j<150; j++)
        {
            Mc[i][j] = 0;
        }
    }
}

void save_defaultmap_coords()
{
    fstream plik;
    plik.open("default_map.txt", ios::out);
     for(int i=0; i<150; i++)
    {
        for(int j=0; j<150; j++)
        {
            plik << Mc[i][j];
        }
        cout << endl;
    }
    plik.close();
}

void load_defaultmap_coords()
{
    fstream plik;
    plik.open("default_map_coords.txt", ios::out);
    plik.read( reinterpret_cast < char *>( &Mc ), sizeof( &Mc ) );
    plik.close();
}

void load_map()
{
    for(int i=0; i<150; i++)
    {
        for(int j=0; j<150; j++)
        {
            if(Mc[i][j] == 1)
            {
                gotoxy(i, j);
                cout << '#';
            }
            else if(Mc[i][j] == 2 || Mc[i][j] == 3 || Mc[i][j] == 4)
            {
                gotoxy(i, j);
                cout << '=';
            }
            else if(Mc[i][j] == 7)
            {
                gotoxy(i, j);
                cout << 'B';
            }
            else if(Mc[i][j] == 8)
            {
                gotoxy(i, j);
                cout << 'H';
            }
            else if(Mc[i][j] == 9)
            {
                gotoxy(i, j);
                cout << '+';
            }

        }
    }
}

void map_creator(Character player)
{
    load_defaultmap_coords();
    char znak;
    system("cls");
    int x = 4;
    int y = 4;
    fill_map_coords();
    showPlayer(player);
    gotoxy(x, y);
    cout << "A";

        do
    {
        znak = getch();
        if(znak == 'w')
        {
            goUp(x, y, 'A');
            y--;
                        if(Mc[x][y] != 1 && Mc[x][y] != 2 && Mc[x][y] != 3 && Mc[x][y] != 4 && Mc[x][y] != 7 && Mc[x][y] != 8 && Mc[x][y] != 9)
            {
            load_map();
            }
        }
        else if(znak == 'a')
        {
            goLeft(x, y, 'A');
            x--;
                        if(Mc[x][y] != 1 && Mc[x][y] != 2 && Mc[x][y] != 3 && Mc[x][y] != 4 && Mc[x][y] != 7 && Mc[x][y] != 8 && Mc[x][y] != 9)
            {
            load_map();
            }
        }
        else if(znak == 'd')
        {
            goRight(x, y, 'A');
            x++;
                        if(Mc[x][y] != 1 && Mc[x][y] != 2 && Mc[x][y] != 3 && Mc[x][y] != 4 && Mc[x][y] != 7 && Mc[x][y] != 8 && Mc[x][y] != 9)
            {
            load_map();
            }
        }
        else if(znak == 's')
        {
            goDown(x, y, 'A');
            y++;
            if(Mc[x][y] != 1 && Mc[x][y] != 2 && Mc[x][y] != 3 && Mc[x][y] != 4 && Mc[x][y] != 7 && Mc[x][y] != 8 && Mc[x][y] != 9)
            {
            load_map();
            }
        }
        else if(znak == '1')
        {
            Mc[x][y] = 1;
        }
        else if(znak == '2')
        {
            Mc[x][y] = 2;
        }
        else if(znak == '3')
        {
            Mc[x][y] = 3;
        }
        else if(znak == '4')
        {
            Mc[x][y] = 4;
        }
        else if(znak == '7')
        {
            Mc[x][y] = 7;
        }
        else if(znak == '8')
        {
            Mc[x][y] = 8;
        }
        else if(znak == '9')
        {
            Mc[x][y] = 9;
        }
        else if(znak == 'r')
        {
            Mc[x][y] = 0;
            gotoxy(x, y);
            cout << " ";
            gotoxy(x, y);
            cout << 'A';
        }
        else if(znak == 27)
        {
            PauseMenu(player);
            save_defaultmap_coords();
        }
    }
    while(1==1);
}
