//NON CORRETTO
#include <iostream>

int main() {

	const int N = 5;
	std::cout << "Scrivi " << N << " numeri reali: " << std::endl;
	float v[N];
	for (int i = 0; i<N; i++)
		std::cin >> v[i];
	}
	float media = 0;
	for (int i=0; i<N; i++) {
	media += v[i];
	}
	media /= N;
	std::cout << "La media dei tuoi " << N << "numeri è ";
	std::cout << media << "\n";
	return 0;
}
