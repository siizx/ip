#include <iostream>

int main () {
	
	std::cout << "Inserisci un numero intero: ";
	int a;
	std::cin >> a;
	std::cout << "Questo è il suo valore assoluto: ";
	std::cout << std::abs(a) << std::endl;
	return 0;
}
