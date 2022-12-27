#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	cout << "Inserisci una lettera maiuscola (oppure un altro carattere per uscire dal programma): ";
	char first = 'Z';
	int c = 'Z';
	cin >> first;
	cout << endl;
	
	while (first>='A' && first<='Z') {
		cout << endl;
		cout << "Inserisci un altro carattere: ";
		cin >> first;
		if (first<c && first>='A' && first<='Z') c = first;
		else { 
			cout << endl;
			cout << "La lettera piu piccola inserita è: "<< static_cast<char>(c) << endl;
			return 0;
		}		
	}
	return 0;	
}
