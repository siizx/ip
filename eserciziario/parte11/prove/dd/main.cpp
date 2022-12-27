#include "includes.h"

int main () {
	
	list C = new cnt;
	C->name = "Andrea";
	C->surname = "Peres";
	C->number = 340;
	C->prev = nullptr;
	C->next = nullptr;

	
	initAddContact(C);
	initAddContact(C);
	cout << endl;
	printList(C);
	cout << endl;
	return 0;
}

