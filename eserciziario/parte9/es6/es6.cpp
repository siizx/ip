#include <iostream>

using namespace std;

struct dynamic_array{
    int* store;
    unsigned int size;
};

// ------- PROTOTIPI ----------

void print_array(dynamic_array& );
void set (dynamic_array&, int , int );
int get(const dynamic_array&, int);
void create_d_array(dynamic_array& , unsigned int , int );
void delete_d_array(dynamic_array& );

// ------- MAIN ----------

int main(){

    unsigned int s = 4; // size desiderata
    dynamic_array d;

    create_d_array(d, s, 0);

    print_array(d);

    set(d, 3, 666);

    print_array(d);
    int got = get(d, 3);
    if(got != -9999) cout << "Get --> " << got << endl;

    delete_d_array(d);


    return 0;
}


// -------- FUNZIONI --------------


int get (const dynamic_array& d, int idx){

    int value = -9999;
    if(idx <0 || idx >= d.size) {
        try{
                string err = "Indice out of range.";
                throw err;
        } catch (string err) {
                cout << err << endl;
            }
        } else {
            value = d.store[idx];
            }
        return value;      
};

void set (dynamic_array& d, int idx, int value){
    try{
        if(idx < 0 || idx >= d.size) {
            string err = "Indice out of bound. L'array è rimasto invariato.";
            throw err;
        } else d.store[idx] = value;
    } catch(string err) {
        cout << err << endl;
    } 
};

void print_array(dynamic_array& dynArr){
    cout << "Ecco i valori dell'array: ";
    for(int j=0; j<dynArr.size; j++){
        cout << dynArr.store[j] << " ";
    };
    cout << endl;
};

void create_d_array(dynamic_array& array, unsigned int s, int v){
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

void delete_d_array(dynamic_array& arr){
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
