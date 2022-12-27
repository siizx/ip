#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	const int N = 5;
	int v[N];
	//std::ifstream mioFileDaLeggere;
	//std::ofstream mioFileDaScrivere;
	
	std::ofstream mioFile;
	
	// 1)aprire un file:
	mioFile.open("numeri.txt");
	
	
	// 2) fare lettura o scrittura
	//mioFileDaLeggere >> var;
	//mioFileDaScrivere << var;
	for (int i=0; i<N; ++i) {
		int p;
		cin >> p;
		v[i] = p;
		mioFile >> v[i];
		cout << v[i] << endl;
	}	
	

	// 3) chiudere il file.
	
	mioFile.close(); //niente tra parentesi
	
	return 0;	
}


