#include <iostream>

int main() {
	
	std::cout << "Inserisci un numero: " << std::endl;
	long double a;
	std::cin >> a;
	
	long double b = a / 4.9;
	std::cout << b << std::endl;
	
	long double c = b / 3.53;
	std::cout << c << std::endl;
	
	long double d = c / 6.9998;
	std::cout << d << std::endl;
	
	long double ab = d * 4.9;
	std::cout << ab << std::endl;
	
	long double bc = ab * 3.53;
	std::cout << bc << std::endl;
	
	long double cd = bc * 6.9998;
	std::cout << cd << std::endl;
	
	if (a != cd) std::cout << "(non riesco a leggere dal pdf cosa dovrei stampare)."
	return 0;
}
