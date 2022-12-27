#include <iostream>

int main()
{

	float l1;
	float l2;
	std::cout << "Inserisci la lunghezza dei 2 lati del rettangolo: ";
	std::cin >> l1 >> l2;

	float perim = (l1 + l2) * 2;
	float area = (l1 * l2);
		
	
	
	std::cout << "Il perimetro misura: " << perim << "\n";
	std::cout << "L'area invece: " << area << "\n";
	

	return 0;
}
