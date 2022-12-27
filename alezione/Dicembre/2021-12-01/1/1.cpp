
#include <iostream>

using namespace std;

struct dynamic_array{
    int *store;
    unsigned int size;
};

void create_d_array(dynamic_array &d, int size, int val) {
    string err="mmmm";
    if (size<0)
        throw err;
    d.size = size;
    d.store = new int [size];
    for (unsigned int i=0; i<size; i++)
        d.store[i] = val;
}


#include <iostream>

struct dynamic_array{ int store; unsigned int size; };

void create_d_array(dynamic_array &d, int size, int val) { string err="mmmm"; 
    if (size<0) 
        throw err; 
    d.size = size; 
    d.store = new int [size]; 
    for (unsigned int i=0;i<size;++i) 
        d.store[i]=val;
}