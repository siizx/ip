#include <iostream>

int main()
{
	
	float a;
	float b;
	float c;
	float temp;
	
	std::cout << "Inserisci 3 valori float: ";
	std::cin >> a >> b >> c;
	
	std::cout << "Hai inserito: a = " << a << "   b = " << b << "   c = " << c << "\n";
	
	temp = a;
	a = b;
	b = c;
	c = temp;
	
	std::cout << "Rotazione a sinistra dei valori: a = " << a << "   b = " << b << "   c = " << c << "\n";
	
	

	return 0;
}
