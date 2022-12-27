#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	int temp;
	std::cout << "Inserisci la temperatura: " << "\n";
	std::cin >> temp;
	
	if (-20 <= temp && temp <= 0)
		std::cout << "Freddo dannato \n";
	else if (1 <= temp && temp <= 15)
		std::cout << "Freddo \n";
	else if (16 <= temp && temp <= 23)
		std::cout << "Normale \n";
	else if (24 <= temp && temp <= 30)
		std::cout << "Caldo \n";
	else if (31 <= temp && temp <= 40)
		std::cout << "Caldo da morire \n";
	else std::cout << "Non ci credo, il termometro deve essere rotto. \n";
	
	return 0;
}
