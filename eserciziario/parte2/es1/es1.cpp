#include <iostream>

int main() {
	
	std::cout << "Inserisci 2 caratteri: " << std::endl;
	char a,b;
	std::cin >> a >> b;
	
	if (a == b)
		std::cout << "Uguali" << std::endl;
	else std::cout << "Diversi" << std::endl;
	
	
	return 0;
}
