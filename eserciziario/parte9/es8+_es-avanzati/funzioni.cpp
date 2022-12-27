/////// -------- FUNZIONI -------------- ////////////////////////////////////////////////////////
#include <iostream>
#include "structs.h"
#include "prototipi.h"


using namespace std;

void swap (int &x, int &y) {
int temp;
temp=x;
x=y;
y=temp;
};


bool looks_consistent(const myvector& v){
    if(v.capacity>0 && 0<=v.size){
        return true;
    } else {
        return false;
        };
}



void safe_push_back(myvector& v, int x){
    try{
    if(v.size<v.capacity){
        v.store[v.size] = x;
        v.size++;
    } else {
        string err = "Size equals capacity.";
        throw err;
        }; 
    } catch (string err){
        cout << "Error: " << err << endl;
        cout << "Calling function resize_vector." << endl;
        resize_vector(v, v.capacity*2);
        push_back(v, x);
    };
};



void push_back(myvector& v, int x){
    try{
        if(v.size<v.capacity){
            v.store[v.size] = x;
            v.size++;
        } else if(v.size == v.capacity){
            string err = "Array size matches capacity.";
        };
    } catch (string err){
        cerr << "Errore: " << err << endl;
    };
};




void resize_vector(myvector& v, unsigned int new_capacity){

    if(new_capacity<=0){
        try{
            string err = "new_capacity must be positive.";
            throw err;
        } catch (string err){
            cerr<<err<< endl;
        }
    };
    
    int* temp = new int[new_capacity];
    if(v.size<=new_capacity){
        for(int i=0; i< v.size; i++){
            temp[i] = v.store[i];
        };
    } else if(v.size>new_capacity){
        for(int j=0; j<new_capacity; j++){
            temp[j] = v.store[new_capacity];
        };
    };

    delete [] v.store;
    v.store = temp;
    v.capacity = new_capacity;
    if(v.size>new_capacity){
        v.size = new_capacity;
    }

};


void destroy_vector(myvector& v){
    delete [] v.store;
    v.size = 0;
    v.capacity = 0;
    v.store = nullptr;
};

int pop_back(myvector& v){

        if(v.size==0){
            try{
                string err_pop = "Error: v.size == 0";
                throw err_pop;
            } catch (string err_pop){
                cerr << err_pop << endl;
            }
        } else if (v.size>0){
            v.size--;
            if(v.size<(v.capacity/3) && v.size != 0){
                int temp_cap = v.capacity/2;
        int *temp_vect = new int[temp_cap];
        for(int i=0; i< v.size; i++){
            temp_vect[i] = v.store[i];
        };
        delete [] v.store;
        v.capacity = temp_cap;

        v.store = temp_vect;

            }
            return (v.store[v.size]);
        };
};



void create_vector(myvector& v, int capacity){
    v.store = new int[capacity];
    v.capacity = capacity;
    v.size = 0;
};



void bubblesort_d_array (myvector& d) {
    for (int i=0;i<d.size; i++) {
        for (int j=0; j<d.size-1-i; j++){
            if (d.store[j]>d.store[j+1]) {
                swap(d.store[j],d.store[j+1]);
            }
        }
    }
};

void read_vector(myvector& d){
        int value;
        int set_size = -1;
        try{
            while(set_size<0){
                cout <<"Scegliere il numero di elementi da inserire: ";
                cin >> set_size;
            };
            if(set_size>d.capacity){
                string err="set_size eccede d.capacity ";
                throw err;
            }
        } catch(string err){
            cerr << "Error: " << err << d.capacity << endl;
        };
        d.size = set_size;
    for(int i=0; i< d.size; i++){
        cout << "Inserisci il valore in posizione " << i << ": ";
        cin >> value;
        d.store[i]= value;
    }
};



int get (const myvector& v, int idx){

    
    if(idx <0 || idx >= v.size) {
        try{
                string err = "Indice out of range.";
                throw err;
        } catch (string err) {
                cout << err << endl;
            }
        } else {
            return (v.store[idx]);      
        };
};

void set (myvector& d, int idx, int value){
    if(idx < 0 || idx >= d.size) {
        try{
            string err = "Indice out of bound. L'array è rimasto invariato.";
            throw err;
        } catch(string err) {
            cout << err << endl;
        } 
    } else d.store[idx] = value;
};

void print_array(myvector& dynArr){
    cout << "Ecco i valori dell'array: ";
    for(int j=0; j<dynArr.size; j++){
        cout << dynArr.store[j] << " ";
    };
    cout << endl;
};

void create_d_array(myvector& array, unsigned int s, int v){
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

};

void delete_d_array(myvector& arr){
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