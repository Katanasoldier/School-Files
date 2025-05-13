// 11.05.2025

// EN: Program that draws the letter "A" using the letters "A".
// PL: Program, ktory rysuje litere "A" przy pomocy liter "A".

#include <iostream>

using namespace std;

int main()
{
    int height;

    cout << "Prosze podac wysokosc litery A: ";
    cin >> height;

    int middle = height;
    int width = height * 2 + 1;

    for (int i = 0; i < height; i++) {

        for (int j = 0; j < width; j++) {

            if (j == middle - i || j == middle + i) {
                cout << "A";
            }
            else if (i == height / 2 && j > middle - i && j < middle + i) {
                cout << "A";
            }
            else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}