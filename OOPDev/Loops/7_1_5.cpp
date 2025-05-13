// 12.05.2025

// EN: Program that draws a the letter "L" using the letters "L" based on inputted height, width and and thickness.
// PL: Program, ktory rysuje litere "L" przy pomocy liter "L" na podstawie podanej wysokosci, szerokosci i grubosci.

#include <iostream>

using namespace std;

int main()
{
    int height;
    int width;
    int thickness;

    cout << "Prosze podac wysokosc litery L: ";
    cin >> height;

    cout << "Prosze podac szerokosc litery L: ";
    cin >> width;

    cout << "Prosze podac grubosc litery L: ";
    cin >> thickness;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i < thickness) {
                if (j < thickness) {
                    cout << "L";
                }
                else {
                    cout << " ";
                }
            }
            else if (i >= height - thickness) {
                if (j < width) {
                    cout << "L";
                }
                else {
                    cout << " ";
                }
            }
            else {
                if (j < thickness) {
                    cout << "L";
                }
                else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}