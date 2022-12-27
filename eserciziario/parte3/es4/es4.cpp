#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	int N;
	char c;
	
	cout << "Inserisci un numero positivo: ";
	cin >> N;
	cout << endl;
	
	if (N<=0) {
		cout << "Avevo detto positivo!" << endl;
		cout << "Errore 1" << endl;
		return 0;
	}
	
	cout << "Inserisci il carattere da replicare: ";
	cin >> c;
	cout << endl;
	
	for (int i=1; i<=N; ++i) {
		cout << c << endl;
	}
		
	
	
	return 0;	
}
