#include <iostream>

using namespace std;

int main(){

    const int N = 10;
    int v[N] = { 12, 66, 48, 36, 27, 99, 82, 27, 1, 7 };
    int item;
    int centro = N/2;
    int pos = -1;
    bool trovato = false;
    int temp;


    cout << "Inserisci " << N << " numeri interi: ";
    //cin >> v;
    cout << endl;

    cout << "Inserisci il numero contenuto nell'array, di cui vuoi trovare la posizione: ";
    cin >> item;
    cout << endl;

    
    //TROVIAMO MIN E MAX

    int min= v[0];
    int max= v[0];

    for(int h=0; h<N; h++){
        if(v[h] < min){
            min = v[h];
            temp = v[0];
            v[0] = min;
            v[h] = temp;
        };
        if(v[h] > max){ 
            max = v[h];
            temp = v[N];
            v[0] = max;
            v[h] = temp;
        };
    };



    //ORDINAMENTO

    for(int j=0; j<N; j++){

        for(int i=j ; i<N; i++){
            if(v[i] < min){ 
                min = v[i];
                temp = v[j];
                v[j] = v[i];
                v[i] = temp;
                min = 2147483647;
            };

        };
    };

    // Ecco l'array ordinato

    cout << "Ecco l'array ordinato: " << endl;
    for(int k=0; k < N; k++){
        cout << v[k] << " ";
        if(v[k] == item) { 
            pos = k;
            trovato = true;
        };
    };

    if(trovato) cout << endl << "Trovato in posizione " << pos << endl;
    else cout << endl << "Non trovato." << endl;
   


    return 0;
}