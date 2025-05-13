// Not really sure when I started this project.

// EN: A program that counts down from 15 with sleep, so it doesn't count down to 0 in less than a second.
// PL: Program, ktory zlicza od 15 z lekkim opoznieniem, aby nie zliczylo do 0 w mniej niz sekunde.

#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    for (int i = 15; i >= 0; i--) {
        Sleep(1000);
        system("cls");
        cout << i << endl;
    }

    cout << "Hello World!\n";
}
