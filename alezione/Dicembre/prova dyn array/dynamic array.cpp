#include <iostream>

using namespace std;

int main(){


    // RIEMPIAMO L'ARRAY
    int elem = 4;
    cout << "Inserisci "<< elem <<" numeri interi: ";
    int *arr = new int[elem];
    for (int i=0; i<elem; i++)
        cin >> arr[i];

    cout << endl;
    // STAMPIAMO L'ARRAY
    for (int j=0; j<elem; j++)
        cout << arr[j] << " ";
        cout << endl;


    //CHIEDIAMO SE SI VUOLE AUMENTARE LA SIZE
    char ans = 'k';
    while(true) {
        cout << "Vuoi aggiungere elementi all'array dinamico? y/n: ";
        cin >> ans;
        if(ans == 'y' || ans == 'Y' || ans == 'n' || ans == 'N') break;
        cout << endl;
    };


    //ESECUZIONE IN BASE ALLA RISPOSTA
    if(ans == 'y' || ans == 'Y') {
        int elem2;
        cout << "Scegli la nuova size dell'array (maggiore di "<< elem << "): ";
        cin >> elem2;
        cout << endl;
        
        int *arr2 = new int [elem2];

        // COPIAMO IL VECCHIO ARRAY IN QUELLO NUOVO
        for(int k=0; k<elem; k++) {
            arr2[k] = arr[k];
        };

        // CANCELLIAMO IL VECCHIO ARRAY & PUNTATORE

        delete [] arr;
        arr = nullptr;

        //RIEMPIAMO L'ARRAY
        cout << "Inserisci i rimanenti " << elem2 - elem << " numeri dell'array: ";
        for(int p=elem; p<elem2; p++) {
            cin >> arr2[p];
        };
        cout << endl;

        //STAMPIAMO IL NUOVO ARRAY

        cout << "Ecco il nuovo array: ";
        for(int o=0; o<elem2; o++) {
            cout << arr2[o] << " ";
        };
        cout << endl;

    } else {
        cout << "Ok, l'array rimane invariato." << endl;
    };



    return 0;
}