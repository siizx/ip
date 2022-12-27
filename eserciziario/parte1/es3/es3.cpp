#include <iostream>

int main ()
{
	int a;
	int b;
	int temp;
	
	std::cout << "Inserisci 2 numeri: " << "\n";
	std::cin >> a >> b;
	
	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";
	 
	temp = a;
	a = b;
	b = temp;
	
	std::cout << "I valori sono stati scambiati: " << "\n";
	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";
	
	return 0;
}
