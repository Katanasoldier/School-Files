// Not really sure when I started this project.

// EN: A simple program to ouput an inserted by the user string times the user's inserted number.
// PL: Prosty program ktory wypisuje ciag znakow podany przez uzytkownika tyle razy jaka podal liczbe.


#include <iostream>

using namespace std;

int main()
{
    string imie;
    cin >> imie;
    int liczba;
    cin >> liczba;

    for (int i = 1; i < liczba; i++) {
        cout << imie << endl;
    }
}
