#include <iostream>

using namespace std;

float average(int hm){
    if(hm < 0){ 
        int err;
        throw err = 666;
    };
    float sum = 0;
    for (int i=0; i < hm; i++){
        cout << endl << "Inserisci un numero ";
        float x;
        cin >> x;
        sum = sum + x;
    };
    return sum/hm;
};

int main(){

    cout << "Di quanti numeri vuoi fare la media?" << endl;
    unsigned int how_many;
    cin >> how_many;
    float media = average(how_many);
    
    cout << endl << "La media è " << media << endl;

    return 0;
}