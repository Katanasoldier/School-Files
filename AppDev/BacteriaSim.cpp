// 09.05.2025

// EN: Program that simulates the multiplication of bacteria over time.
// PL: Program symulujacy rozwoj bakterii przez czas.


#include <iostream>

using namespace std;

int population = 1;
int day = 1;

int main()
{

    while(population<10000000){
        population *= 2;
        day++;
    }

    cout << "On day " << day << " there were " << population << " bacteria.";

}
