#include <iostream>

using namespace std;

float area(float base, float altezza){
    try{
        if(base <= 0){
            int err = 1;
            throw err;
        };
        if(altezza <= 0){
            int err = 2;
            throw err;
        };
    }catch(int x){
        switch (x) {
            case 1:
                cout << "La base non puo essere minore o uguale a 0." << endl; 
                break;
            case 2:
                cout << "L'altezza non puo essere minore o uguale a 0." << endl; 
                break;

        }
    }
    float area = base * altezza;

    return area;
};

int main(){

    float b;
    float h;
    cout << "Calcola l'area di un rettangolo!" << endl;
    cout << "Inserisci il valore della base, e poi dell'altezza: ";
    cin >> b >> h;
    cout << endl;
    float a = area(b, h);
    
    if(b > 0 && h > 0)
        cout << "L'area del rettangolo è: " << a << endl;
    cout << endl;

    return 0;
}