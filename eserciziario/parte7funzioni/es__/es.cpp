#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int trovaZeri(int n) {
	int numeroZeri 0;
	for (int i=5; n/i >= 1; i*=5)
		numeroZeri += n/i;
	return numeroZeri;
}

int main() 
{
	
	int n;
	cout << "Inserisci il numero di cui vuoi calcolare gli zeri finali del suo fattoriale: ";
	cin >> n;
	
	if(n<0) {
		cout << "Riprovare con un numero positivo." << endl;
		return 0;
	}
	int numeroZeri = 0;
	for(int i =5; n/i; i*=5)
		numeroZeri += n/i;
	cout << "Il numero di zeri in " << n << " è " << numeroZeri << endl;
	
	return 0;	
}
