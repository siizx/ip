#include <iostream>

using namespace std;

int main() {

    int size = 5; // non è più un const
    int* a = new int[size]; // allocazione sullo heap
    int n = 0; 
    
    //--- Scrivo nell’array
    while (cin >> a[n]) { 
        n++; 
        if (n >= size) { // quando ho finito lo spazio
            size = size * 2; // raddoppio il valore della variabile size
            int* temp = new int[size]; // creo un array temp grande il doppio
            for (int i=0; i<n; ++i) { 
                temp[i] = a[i]; // copia profonda
            } 
            delete [] a; // libero lo spazio vecchio (piccolo)
            a = temp; // aggiorno il puntatore
        } 
    } 
    //--- stampo quello che ho inserito (potrebbe essere meno di size!)
    for (int i=0;i<n;++i) 
    cout << a[i] << endl;


    return 0;
}