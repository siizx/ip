#include <iostream> 
#include <cmath>

int main () {
	
	const float pi = 3.14;
	float r;
	std::cout << "Inserisci quanto misura il raggio del cerchio: ";
	std::cin >> r;	
	float perim = (2 * pi * r);
	std::cout << "Il Perimetro misura " << perim << std::endl;
	float area = (pi * (r * r));
	std::cout << "L'area vale " << area << std::endl;
	
	return 0;
}
