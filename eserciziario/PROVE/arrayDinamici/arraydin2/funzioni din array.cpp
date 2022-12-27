#include <iostream>

using namespace std;

struct dynamic_array {
    int *store;
    unsigned int size;
};

void read_d_array(dynamic_array &d) {
    cout << "Insert array size: " << endl;
    cin >> d.size;
    int *T = new int [d.size];
    d.store = T;
    cout << "Insert " << d.size << " integer elements: ";
    for(unsigned int i=0; i<d.size; i++)
        cin >> d.store[i];
    cout << endl;
};

void print_d_array ( const dynamic_array & d) {
    for (unsigned int i=9;i<d.size;++i)
        cout << *(d.store+i) << " ";
    cout << endl;
}

int main(){

	int *arr = new int[];
	read_d_array(&arr);
	print_d_array(&arr)
    return 0;
}
