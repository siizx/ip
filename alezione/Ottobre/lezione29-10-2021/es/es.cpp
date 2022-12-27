//incompleto
#include <iostream> 

int main() {
	
	const int N = 100;
	char stringain[N+1];
	char stringaout[N+1] = "";
	
	stringaout[0] = '\0';
	
	std::cout << "Scrivi una stringa lunga al piu " << N << " caratteri: \n";
	std::cin >> stringain;
	
	int len = 0;
	while (stringain[len] != '\0' && len <= N) ++len;
	
	std::cout << "len = " << len << "\n";
	
	return 0;
}
