#include <iostream>

using namespace std;


int main(){

	int size;
	int elem;
	cout << "size: ";
	cin >> size;
	cout << endl;
	int *arr = new int[size];
	
	for(int i =0; i<size; i++){
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
		cout << endl;
	}
	
	// print array
	
	cout << "Array elements: ";
	for(int i =0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
	


	return 0;
}
