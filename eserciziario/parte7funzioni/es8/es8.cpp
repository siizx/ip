#include <iostream>

using namespace std;

void replicate(int n, char c){
    for(int j = n; j>0; j--){
        cout << c;
    };
    cout << endl;
};

void triangle(int lenght){
    for(int i=1; i<=lenght; i++){
        replicate(i, '*');
    };
};

int main(){

    try{
    cout << "Inserisci un numero maggiore di 0: ";
    int len;
    cin >> len;
    cout << endl;
    if(len > 0) triangle(len);
    else{
        string err = "Il numero da inserire deve essere positivo.";
        throw err;
        };
    }catch(string error){
        cout << error << endl;
    };

    return 0;
}