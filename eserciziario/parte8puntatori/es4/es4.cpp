#include <iostream>

using namespace std;

const int N = 3;

void f(int d) {
    cout << "Dimensione del parametro == " << sizeof(d) << endl;
}

int main(){

    int v[N]={1,2,3};

    int *p = v;
    cout << "Dimensione di v == " << sizeof(v) << endl;
    cout << "Dimensione di p == " << sizeof(&p) << endl;
    f(*p);
    
    for(int i=0; i<N; i++) cout << *(p+i) << " ";
	 cout << endl;
    return 0;
}
