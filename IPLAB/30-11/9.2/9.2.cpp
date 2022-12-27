#include <iostream>

using namespace std;

struct dynamic_array{
    int* store;
    unsigned int size;
};

void read_d_array(dynamic_array&);

void print_d_array(dynamic_array&);

int main(){

    dynamic_array d1;
    unsigned int num_elem;
    cout << "di quanti elementi vuoi che l'array sia formato? ";
    cin >> num_elem;
    cout << endl;

    d1.size = num_elem;
    read_d_array(d1);
    print_d_array(d1);

    return 0;
}

void read_d_array(dynamic_array& d){
    for(int i=0; i<d.size; i++){
        cout << "Inserisci un elemento nell'array in posizione n." << i << ": ";
        cin >> *(d.store+i); // va bene anche d.store[i];
    };
    cout << endl;
}

void print_d_array(dynamic_array& d){
    cout << "Ecco gli elementi contenuti nell'array: ";
    for (int i = 0;  i<d.size ; i++)
    {
        cout << *(d.store+i) << " ";
    };

    cout << endl;  
}

