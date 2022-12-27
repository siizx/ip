#include <iostream>
using namespace std;

int main()
{
    int numDogs = 5;
    int numCats = 3;
    int totAnimals = numDogs + numCats;
    cout << totAnimals << endl;
    numCats = (numCats + 2);
    cout << "Seconda parte:" << endl;
    cout << numCats << endl;
    cout << totAnimals << endl;
    //cout << (numCats + 2) << endl;
    return 0;
}