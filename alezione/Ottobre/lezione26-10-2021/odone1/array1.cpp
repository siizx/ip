#include <iostream>

const unsigned int DIM = 10;

int main() {
	
	int A[DIM]={5,6,1,2,3,6,12,5,2,1};
	for(unsigned int i =0; i < DIM; ++i)
		std::cout << A[i] << " ";
	std::cout << std::endl;
	//std::cout << A << std::endl; // stampa l-indirizzo della memoria
	int B[DIM];
	
	for (unsigned int i=0; i<DIM; ++i)
		B[DIM -1 -i] = A[i];
	
	std::cout << "ribaltata: " << std::endl;
	for (unsigned int i=0; i<DIM; ++i)
		std::cout << B[i] << " ";
		std::cout << std::endl;
	return 0;
}
