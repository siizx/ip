#include <iostream>

using namespace std;

void print2lines();
void print4lines();
int printlines(int);

int main(){

    print2lines();
    cout << endl;
    print4lines();
    cout << endl;
    printlines();

    return 0;
}

void print2lines(){
    cout << "******************" << endl;
    cout << "******************" << endl;
}

void print4lines(){
    print2lines();
    print2lines();
}

int printlines(int n){
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "##############" << endl;
    };
    return 0;
}