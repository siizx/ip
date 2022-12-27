#include <iostream>

using namespace std;

struct d_array{
    int *store;
    unsigned int size;
};

void create_d_array(d_array& array, unsigned int s, int v){
    //cout << "Inserisci la size dell'array: ";
    //cin >> array.size;
    //array.store = new int[array.size];
    
    // es 4
    array.size = s;
    array.store = new int[s]; 
    for(int k = 0; k<s; k++) {
        array.store[k] = v;
    };


    //cout << endl;
    // cout << "Ora inserisci " << array.size << " valori: ";
    // for(int i=0; i< array.size; i++){
    //     cin >> array.store[i];
    // };
    cout << endl;
    cout << "Array creato." << endl;
    cout << endl;

}

void delete_d_array(d_array& arr){
    try{
        if(arr.size > 0){
            arr.size = 0;
            delete [] arr.store;
            arr.store = nullptr;
            cout << endl;
            cout << "Array cancellato." << endl;
            cout << endl;
        } else {
            char err[]="Errore: array gia vuoto!";
            throw err;
        };

    }catch (char err[]){
        cerr << err << endl;
    }; 
};

void print_array(d_array& dynArr){
    cout << "Ecco i valori dell'array: ";
    for(int j=0; j<dynArr.size; j++){
        cout << dynArr.store[j] << " ";
    };
    cout << endl;
};

int main(){

    unsigned int s = 3;
    int v = 6;

    d_array d;
    create_d_array(d, s, v);
    print_array(d);
    delete_d_array(d);
    int f;
    cout << endl;
    cin>>f;



    return 0;
}