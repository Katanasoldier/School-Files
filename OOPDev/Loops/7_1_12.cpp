// 12.05.2025

// EN: Program that draws an unfilled triangle aligned to the right using the letters "X" based on inputted height.
// PL: Program, ktory rysuje niewypelniony trojkat wyrównany do prawej przy pomocy liter "X" na podstawie podanej wysokosci.

#include <iostream>

using namespace std;

int main()
{
    int height;

    cout << "Prosze podac wysokosc trojkata: ";
    cin >> height;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++) {
            cout << " ";
        }

        for (int j = 0; j < height; j++) {
            if (j == 0 || i == height - 1 || j == i) {
                cout << "X";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}