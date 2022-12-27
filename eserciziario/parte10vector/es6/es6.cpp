#include <iostream>
#include <vector>
#include "prototipi.h"

using namespace std;


int main(){

    std::vector<int> v = {3, 5 , 9 , 1111, 43};
    insert(v, 3, 666);

    printVector(v);

    return 0;
}