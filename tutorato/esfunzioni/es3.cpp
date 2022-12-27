#include <iostream>
using namespace std;

float average(int hm) {
    if(hm < 0) {
        int err = 1;
        throw err;
    }
    float sum = 0.0;
    for (i=0; i<hm; i++) {
        cout << endl << "Inserisci un numero: ";
        float x;
        cin >> x;
        sum += x; // sum = sum + x
    }
    return sum / hm;
}

int main () {
    cout << "Di quanti numeri vuoi fare la media? ";
    int howMany;
    cin >> howMany;
    float avg = average(howMany)
    cout << endl << "La media è: " << avg << endl; 

    return 0;
}