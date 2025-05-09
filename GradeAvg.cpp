// 09.05.2025

// EN: A program that counts down from 15 with sleep, so it doesn't count down to 0 in less than a second.
// PL: Program, ktory zlicza od 15 z lekkim opoznieniem, aby nie zliczylo do 0 w mniej niz sekunde.

#include <iostream>

using namespace std;

int oceny[6] = {0};

int main()
{
    for(int i=0; i<5; i++){
        int tempVar;

        cout << "Prosze podac " << i+1 << " ocene: ";
        cin >> tempVar;

        oceny[i+1] = tempVar;
        oceny[0] += tempVar;
    }

    cout << "Srednia ocen wynosi: " << (float) oceny[0]/(sizeof(oceny)/sizeof(oceny[0])-1); // Calculates the average by dividing the first index of the array with the size of the array, minus the first index which holds the sum of the grades.


    return 0;
}
