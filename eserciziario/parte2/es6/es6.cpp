#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
	
	int a,b,c,temp;
	
	cout << "Inserisci 3 numeri interi: " << endl;
	cin >> a >> b >> c;
	cout << endl;
	cout << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << endl;
	
	if (c > a) {
		temp = a;
		a = c;
		c = temp;
	}
	
	if (b > a) {
		temp = b;
		b = a;
		a = temp;
	}
	
	if (c > b) {
		temp = c;
		c = b;
		b = temp;
	}
	
	bool sum = b+c > a;
	
	if (sum) cout << "è un triangolo." << endl;
	else cout << "Non è un triangolo." << endl;
	
	return 0;
}
