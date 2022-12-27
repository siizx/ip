#include <iostream>

using namespace std;

const int N = 4;

int main(){

    int* v = new int[N];

    for(int i=0; i<N; i++){
        v[i] = 2*i+1;
    };

    for(int j=0; j<N; j++){
        cout << *(v+j) << " ";
    };
    cout << endl;

    delete [] v;
    v = nullptr;
    v = new int[2*N];

    for(int i=0; i<N; i++){
        v[i] = 4*i+1;
    };

    for(int j=0; j<N; j++){
        cout << v[j] << " ";
    };
    cout << endl;
    delete [] v;
    v = nullptr;


    return 0;
}