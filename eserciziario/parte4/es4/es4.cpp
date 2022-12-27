#include <iostream>
using namespace std;

int main()
{
	int N = 3;
	float sum=0;
	float v[N];
	
	cout << "Inserisci 3 nuneri reali: ";
	for (int i=0; i<N; i++) {
		cin >> v[i];
	}
	
	cout << "Ecco i valori inseriti: ";
	for(int j = 0; j<N; j++) {
		cout << v[j] << " ";
		sum = sum+v[j];
	}
	cout << endl;
	cout << "Ed ecco la loro media: ";
	cout << sum/N << endl;
	
	return 0;
}
