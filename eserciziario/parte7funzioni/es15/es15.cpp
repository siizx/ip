#include <iostream>

using namespace std;


void replicate(int a, int b, char a_c, char b_c){
    for(int i=0; i<a; i++) cout << a_c;
    for(int j=0; j<b; j++) cout << b_c;
    cout << endl;
};


int main(){

    int a, b;
    char m, k;
    cout << "Inserisci 2 interi e 2 caratteri: ";
    cin >> a >> b >> m >> k;
    cout << endl;

    replicate(a,b,m,k);

    return 0;
}