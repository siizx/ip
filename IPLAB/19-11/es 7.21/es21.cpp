#include <iostream>

using namespace std;

void swap(int&, int&);

int main(){

    int myA = 10, myB =1;
    cout << "Valori prima dello swap: ";
    cout << "myA = " << myA << "; myB = " << myB << endl;

    swap(myA, myB);

    cout << "Valori dopo dello swap: ";
    cout << "myA = " << myA << "; myB = " << myB << endl;


    return 0;
}

void swap(int &a, int &b)
{
    int c = a;
    a=b;
    b=c;
}