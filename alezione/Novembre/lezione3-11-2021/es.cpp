//esercizio prendere un array di interi da input e riordinarlo in ordine crescente.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int DIM = 10;

int main() 
{
	
	int smallest;
	int temp;
	for (unsigned int i=0; i<DIM; ++i) {
	//roba... cerco l'elemento + piccolo
		smallest = i;
		for (unsigned int min=i+1; min < DIM; ++min)
			if (A[min]<A[smallest])
				smallest = min;
				
		temp = A[smallest];
		A[smallest] = A[i];
		A[i]=temp;
	}
	
	return 0;	
}


