// 12.05.2025

// EN: Program that draws a filled rectangle using the letters "X" based on inputted height and width.
// PL: Program, ktory rysuje wypelniony prostokat przy pomocy liter "X" na podstawie podanej wysokosci i szerokosci.

#include <iostream>

using namespace std;

int main()
{
    int width;
    int height;

    cout << "Prosze podac wysokosc prostokata: ";
    cin >> height;

    cout << "Prosze podac szerokosc prostokata: ";
    cin >> width;

    
    for(int i=0; i<height; i++){
        for(int j=0; j<width; j++){
            cout << "X";
        }
        cout << endl;
    }

    return 0;
}