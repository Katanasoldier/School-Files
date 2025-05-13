// 12.05.2025

// EN: Program that draws an unfilled triangle using the letters "X" based on inputted height.
// PL: Program, ktory rysuje niewypelniony trojkat przy pomocy liter "X" na podstawie podanej wysokosci.

#include <iostream>

using namespace std;

int main()
{
    int height;

    cout << "Prosze podac wysokosc trojkata: ";
    cin >> height;

    int middle = height;
    int width = height * 2 + 1;

    for (int i = 0; i < height; i++) {

        for (int j = 0; j < width; j++) {

            if (j == middle - i || j == middle + i) {
                cout << "X";
            }
            else if (i == height - 1 && j > middle - i && j < middle + i) {
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