#include <iostream>

using namespace std;


struct dyn_arr{
    int *store;
    int size;
};

void read_arr(dyn_arr &d){
    int s = -1;
    while(s<1){
        cout << "Inserisci il numero di aelementi che vuoi inserire nell'array: ";
        cin >> s;
        cout << endl;
    };

    d.size = s;
    d.store = new int[d.size];
    
    for(int i=0; i<s; i++){
        cout << "Inserisci il " << i+1 << "°" << " numero: ";
        cin >> d.store[i];
        cout << endl;
    }

}

void print_arr(const dyn_arr &d){
    cout << "Ecco l'array inserito: ";
    for (int j =0; j<d.size; j++){
        cout << d.store[j] << "\t";
    }
    cout << endl;
}

void invert_arr(dyn_arr &d, dyn_arr &f){
    f.size=d.size;
    cout << "Ecco l'array invertito: ";
    for(int k=0; k<f.size; k++){
        f.store[k] = d.store[(d.size-1) - k];
    }

    for(int p=0; p<f.size; p++){
        cout << f.store[p] << "\t";
    }
        cout << endl;

    
}


int main(){


    dyn_arr dumdum;
    dyn_arr zumzum;
    read_arr(dumdum);
    print_arr(dumdum);


    invert_arr(dumdum, zumzum);
    delete [] dumdum.store;
    dumdum.store = nullptr;
    print_arr(zumzum);




    return 0;
}