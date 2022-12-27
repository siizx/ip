#include "includes.h"
void initAddContact(list &l);


void printList (const list &l){
	list aux = l;
	while(true){
		cout << "Name: " << aux->name << endl;
		cout << "Surame: " << aux->surname << endl;
		cout << "Phone number: " << aux->number << endl;
		aux->prev = aux;
		aux = aux->next;
		cout << endl;
		if(aux == nullptr) break;
	};
};

void initAddContact(list &l){

	list nc = new cnt;
	cout << "Name: ";
	cin >> nc->name;
	cout << "\nSurname: ";
	cin >> nc->surname;
	cout << "\nNumber: ";
	cin >> nc->number;
	cout << endl;
	
	list aux = l;

	while(aux->next != nullptr){
		
		aux->prev=aux;
		aux=aux->next;
	};
	aux->next = nc;

};

