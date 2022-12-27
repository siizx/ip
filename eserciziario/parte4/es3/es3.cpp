#include <iostream>

using namespace std;

int main()
{
	int N = 3;
	int v[N];
	cout << "Inserisci " << N << " valori interi: ";
	for (int i=0; i<N; i++) {
		cin >> v[i];
	}
	cout << endl;
	cout << "Ecco i valori inseriti: ";
	for (int i=0; i<N; i++) {
		cout << v[i];
		cout << " ";
	}
	cout << endl;
	return 0;
}