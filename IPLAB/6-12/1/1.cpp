#include <iostream>
#include <vector>
// #include "structs.h"
#include "prototipi.h"

using namespace std;

int main(){

    vector<int> v(5,1);

    cout << v.size() << endl;
    cout << "v: ";
    print(v);

    vector<int> w(5, 0);
    cout << "w: ";
    print(w);
    cout << "w < v: " << (w<v) << endl;

    // v.resize(1);
    // cout << "Dopo il resize(1), v contiene: ";
    // print(v);
    // cout << "v.size: " << v.size() << endl;
    
    for(int i=1; i<=v.size(); i++) v[i-1]=i;
    cout << "v dopo la riassegnazione contenuto: ";
    print(v);

    cout << "Dopo il resize(2), v contiene: ";
    v.resize(2);
    print(v);

    for(int i=1; i<=w.size(); i++) w[i-1]=10*i;
    cout << "w dopo la riassegnazione del contenuto: ";
    print(w); 

    for(int i=0; i<w.size(); i++) v.push_back(w[i]);
    cout << "v dopo l'append con w: ";
    print(v);

    cout << "risultato reverse(v): ";
    print(reverse(v));

    reverseInPlace(v);
    cout << "v dopo reverseInPlace: ";
    print(v);
    
    

    return 0;
}