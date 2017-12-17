#include <iostream>
#include <windows.h>
#include <time.h>
#include "Interface.hpp"

using namespace std;

void Loading()
{
    int time = 1;
    int j = 1;
    cout << "Wczytywanie ";

        while(time <= 3)
        {
            while(j <= time)
            {
                cout << " - ";
                Sleep(333);
                j++;
            }
            time++;
        }
}

