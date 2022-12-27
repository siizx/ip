#include <iostream>
#include <cmath>
// sto svolgendo queste esercitazioni con ampio ritardo, quindi nonostante io sappia che, fino a questo
// punto dell'eserciziario, (teoricamente) gli array non sarebbero stati ancora discussi in classe, li ho
// usati lo stesso. spero sia accettabile in ogni caso.

using std::cout;
using std::cin;
using std::endl;

int main () {

	int input=0;
	int arm=0;
	int counter = 0;


	cout << "Inserisci un numero intero positivo per verificare se si tratta di un numero di armstrong o meno: ";
	cin >> input;
	cout << endl;
	int original = input;

	while (input > 0) {
		input = input/10;
		counter = counter +1;
	}
	int digit[counter];
	input = original;

	for (int i=0; i<counter; i++) {
		digit[i] = input%10;
		input = input/10;
	}

	for (int j=0; j<counter; j++) {
		arm = arm + pow(digit[j],counter);
	}

	if (arm == original) cout << original << " è un numero di armstrong!" << endl;
	else cout << original << " NON è un numero di armstrong." << endl;


	return 0;
}

