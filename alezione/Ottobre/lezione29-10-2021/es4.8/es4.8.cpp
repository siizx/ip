#include <iostream> 

int main() {
	
	const int N = 5 ;
	
	float source[N];
	
	std::cout << "Scrivi " << N << " reali: " << std::endl;
	for (int i = 0; i < N; ++i) {
		std::cin >> source[i];
	}
	float dest[N];
	
	for (int i=0; i<N; ++i) {
		dest[i] = source[N-1-i];
		
	}
	
	for (int i=0; i<N; ++i) std::cout << source[i] << " ";
		std::cout << std::endl;
	for (int i=0; i<N; ++i) std::cout << dest[i] << " ";
		std::cout << std::endl;
		
	
	return 0;
}
