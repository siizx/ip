#include <iostream>

using namespace std;

void reverse_arr(const int source[], const int size, int dest[]) {

    for(int i=0; i<size; i++) {

        int *destin = dest;
        destin[i] = source[size-1-i];

    };
};


void print_array(const int arr[], const int size) {

    cout << endl;

    for (int j=0; j<size; j++) {
        cout << arr[j] << " ";
    };

    cout << endl;
    cout << endl;

};



int main(){

    int N=5;
    int source[N];
    int dest[N];

    cout << "Inserisci gli elementi dell'array (" << N << " valori): " << endl;

    for (int i=0; i<N; i++) {
        cin >> source[i];
    };

    reverse_arr(&source[0], N, &dest[0]);
    
    print_array(source, N);
    print_array(dest, N);

    return 0;
}
