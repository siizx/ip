//INCOMPLETO LEZIONE 27-10-2021 ES 2 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

const unsigned int DIM = 10;

int main() {
	
	int S[DIM];
	int elem;
	int idx = -1;
	
	cout << "Inserisci " << DIM << " elementi interi" << endl;
	for (unsigned int i = 0; i<DIM; ++i)
		cin >> S[i];
	cout << "Inserisci un elemento da cercare";
	cin >> elem;
	
	bool trovato = false;
	
	for (unsigned int i=0; (i<DIM && !trovato); ++i)
		if (S[i]==elem) {
			trovato = true;
			idx=i;
			i=DIM;
		}
			
	if (trovato)
	
	return 0;
}
