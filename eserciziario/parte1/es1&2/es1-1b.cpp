#include <iostream>

int main ()
{
	int a;
	int b;
	
	std::cout << "Inserisci 2 numeri: " << "\n";
	std::cin >> a >> b;
	std::cout << "Primo numero: " << a << ". Secondo numero: " << b << "." << "\n";
	
	int sum = a + b;
	std::cout << "Their sum is: " << sum << "\n";
	
	return 0;
}
