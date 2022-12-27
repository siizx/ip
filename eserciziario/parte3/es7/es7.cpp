#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	char answer='a';
	do {
		int n;
		do {
			cout << endl;
			cout << "Inserisci un numero intero positivo: ";
			cin >> n;
			cout << endl;
		} while (n<1);
	
	for (int i=0; i<n; ++i) cout << "|";
	
	cout << endl;
	cout << endl;
	cout << "Inserisci s o S per terminare, qualsiasi altro carattere per proseguire: ";
	cin >> answer;
	
	} while (answer!='s' && answer!='S');
	cout << "Ho terminato perchè hai inserito " << answer << endl;
	return 0;	
}
