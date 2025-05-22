// 09.05.2025

// EN: Program that calculates the average of 5 inserted grades.
// PL: Program, ktory oblicza srednia 5 podanych ocen.

#include <iostream>

using namespace std;

int grades[6] = {0};

int main()
{
    for(int i=0; i<5; i++){
        int tempVar;

        cout << "Prosze podac " << i+1 << " ocene: ";
        cin >> tempVar;

        grades[i+1] = tempVar;
        grades[0] += tempVar;
    }

    cout << "Srednia ocen wynosi: " << (float) grades[0]/(sizeof(grades)/sizeof(grades[0])-1); // Calculates the average by dividing the first index of the array with the size of the array, minus the first index which holds the sum of the grades.


    return 0;
}
