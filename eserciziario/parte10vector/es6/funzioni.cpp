#include <iostream>
#include <vector>
#include "prototipi.h"
using namespace std;


void swap(int & a, int& b){
    if(a!=b){
        int c=a;
        a=b;
        b=c;
    }
}



void printVector(std::vector<int>& v){
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    };
    cout << endl;
}

std::vector<int> insert(std::vector<int>& v, int i, int val){

    try{
        if(i>v.size() || i<0){
        string error= "for loop out of bound";
        throw error;
        }else {
            if(v.size()==0) {
            v.resize(v.size()+1);
            v[i]=val;
            } else {
                v.resize(v.size()+1);
                v[v.size()-1] = v[v.size()-2];
                for(int j=v.size()-2; j>=i; j--){
                    swap(v[j],v[j+1]);
                }
                v[i]= val;
                }
        }
    }catch(string err){
        cerr << err << endl;
    }

    return v;
}