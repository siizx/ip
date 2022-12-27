#include <iostream>
#include <vector>
#include "prototipi.h"

using namespace std;


void swap(int* a, int* b){
    cout << "Indirizzi: " << a << " e " << b << endl;
    if(a!=b){
        int c=*a;
        *a=*b;
        *b=c;
    }
}


void swap(int & a, int& b){
    cout << "Indirizzi: " << &a << " e " << &b << endl;
    if(&a!=&b){
        int c=a;
        a=b;
        b=c;
    }
}


void print(std::vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << (i==v.size()-1?'\n':' ');
    }
}

std::vector<int> reverse(std::vector<int> v){
    vector<int> revv(v.size());

    for(int i=0; i<v.size(); i++) revv[i] = v[v.size()-1-i];
    return revv;
}

void reverseInPlace(std::vector<int>& v){
    for(int i=0; i<v.size()/2; i++) 
        swap(v[i], v[v.size()-1-i]);
}

