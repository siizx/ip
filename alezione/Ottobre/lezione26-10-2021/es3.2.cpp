//NON CORRETTO

#include <iostream>
int main() {

	std::cout << "Inserisci una lettera maiuscola: ";
	char first;

	do {
		std::cout << first;
	} while (first < 'A' || first > 'Z');
	char c = 'Z';
	do {
	if (c < first) first = c;
	std::cout << "Scrivi una lettera maiuscola ";
	std::cout << "o un altro carattere per terminare: ";
	std::cin >> c;
	} while (c >= 'A' && c <= 'Z');
		std::cout << "La lettera piu piccola è: " << first << std::endl;

	return 0;
}
