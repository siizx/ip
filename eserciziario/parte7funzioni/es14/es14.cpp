#include <iostream>

using namespace std;


bool uno(float a, float b, float c){
    float tot = a*b*c;
    bool uno = false;
    if( (((tot/a)/b)/c) == 1) uno = true;
    return uno;
};



int main(){

    cout << "Inserisci 3 numeri con la virgola: ";
    float a, b , c;
    cin >> a >> b >> c;
    cout << endl;
    bool risult = uno;
    cout << risult << endl;
    if(risult == true) cout << "I valori inseriti, se moltiplicati e poi divisi tra loro, danno come risultato 1." << endl;
    else cout << "I valori inseriti, se moltiplicati e poi divisi tra loro, NON danno come risultato 1." << endl;

    return 0;
}