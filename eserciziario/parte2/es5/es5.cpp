#include <iostream>

int main() {
	
	int a;
	std::cout << "Inserisci un numero intero: ";
	std::cin >> a;
	
	if ((a % 13) == 0)
		std::cout << a << " è divisibile per 13." << std::endl;
	else std::cout << "Non è divisibile per 13." << std::endl;
	
	return 0;
}
