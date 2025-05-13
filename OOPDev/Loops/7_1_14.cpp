// 12.05.2025

// EN: Program that draws a square using the letters "K" based on side length.
// PL: Program, ktory rysuje kwadrat przy pomocy liter "K" na podstawie dlugosci boku.

#include <iostream>

using namespace std;

int main()
{
    int sideLength;

    cout << "Prosze podac dlugosc boku kwadratu: ";
    cin >> sideLength;

    for (int i = 0; i < sideLength; i++) {
        for (int j = 0; j < sideLength; j++) {
            cout << "K";
        }
        cout << endl;
    }

    return 0;
}