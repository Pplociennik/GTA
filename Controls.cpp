#include <iostream>
#include <windows.h>
#include <conio.h>
#include <vector>
#include <fstream>
#include "Interface.hpp"

using namespace std;

char Up_c = 'w';
char Down_c = 's';
char Left_c = 'a';
char Right_c = 'd';

void load_config_c()
{
    fstream plik;
    string linia;
    int numer = 0;

    plik.open("config.txt",ios::in);

    	fstream file;
	vector <char> dane;
	file.open ("config.txt", std::fstream::in);
	char x;
	while(file >> x){
		dane.push_back(x);
	}
	file.close();
system("cls");

	Up_c = dane[0];
	//Up_g = dane[0];

	Down_c = dane[1];
	//Down_g = dane[1];

	Left_c = dane[2];
	//Left_g = dane[2];

	Right_c = dane[3];
	//Right_g = dane[3];

        plik.close();
    }

void Controls(Character player)
{
    load_config_c();

    int read;
    system("cls");
    cout << "STEROWANIE\n\n"<< "Wybierz akcje aby zmienic przypisany klawisz\n\n";
    cout << "   Ruch w gore [" << Up_c << "]\n" << "   Ruch w dol [" << Down_c << "]\n" << "   Ruch w lewo [" << Left_c << "]\n" << "   Ruch w prawo [" << Right_c << "]\n   Wroc";
    read = MenuControls(4, 8);

    switch(read)
    {
    case 3:
        cout << "Wybierz klawisz: ";
        cin >> Up_c;
        save_config(Up_c, Down_c, Left_c, Right_c);
        Controls(player);
        break;
            case 4:
        cout << "Wybierz klawisz: ";
        cin >> Down_c;
        save_config(Up_c, Down_c, Left_c, Right_c);
        Controls(player);
        break;
            case 5:
        cout << "Wybierz klawisz: ";
        cin >> Left_c;
        save_config(Up_c, Down_c, Left_c, Right_c);
        Controls(player);
        break;
            case 6:
        cout << "Wybierz klawisz: ";
        cin >> Right_c;
        save_config(Up_c, Down_c, Left_c, Right_c);
        Controls(player);
        break;
    case 7:
        Options(player);
        break;
    }
}
