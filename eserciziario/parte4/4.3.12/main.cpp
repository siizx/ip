/// VERIFICARE ARRAY PALINDROMI /////////////

#include <iostream>


using namespace std;

bool arrPal(int arr[],int s){

	bool eq = true;
	int y[s];
	int l=s-1;
	for(int i=0; i<=(s/2)-1; i++){
		cout <<"arr[i] "<< arr[i] << " == "<< "arr[l]" << arr[l] << " = ";
		if(arr[i] == arr[l]) cout << "true" << endl;
		else{ 
			cout << "The array is not palyndrome." << endl;
			return false;
		}
		l--;
		
		cout << endl;
	}
	cout << "The array is palyndrome." << endl;
	return true;
}

int main(){

cout << "How many integers do you wanna store in this array? " << endl;
int s;
cin >> s;

int a[s];

for(int i = 0; i < s; i++){
	cin >> a[i];
}

	
	cout << endl;
	cout << std::boolalpha << arrPal(a,s) << endl;


return 0;
}
