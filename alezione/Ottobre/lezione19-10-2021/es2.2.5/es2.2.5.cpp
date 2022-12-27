#include <iostream>

int main()
{
	std::cout << "Inserisci un numero intero: \n";
	int a;
	std::cin >> a;
	
	
	if ((a % 13) == 0) std::cout << a << " is divisible by 13. \n";
		else std::cout << a << " is not divisible by 13. \n";
	
	return 0;
}
