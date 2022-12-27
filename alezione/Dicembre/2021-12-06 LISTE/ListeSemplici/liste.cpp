#include <iostream>
#include "structs.h"
#include "prototipi.h"

using namespace std;

int main(){

    List l = new cell;
    l->next=nullptr;
    l->info=0;
    
    add_tail(l);
    add_tail(l);
    add_tail(l);
    print_list(l);

    mod_val(l);
    print_list(l);

    delete_cell(l);
    print_list(l);


    return 0;
}