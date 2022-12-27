#include <iostream>

int main() {

	std::cout << "Inserisci un numero intero: " << std::endl;
	
	int n = 5; // MAX n è 65 se no il pc si impicca.
	std::cin >> n;
	unsigned long int F = n;
	unsigned long int i = (n-1);
	
	if (n < 0) {
		std::cout << "Avevo detto positivo!" << std::endl;
		std::cout << "Codice errore: 7" << std::endl;
	}
	else if (n == 0) std::cout << "Il fattoriale di 0 è 1!" << std::endl;
	
	
	while (i > 1) {
		std::cout << F * i << std::endl;
		F = (F * i);
		i--;
	if (i == 1)
		std::cout << "Il fattoriale di " << n << " è " << F << std::endl;
	}
	
	return 0;
}
