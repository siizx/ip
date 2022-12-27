// Questo mi ha tenuto occupato per un po... c'ho messo un po a capire come arrangiare il codice in generale... ma dopo tanti tentativi, credo di esserci riuscito.
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main () {

	int input = 0;
	int div = 2;
	int potenza = 0;
	cout << "Inserisci un numero intero maggiore di 1: ";
	cin >> input;
	cout << endl;
	int origin = input;

	while (input !=1) {
		if (input%div == 0) input = input/div;
		potenza = potenza+1;
		if (input%div !=0 && input != origin) cout << div << "^" << potenza;
		if (input%div !=0 && input !=1 && input != origin) cout << " * ";
		while (input%div != 0 && input !=1) {
			div = div +1;
			potenza = 0;
		}
	}
	cout << endl;
    return 0;
}
