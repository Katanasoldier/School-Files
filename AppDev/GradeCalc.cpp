// 22.05.2025

/* EN: A program that takes 1 int value 'grade' of each out of the 5 students, and displays a menu in the console
       with preset functions that make use of the inputted grades. This includes: grade average, how many have the
       highest grade, display all the grades, exit the program.
*/
/* PL: Program pobiera jedną wartość typu int (ocena) dla każdego z 5 uczniów i wyświetla menu w konsoli
       z gotowymi funkcjami wykorzystującymi wprowadzone oceny. Opcje obejmują: średnia ocen, ile osób
       ma najwyższą ocenę (5), wyświetlenie wszystkich ocen oraz zakończenie programu.
*/


#include <iostream>
#include <conio.h>

using namespace std;

int grades[6] = {0}; // The 0 index will be used to store the sum of the grades
char userChoice;

int main()
{
    for(int i=1; i<sizeof(grades)/sizeof(grades[0]); i++){ // Start from 1 since 0 is the sum

        cout << "Prosze podac ocene od 1 do 5 dla " << i << " ucznia: ";


        int tempCinHolder;

        do{
            cin >> tempCinHolder;
        }while(tempCinHolder < 1 || tempCinHolder > 5);


        grades[0] += tempCinHolder;
        grades[i] = tempCinHolder;

    }


    cout << "\n1. Wyswietl wszystkie oceny.\n2. Oblicz srednia ocen.\n3. Policz, ilu uczniow ma ocene celujaca (czyli 5).\n4. Zakoncz program.\n\n";

    userChoice = _getch();


    switch (userChoice)
    {
    case '1':
        for(int i=1; i<sizeof(grades)/sizeof(grades[0]); i++){
            cout << "Ocena Ucznia " << i << ": " << grades[i] << "\n";
        }

        break;
    
    case '2':
        cout << "Srednia ocen: " << (double) grades[0] / (sizeof(grades) / sizeof(grades[0]) - 1);

        break;

    case '3': {
        int aces = 0;
        
        for(int i=1; i<sizeof(grades)/sizeof(grades[0]); i++){
            if(grades[i] == 5) aces++;
        }

        cout << "Ilosc osob z najwyzsza ocena: " << aces;

        break;
    }
    case '4':
        exit(0);
        
        break;

    default:
        cout << "Opcji " << userChoice << " nie ma w menu!";
    }

    return 0;
}