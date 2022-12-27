#include <iostream>

int main() {
	
	std::cout << "Inserisci 3 numeri interi: " << std::endl;
	int a, b, c;
	std::cin >> a >> b >> c;
	std::cout << "Hai inserito: " << a << "; " << b << "; " << c << std::endl;
	int temp = b;
	
	if (a > c) {
		temp = c;
		c = a;
		a = temp;
	}
	
	if (b > c) {
		temp = c;
		c = b;
		b = temp;
	}
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	std::cout << "I numeri inseriti, in ordine crescente, sono: " << a << " < " << b << " < " << c << std::endl;
	
	
	
	return 0;
}

