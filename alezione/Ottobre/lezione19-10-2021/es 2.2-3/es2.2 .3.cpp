#include <iostream>

int main()
{
	std::cout << "Inserisci un numero intero: \n";
	int a;
	std::cin >> a;
	if (a<0) a = -a;
	std::cout << "Il suo valore assoluto is: " << a << "\n";	
	return 0;
}
