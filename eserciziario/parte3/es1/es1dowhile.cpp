#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	
	int quantity;
	cout << "Di quanti numeri vuoi fare la media? ";
	cin >> quantity;
	cout << endl;
	int N=quantity;
	float sum = 0;
	
	do {
		cout << "Errore: il numero doveva essere positivo" << endl;
		cout << "Codice errore: 42" << endl;
		return 0;
	} while (quantity <= 0);
	
	float sum = 0;
	
	do {
		cout << endl;
		cout << "Inserisci un numero: ";
		float x;
		cin >> x;
		sum = sum + x;
		N = --N;
	} while (N>0);
	
	cout << endl;
	cout << "La media è: " << sum/quantity << endl;

	return 0;	
}
