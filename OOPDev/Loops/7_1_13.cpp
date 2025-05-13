// 12.05.2025

// EN: Program that draws a cross using the character "#" based on inputted height.
// PL: Program, ktory rysuje krzyz przy pomocy znaku "#" na podstawie podanej wysokosci.

#include <iostream>

using namespace std;

int main()
{
    int height;

    cout << "Prosze podac wysokosc krzyza: ";
    cin >> height;

    height *= 2;

    for (int i = 0; i <= height; i++) {
        for (int j = 0; j <= height; j++) {
            if (i == height / 2 || j == height / 2) {
                cout << "#";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}