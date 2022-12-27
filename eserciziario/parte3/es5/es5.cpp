#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	int N = -1;
	
	do {
		cout << "Inserisci un numero maggiore di 0: ";
		cin >> N;
		cout << endl;
	} while (N<=0);
	
	for (int i=0; i<N; ++i) {
		for (int j=0; j<=i; ++j) {
			cout << "*";
		}
		cout << endl;
	}	
	return 0;	
}
