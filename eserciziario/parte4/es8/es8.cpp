#include <iostream>

using namespace std;





int main() {
	
	int N = 5;
	int source[N];
	int counter=N-1;
	
	cout << "Inserisci " << N << " valori: ";
	
	for (int i=0; i<N ; i++) {
		cin >> source[i];
	}
	cout << endl;
	cout << "Ecco i valori inseriti: ";
	for (int n=0; n<N ; n++) {
		cout << source[n];
		cout << " ";
	}
	cout << endl;
	cout << endl;
	
	int dest[N];
	
	cout << "Ecco i valori al contrario: ";
	for (int j=0; counter>=0; j++) {
		dest[j] = source[counter];
		cout << dest[j];
		cout << " ";
		counter--;
	}
	cout << endl;
	return 0;
}
