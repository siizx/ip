#include "header.h"

using namespace std;

int main()
{

	lista l = new cell;
	l->age = 99;
	l->name = "Napoleone";

	addOne(l);
	addOne(l);

	cout << "\nEcco la lista: \n"
		 << endl;

	readList(l);

	return 0;
}
