#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	cout << "Stampare un numero intero positvo a piu cifre: ";
	int k;
	cin >> k;
	cout << endl;
	if (k<0) { 
		cout << "Valore non valido." << endl;
		return 666;
	}	
	cout << "Rovesciando " << k;
	int inv = 0;
	while (k>0) {
		int mod = (k%10);
		k=(k/10);
		inv=(inv*10);
		inv=inv+mod;
	}
	cout << " si ottiene: " << inv << endl;
	return 0;	
}
