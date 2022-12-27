#include <iostream>
#include "structs.h"
#include "prototipi.h"

using namespace std;


void mod_val(List l){
    cout << "Quale posizione deve essere modificata? ";
    int pos;
    cin >> pos;
    cout << "Che valore vuoi inserire? ";
    int val;
    cin >> val;
    cell* aux = l;
    for(int i=1; i<=pos; i++){
        aux=l->next;
    };
    aux->info=val;
    cout << "Valore in posizione " << pos << " modificato in " << val << "." << endl; 
}

void add_tail(List l)
{
    cout << "Che valore vuoi aggiungere in coda? ";
    int val;
    cin >> val;
    cell* n = new cell;
    cell* aux = l;
    while(aux->next!=nullptr){
        aux= aux->next;
    };
    n->info=val;
    n->next = nullptr;
    aux->next=n;
    

};

void print_list(List l){
    while(l->next!=nullptr){
        cout << l->info << " ";
        l=l->next;
    } 
    cout << l->info << endl;
}


void delete_cell(List l){
    cout << "In quale posizione si trova la cella da eliminare? ";
    int pos;
    cin >> pos;
    cell* aux = l;
    cell* prev = l;
    for(int i=1; i<= pos; i++){
        prev = aux;
        aux=aux->next;
    }
    prev->next=aux->next;
    delete aux;
}
