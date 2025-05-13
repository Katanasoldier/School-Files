// 12.05.2025

// EN: Program that draws a simple triangle without centering it using the letters "X" based on inputted height.
// PL: Program, ktory rysuje prosty trojkat bez srodkowania go przy pomocy liter "X" na podstawie podanej wysokosci.

#include <iostream>

using namespace std;

int main()
{
    int height;

    cout << "Prosze podac wysokosc trojkata: ";
    cin >> height;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "X";
        }
        cout << endl;
    }

    return 0;
}