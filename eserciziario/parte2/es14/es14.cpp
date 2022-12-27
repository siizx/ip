#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

// ATTENZIONE: NON CREDO DI AVER CAPITO BENE LE INDICAZIONI. Ma ho provato a farlo lo stesso.

int main() 
{
	float a;
	float b;
	float c;
	
	cout << "Inserisci 3 numeri reali: " << endl;
	cin >> a >> b >> c;
	
	float delta = (pow(b,2) - (4 * a * c));
	
	if (delta<0) {
		cout << "Impossibile, delta negativo." << endl;
	return 0;
	}
	
	float risultP = (-b + sqrt(delta))/(2*a);
	float risultM = (-b - sqrt(delta))/(2*a);
	
	cout << "x': " << risultP << endl;
	cout << "x'':" << risultM << endl;
	
	return 0;	
}


