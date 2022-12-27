#include <iostream>

int main() {
	
	int a;
	std::cout << "Inserisci un anno: ";
	std::cin >> a;
	
	bool a4 = (a % 4) == 0;
	bool a100 = (a % 100) == 0;
	bool a400 = (a % 400) == 0;
	
	if ((a100 && a400) == true) 
		std::cout << a << " è bisestile." << std::endl;
	
	else if (a4 && !a100) 
		std::cout << a << " è bisestile." << std::endl; 
	else std::cout << a << " non è bisestile." << std::endl;
			
	return 0;
}
