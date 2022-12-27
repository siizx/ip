#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	int n;
	cout << "Inserisci un numero: ";
	cout << endl;
	cin >> n;
	int spazi = n-1;
	for (int i=0; i<=n; ++i) {
		for (int j=0; j<n-i; ++j)
			cout << " ";
		for (int k=0; k<(i*2+1); ++k)
				cout << "*";
		cout << endl;
	}
	
	for (int i=n; i>0; --i) {
		for (int j=0; j<=n-i; ++j)
			cout << " ";
		for (int k=0; k<(i*2-1); ++k)
				cout << "*";
		cout << endl;
	}
	
	
	return 0;	
}
