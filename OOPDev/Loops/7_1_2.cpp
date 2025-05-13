// 11.05.2025

// EN: Program that draws a triangle using the letters "O".
// PL: Program, ktory rysuje trojkat przy pomocy liter "O".

#include <iostream>

using namespace std;

int main()
{
    for(int i=0; i<5; i++){

        for(int j=0; j<=i; j++){
            cout << "O";
        }
        
        cout << endl;
    }

    return 0;
}