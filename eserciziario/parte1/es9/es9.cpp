#include <iostream>

int main()
{
	
	float l1;
	float l2;
	float base;
	float h;
	
	std::cout << "Inserisci la lunghezza della base: \n";
	std::cin >> base;
	
	std::cout << "Inserisci il valore dei restanti 2 lati: \n";
	std::cin >> l1 >> l2;
	
	std::cout << "Ora inserisci il valore dell'altezza: \n";	
	std::cin >> h;
	
	float perim = (l1 + l2 + base);
	float area = (base * h) / 2;
	
	std::cout << "Il perimetro vale: " << perim << "\n";
	std::cout << "L'area misura: " << area << "\n";
	
	return 0;	
}
