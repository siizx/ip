#include "includes.h"

int main(){
	
	list contacts = new contact;
	contacts->name = "Andrea";
	contacts->surname = "Peres";
	contacts->phoneNumber = 345;
	contacts->next = nullptr;
	contacts->prev = nullptr;

	inputAndAddContact(contacts);

	cout <<"\nPRINTING CONTACTS: \n\n";	
	printContactsList(contacts); 		
		
	
	return 0;
}
