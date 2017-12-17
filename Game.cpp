#include <iostream>
#include <string>
#include <time.h>
#include <windows.h>
#include <stdio.h>
#include "Interface.hpp"

using namespace std;

void option_error()
{
    system("cls");
    cout << "Zle wybrana opcja!";
    Sleep(1000);
    system("cls");
}

void text(string n)
{
    for(int i=0; i<=n.size(); i++)
    {
        cout << n[i];
        Sleep(50);
    }
    cout << endl;
}

char createCharacter()
{
    char result='@';
    int view=0;
    int read;
    system("cls");

    text("Witaj w kreatorze postaci!");
    cout << endl;
    Sleep(1000);
    text("Na czym polega kreator postaci kazdy chyba wie, ale jesli chodzi o ten kreator...");Sleep(500);text("noo... jest pewien tyci szczegol...");Sleep(1500);
    cout << endl << endl;
    text("Jak wiadomo, gra napisana jest w Windowsowym commandlinie, co oznacza tyle, ze obserwujesz swoja postac z gory...");Sleep(1000);text("ekhm...");Sleep(1000);text("uscislajac, oznacza to tylko tyle, ze wlasciwie przez cala gre obserwujesz tylko i wylacznie jej wlosy, a wchodzac jeszcze glebiej w szczegoly...");Sleep(1000);text("hmm...");Sleep(1500);text("znaczek bedacy jej fryzura...");
    cout << endl;
    text("A wieeeec...");Sleep(1000);text("taaaaaaaaaa...");Sleep(1500);text("no wiec wybierz prosze sygnaturke reprezentujaca Twoje szalowe uczesanie :>");
    Sleep(1000);
    system("cls");

    cout << "3"; Sleep(1000); system("cls"); cout << "2"; Sleep(1000); system("cls"); cout << "1"; Sleep(1000); system("cls");
WIDOK:
    cout << "-=TWORZENIE POSTACI=-\n\n\n";
    if(view == 0)
    {
        cout << " ";
        if(view == 0)
        {
            if(result == '@' || result == 'x')
            {
                cout << '_';
            }
            else
            {
                cout << '.';
            }
        }
        cout << endl << " O\n" << " |\n" << "/|\\" << endl << "/ \\";
       cout << endl << endl;

       cout << "1. @\n" << "2. !\n" << "3. ?\n" << "4. x\n\n" << "5. Widok od frontu\n" << "6. Widok z gory\n" << "7. Zakoncz tworzenie postaci i przejdz dalej\n\n" << "Wybierz fryzure/opcje: " ;
       cin >> read;
       switch(read)
       {
       case 1:
        system("cls");
        result = '@';
        goto WIDOK;
        break;
       case 2:
        system("cls");
        result = '!';
        goto WIDOK;
        break;
       case 3:
        system("cls");
        result = '?';
        goto WIDOK;
        break;
       case 4:
        system("cls");
        result = 'x';
        goto WIDOK;
        break;
       case 5:
        system("cls");
        view = 0;
        goto WIDOK;
        break;
       case 6:
        system("cls");
        view = 1;
        goto WIDOK;
        break;
       case 7:
        return result;
        default:
        option_error();
        goto WIDOK;
       }
    }

       else if(view == 1)
       {
           cout << result;

                  cout << endl << endl;

       cout << "1. @\n" << "2. !\n" << "3. ?\n" << "4. x\n\n" << "5. Widok od frontu\n" << "6. Widok z gory\n\n" << "7. Zakoncz tworzenie postaci i przejdz dalej\n\n" << "Wybierz fryzure/opcje: " ;
       cin >> read;
       switch(read)
       {
       case 1:
        system("cls");
        result = '@';
        goto WIDOK;
        break;
       case 2:
        system("cls");
        result = '!';
        goto WIDOK;
        break;
       case 3:
        system("cls");
        result = '?';
        goto WIDOK;
        break;
       case 4:
        system("cls");
        result = 'x';
        goto WIDOK;
        break;
       case 5:
        system("cls");
        view = 0;
        goto WIDOK;
        break;
       case 6:
        system("cls");
        view = 1;
        goto WIDOK;
        break;
       case 7:
        return result;
       default:
        option_error();
        goto WIDOK;
       }
       }

       else {}


}
