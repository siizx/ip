#include <iostream>
#include <cmath>

using namespace std;


void trapret(int b1, int b2){
    try{
    string err = "Valori non regolari. Le due basi devono essere positive e diverse tra loro.";
    if(b1 == b2 || b1<=0 || b2 <=0) throw err;
    }catch(string err){
        cerr << err << endl;
        return;
    };

    if(b2 < b1){
        int temp = b1;
        b1 = b2;
        b2 = temp;
    };
    int h = abs(b1-b2)+1;

    for(int j=0; j<h; j++){
        for(int i=0; i<b1; i++){
            cout << "x";
        };
        b1++;
        cout << endl;
    };

};


int main(){

    cout << "Inserisci 2 valori positivi per formare le basi di un trapezio rettangolo: ";
    int b1, b2;
    cin >> b1 >> b2;
    cout << endl;

    trapret(b1, b2);



    return 0;
}

