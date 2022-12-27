#include <iostream> 

int main() {
	
	const int N = 5 ;
	
	char source[N+1];
	
	std::cout << "Scrivi " << N << " caratteri: " << std::endl;
	//for (int i = 0; i < N; ++i) {
		std::cin >> source;//[i];
	//}
	char dest[N+1];
	
	for (int i=0; i<N; ++i) {
		dest[i] = source[N-1-i];
		
	}
	dest[N] = '\0';
	
	//for (int i=0; i<N; ++i) 
	std::cout << source;//[i];
		std::cout << std::endl;
	//for (int i=0; i<N; ++i) 
	std::cout << dest;//[i];
		std::cout << std::endl;
		
	
	return 0;
}
