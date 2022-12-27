#include <iostream>

using namespace std;

int main(){

    const int N = 10;
    int v[N] = { 12, 66, 48, 36, 27, 99, 82, 29, 1, 7 };
    int max=v[0];
    
    //FIND MAX

    for(int p=1; p<N; p++){
        int prev = p-1;
        if(max < v[p]) max = v[p];
    };

    cout << "Inserisci " << N << " numeri interi: ";
    //cin >> v;
    cout << endl;

    //ORDINAMENTO



    for(int i = 0; i <  N; i++){

          

           
    };


    for(int k=0; k<N; k++){
        cout << v[k] << " ";
    };

    cout << endl;

    return 0;
}