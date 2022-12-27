#include "includes.h"


void inputAndAddContact(list& L){
        
	contact* nc = new contact;
        contact* aux = L;
	
	
        while(aux->next != nullptr){
		aux = aux->next;
		nc->prev = aux;
	}
	
        aux->next = nc;


        printf("Nome: ");
        cin >> nc->name;
        printf("Surname: ");
        cin >> nc->surname;
        printf("Phone number: ");
        cin >> nc->phoneNumber;
        nc->next = nullptr;

//        while(aux->next != nullptr){
//                aux = aux->next;
//        	nc->prev = aux;
//	}
//        L->next = nc;
}

//// PRINT CONTACTS ////
void printContactsList(const list& contacts){
        list aux = new contact;
        aux = contacts;
        while(true){
                cout << "Name: " << aux->name << endl;
                cout << "Surname: " << aux->surname << endl;
                cout << "Phone number: " << aux->phoneNumber << endl;
                if(aux->next == nullptr) break;
                else aux = aux->next;

        };
}

