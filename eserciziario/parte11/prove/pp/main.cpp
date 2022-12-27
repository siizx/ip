#include "inc.h"

int main()
{
	list pb = nullptr;

	cout << "///// Inseriamo i dati di 2 contatti che vogliamo salvare in rubrica: " << endl;

	initCntAdd(pb);
	initCntAdd(pb);

	cout << "\n ///// Ecco i 2 contatti inseriti: " << endl;
	printList(pb);

	cout << "\n///// Aggiungiamone altri 2: " << endl;

	initCntAdd(pb);
	initCntAdd(pb);
	cout << "\n\n///// Ecco i  contatti inseriti: " << endl;

	printList(pb);

	return 0;
}
