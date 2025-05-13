// 11.05.2025

// EN: Program that draws a rectangle using the letters "X".
// PL: Program, ktory rysuje prostokat przy pomocy liter "X".

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
            if(i==0 || i==height-1 || j==0 || j==width-1){
                cout << "X";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}