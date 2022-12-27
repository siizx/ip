#include <iostream>

using namespace std;

char first_letter(){
    cout << "Inserisci una lettera maiuscola: ";
    char first;
    char c = 'Z';
    do {
        cin >> first;
        if(first <= 'Z' && first >= 'A') c = first;
        cout << "Inserisci una lettera maiuscola (o altro carattere per terminare: ";
        cout << endl;
    } while (first >= 'A' && first <= 'Z');
    return c;
};

int main(){

    //char smallest;
   // smallest = first_letter();
    cout << "La lettera piu piccola inserita è: " << first_letter() << endl;

    return 0;
}