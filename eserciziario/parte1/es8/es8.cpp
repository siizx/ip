#include <iostream>

int main()
{
	
	int annoCorr = 2021;
	int annoNascit;
	
	std::cout << "Inserisci l'anno in cui sei nato: ";
	std::cin >> annoNascit;
	
	int eta = (annoCorr - annoNascit);
	
	std::cout << "Hai " << eta << " anni. \n";


	return 0;
}
