#include <iostream>

int main ()
{
	int a;
	int b;
	
	std::cout << "Inserisci 2 numeri: " << "\n";
	std::cin >> a >> b;
	std::cout << "Hai inserito: \n" << "a = " << a << "\n" << "b = " << b << "\n";
	
	std::cout << "La differenza vale: " << a - b << "\n";
	
	
	return 0;
}
