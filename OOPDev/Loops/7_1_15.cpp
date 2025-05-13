// 12.05.2025

/* EN: Program that draws a traingle of numbers, starting from 1, until the inputted height, in the following format:
    1
    1 2
    1 2 3

   PL: Program, ktory rysuje trojkat liczb, zaczynajac od 1, az do podanej wysokosci, w nastepujacej formie:
    1
    1 2
    1 2 3
*/

#include <iostream>

using namespace std;

int main()
{
    int height;

    cout << "Prosze podac wysokosc trojkata: ";
    cin >> height;

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}