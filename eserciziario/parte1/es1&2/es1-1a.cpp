#include <iostream>

int main()
{
	int a;
	int b;
	
	std::cout << "Inserisci 2 numeri: " << "\n";
	std::cin >> a >> b;
	std::cout << "Primo numero: " << a << ". Secondo numero: " << b << "." << "\n";
	
	std::cout << "Their sum is: " << a + b << "\n";
	
	return 0;
}
