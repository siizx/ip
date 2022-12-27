//Scrivere un programma che scambia fra loro i valori di due variabili senza usare variabili di appoggio.
// non so se è perchè mi son perso qualcosa a lezione o per altro, ma questo esercizio son riuscito a capirlo solo andando a guardare su google come xor interagisce con i bit. quindi per forza mi sono imbattuto nella risposta prima di provare a svolgerlo. 

#include <iostream>

using std::endl;
using std::cout;


int main() {
	
	cout << "Inserisci 2 numeri interi: " << endl;
	int a;
	int b;
	std::cin >> a >> b;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	a = a^b;
	b = a^b;
	a = a^b;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	
	
	return 0;
}
