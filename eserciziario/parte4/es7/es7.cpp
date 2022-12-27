#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	int N = 4;
	int a[N];
	int max = -99992183;
	int counter = 1;
	
	cout << "Inserisci " << N << " numeri: ";
	for (int i=0; i<N; i++) {
		cin >> a[i];
	}
	
	cout << endl;
	
	for (int j=0; j<N; j++) {
		if(max < a[j]) max = a[j];
		else if (max == a[j]) counter = counter +1;
	}
	
	cout << "Il valore massimo inserito è: " << max << ", ed è stato inserito " << counter << " volte." << endl;
	
	
	return 0;	
}
