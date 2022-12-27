#include <iostream>

using namespace std;

struct dynarr{
	int *store;
	unsigned int size;
};

int main(){
	
	int size =4;
	dynarr* ppp = new int[size];
	
	for(int i=0; i<size; i++){
		cin >> *ppp[i]<< endl;
	}
	
	for(int i=0; i<size; i++){
		cout << *ppp[i]<< " ";

	}
	
	cout << endl;




	return 0;
}
