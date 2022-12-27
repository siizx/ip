#include <iostream>

using std::endl;
using std::cout;


int main() {
	
	
	cout << "Inserisci 2 numeri: " << endl;
	float a = 0;
	float b = 0;
	std::cin >> a >> b;
	
	float semid = (std::abs(a - b) / 2);
	float m = ((a + b) /2);
	
	float npiccolo = m - semid;
	float ngrande = m + semid;
	
	
	
	cout << "Eccoli in ordine crescente: " << npiccolo << "; " << ngrande << endl;
	
	return 0;
}
