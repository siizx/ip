#include <iostream> 
#include <cmath>

int main () {
	
	
	long int a;
	long int b;
	std::cout << "Inserisci 2 numeri interi: " << std::endl;
	std::cin >> a;	
	std::cin >> b;
	double float m = (static_cast<float>(a) + static_cast<float>(b)) / 2;
	std::cout << "La media dei numeri inseriti è: " << m << std::endl;
	return 0;
}
