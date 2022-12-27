#include <iostream>

using namespace std;

int main(){

    const int N = 10;
    int v[N] = { 12, 66, 48, 36, 27, 99, 82, 29, 1, 7 };
    int max=v[0];

    cout << "Inserisci " << N << " numeri interi: ";
    //cin >> v;
    cout << endl;

    //ORDINAMENTO

    for(int i=1; i<N; i++){
        int prev = v[i-1];
        int curr = v[i];

        if(v[curr] < v[prev]){
            int temp = curr;
            curr = prev;
            prev = temp;
        };//?????????????????????????????????

        
    };

    return 0;
}