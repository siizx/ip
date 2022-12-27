#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	int num;
	cout << "Inserisci un numero intero positivo: ";
	cin >> num;
	cout << endl;
	int k=0;
	
	if (num < 1) {
		cout << "Il numero non è positivo. \nUscendo dal programma..." << endl; 
		return 0;
	}
	
	while (num>=1) {
		num=num/10;
		k=k+1;
	}
	cout << "Il numero totale di cifre inserite è: " << k << endl;
	return 0;	
}
