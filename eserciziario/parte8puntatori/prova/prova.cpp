#include <iostream>
using namespace std;

int main() {


    int size = 5;
    int *arr;
    arr = new int[size];

    for(int i = 0; i<size; i++) {
        arr[i]= 2*i;
        cout << arr[i] << " ";
    };

    cout << endl;

    int *arrtemp = new int [7];

    //COPIA PROFONDA
    for(int j=0; j<size; j++) {
        arrtemp[j]=arr[j];
    };

    arrtemp[5]=55;
    arrtemp[6]=66;

    delete [] arr;
    arr=arrtemp;
    arrtemp=nullptr;

    for(int k=0; k<7; k++) {
    cout << arr[k] << " ";
    };
    cout << endl;




    return 0;
}