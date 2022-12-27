#include <iostream>

int main() {
	
	int n = 0;
	
	while (n >= 0) {
		std::cout << "Inserisci un numero intero positivo oppure uno negativo per terminare: ";
		std::cin >> n;
	for (int i = n; i > 0; --i)
			std::cout << "|";
			std::cout << std::endl;
	}
	return 0;
}
