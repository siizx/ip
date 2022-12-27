#include <iostream>
#include <vector>
#include "structs.h"
#include "prototipi.h"

using namespace std;

int main()
{

    std::vector<int> v = {345, 67, 5, 33, 223, 12};
    std::vector<int> v2 = {40, 99, 2344, 4, 54, 83, 28};
    // readVector(v);
    cout << "Vector disrdinato: ";
    printVector(v);
    cout << "Size: " << v.size() << endl;
    cout << endl;

    SelectionSortVector(v);
    cout << "Vector ordinato: ";
    printVector(v);
    cout << endl;

    cout << "Item (223) found in location: " << SequentialSearchVector(v, 223) << "\n";
    cout << endl;

    cout << "Vector reversed: " << endl;
    printVector(reverseVect(v));
    cout << endl;

    std::vector<int> vtot = concatVect(v, v2); // concatena 2 vector
    cout << "vtot: ";
    printVector(vtot);
    cout << endl;

    cout << "vtot ordinato: ";
    SelectionSortVector(vtot);
    printVector(vtot);
    cout << endl;

    std::vector<int> emptyVect;

    cout << "Inserimento del valore '6' in posizione 0 nell'array vuoto: ";
    insertVector(emptyVect,1, 6);
    printVector(emptyVect);

    return 0;
}