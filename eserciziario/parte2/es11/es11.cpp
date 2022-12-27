#include <iostream>

int main() {
	
	int num;
	std::cout << "Inserisci il numero del mese: ";
	std::cin >> num;
	
	if (num < 1 || num > 12)
		std::cout << "Inserimento incorretto" << std::endl;
	
	switch (num) {
		case 1:
			std::cout << "Gennaio" << std::endl;
			break;
		case 2:
			std::cout << "Febbraio" << std::endl;
			break;
		case 3:
			std::cout << "Marzo" << std::endl;
			break;
		case 4:
			std::cout << "Aprile" << std::endl;
			break;
		case 5:
			std::cout << "Maggio" << std::endl;
			break;
		case 6:
			std::cout << "Giugno" << std::endl;
			break;
		case 7:
			std::cout << "Luglio" << std::endl;
			break;
		case 8:
			std::cout << "Agosto" << std::endl;
			break;
		case 9:
			std::cout << "Settembre" << std::endl;
			break;
		case 10:
			std::cout << "Ottobre" << std::endl;
			break;
		case 11:
			std::cout << "Novembre" << std::endl;
			break;
		case 12:
			std::cout << "Dicembre" << std::endl;
			break;
	}
	
	
	return 0;
}
