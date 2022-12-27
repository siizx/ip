#include <iostream>

using namespace std;

int main(){

    const int N = 10;
    int v[N] = { 1, 4, 6, 7, 9, 10, 15, 16, 21, 27 };
    int item;
    int centro = N/2;
    int pos = -1;
    bool trovato = false;

    //INPUT ARRAY

    cout << "Inserisci " << N << " numeri interi: ";
    //cin >> v;
    cout << endl;

    //INPUT ITEM

    cout << "Inserisci il numero contenuto nell'array, di cui vuoi trovare la posizione: ";
    cin >> item;
    cout << endl;

    //RICERCA NELL'ARRAY

    if(item == v[centro]){
        cout << "Elemento trovbato in posizione " << centro-1 << endl;
        trovato = true;
    }else if(item > v[centro]){
        for(int i=centro-1; i<N; i++){
            if(item == v[i]) {
            cout << "Trovato in posizione " << i << endl;
            trovato = true;
            }
        }
    }else if(item < v[centro]){
        for(int j=centro-1; j>0; j--){
            if(item == v[j]){ 
                cout << "Trovato in posizione " << j << endl;
                trovato = true;
            }
        }
    };

    if(trovato == false) cout << "Non trovato." << endl;
   


    return 0;
}