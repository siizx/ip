#include <iostream>
#include "structs.h"
#include "prototipi.h"

using namespace std;


int main(){

    myvector d;

    create_vector(d, 10);

    resize_vector(d, 5);

    read_vector(d);

    print_array(d);

    set(d, 4, 555);


    cout << "Get= "<< get(d,4) << "    Dopo il set: ";
    print_array(d);
    cout << endl;

    safe_push_back(d, 666);
    pop_back(d);
    pop_back(d);
    pop_back(d);
    pop_back(d);
    pop_back(d);





    cout << "Dopo il push_back: ";
    print_array(d);
    cout << endl;

    
    
    
    destroy_vector(d);

    return 0;
}





