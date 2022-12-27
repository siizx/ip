#include <iostream>

using namespace std;



struct dyn_array{
    int store;
    unsigned int size;
};


void leggi_dyn_arr(int& address, unsigned int size){
    
};

int main(){

    cout << "Quanti valori vuoi salvare? ";
    unsigned int size;
    cin >> size;
    cout << endl;

    int *arr;
    arr = new int[size];

    cout << "Riempi l'array con valori interi: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    };

    cout << endl;
    cout << "Ecco l'array digitato: ";
    for(int j=0; j<size; j++){
        cout << arr[j] << " ";
    };

    cout << endl;

    cout << "Vuoi incrementare la grandezza dell'array? Scrivi 'y' se la risposta è si, altrimenti scrivi un altro carattere)." << endl;
    char cambioSize;
    cin >> cambioSize;
    cout << endl;

    if(cambioSize == 'y' || cambioSize == 'Y'){

        int size2;
        int* arr2;
        cout << "Inserisci la nuova dimensione dell'array: ";
        cin >> size2;
        arr2 = new int[size2];
        cout << endl;

        for(int p=0; p<size; p++){
            arr2[p] = arr[p];
        };


        cout << "Ora inserisci gli elementi aggiuntivi: ";
        for(int k=size; k<size2; k++){
            cin >> arr2[k];
        };
        
        cout << endl << "Ecco il nuovo array: " << endl;
        for(int l=0; l< size2; l++){
            cout << arr2[l] << " ";
        };
        cout << endl;
        
        delete [] arr;
        arr = nullptr;

    };


    cout << arr[0] << endl;
    


    
    return 0;
}
