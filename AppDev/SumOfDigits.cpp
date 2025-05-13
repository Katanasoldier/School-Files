// Not really sure when I started this project.

// EN: This program takes in an integer, and adds every individual number together via moduling the input variable by 10 each loop until its 0.
// PL: Program ten pobiera liczbe calkowita i dodaje do siebie kazda cyfre z osobna, stosujac operacje modulo z 10 w kazdej iteracji, az liczba stanie sie rowna 0.

#include <iostream>

using namespace std;

int main()
{
	int liczba;
	int suma = 0;

	do {
		cout << "Prosze podac liczbe calkowita: ";
		cin >> liczba;
	} while (liczba <= 0);

	while (liczba > 0) {
		suma += liczba % 10;
		liczba /= 10;
	}

	cout << suma;
}
