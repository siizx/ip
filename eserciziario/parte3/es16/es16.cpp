#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

int main () {

	double input=0;
	double radice;
	double guess;
	bool guessed = false;


	cout << "Inserisci un numero reale positivo: ";
	cin >> input;
	cout << endl;

	radice = sqrt(input);

	do {cout.precision(15);
		cout << "Indovina la radice quadrata di " << input << ": ";
		cin >> guess;
		cout << endl;

		if (radice == guess) {
			cout << "Bravo! Hai indovinato!" << endl;
			guessed = true;
		}
	} while (guessed == false || input<0);

    return 0;
}
