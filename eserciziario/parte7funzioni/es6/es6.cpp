#include <iostream>
#include <string>

using namespace std;

int factorial(int n){
    
    int numero = n;

    // NEGATIVE
    
    try{
        
        if(n < 0){
            string err = "Il numero inserito non è positivo.";
            throw err;
        }
    

    // ZERO OR ONE

        else if(n == 0 || n == 1){
            cout << "Il fattoriale di " << n << " è " << 1 << endl;
            cout << endl;
        return 1;
    }

    // n > one

    else{
        for(int i = n-1; i>1; i--){
            n = n*i;
        };
        cout << "Il fattoriale di " << numero << " è " << n << endl;
        cout << endl;
        return n;
    };


    }catch(string x){
        cout << x << endl;
        cout << endl;

    };


};
    

int main(){

    cout << "Inserisci un numero positivo: ";
    int num;
    cin >> num;
    cout << endl;
    factorial(num);

    return 0;
}