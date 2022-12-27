#include <iostream> 

int main() {
	
	const int N = 10;
	
	int v[N];
	
	for (int i = 0; i<N; ++i) {
		v[i] = N-i;
	}
	
	//es2 stampa array
	for (int i=0; i<N; ++i) {
		std::cout << v[i] << std::endl;
	
	}
	
	
	return 0;
}
