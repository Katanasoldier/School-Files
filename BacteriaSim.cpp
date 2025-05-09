// 09.05.2025

// EN: Program that simulates the multiplication of bacteria over time.
// PL: Program symulujacy rozwoj bakterii przez czas.


#include <iostream>

using namespace std;

int Population = 1;
int Day = 1;

int main()
{

    while(Population<10000000){
        Population *= 2;
        Day++;
    }

    cout << "On day " << Day << " there were " << Population << " bacteria.";

}
