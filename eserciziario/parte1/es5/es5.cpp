#include <iostream>

int main () 
{
	char a;
	char b;
	char temp;

	std::cout << "Inserisci 2 caratteri: \n";
	std::cin >> a >> b;
	
	std::cout << "a = " << a << "   b = " << b << "\n"; 
	std::cout << "invertiamo i valori: \n";
	
	temp = a;
	a = b;
	b = temp;
	
	std::cout << "a = " << a << "   b = " << b << "\n"; 


	return 0;
}
