// es rombo asterischi
#include <iostream>

int main() {

	int n;
	std::cout << "Inserire un numero n positivo: ";
	std::cin >> n;
	if (n < 0) {
		std::cout << "inserire un numero positivo" << std::endl;
		return -1;
		
	}

	for (int i=0; i<=n; ++i){
		for(int j=0; j <= n-i; ++j)		
			std::cout << " ";
		for (int j=0; j < 2*i+1; j++)
			std::cout << "*";
		std::cout << std::endl;
	}
	for (int i=0; i<=n; ++i) {
		for (int j=1; j<i; ++j)
			cout << " ";
		for (int k=0; k<=(i*2); ++k)
				cout << "*";
		std::cout << std::endl;
	}

	return 0;
}
