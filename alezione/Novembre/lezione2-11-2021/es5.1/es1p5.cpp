#include <iostream>
#include <fstream>


using std::cout;
using std::cin;
using std::endl;

int main() 
{
	
	const int N = 15;
	int item;
	
	std::cin >> item;
	
	int v[N];
	std::cin >> v[N];
	
	int loc = -1;
	bool found = false;
	
	for (int i=0; i<N; ++i) {
	cin >> v;
	}
	
	if (found == true) std::cout << "Trovato in posizione " << loc << std::endl;
		else std::cout << "Non trovato" << std::endl;	
	
	
	return 0;	
}


