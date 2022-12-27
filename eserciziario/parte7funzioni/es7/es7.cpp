#include <iostream>

using namespace std;

void replicate(int n, char c){
    if(n>0){
        for(int i=0; i<n; i++){
            cout << c; 
        };
    };
    cout << endl;
};

int main(){

    replicate(10,'x');
    replicate(1,'x');
    replicate(0, 'x');
    replicate(-10, 'x');

    return 0;
}

