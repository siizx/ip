#include <iostream>

using namespace std;

int main(){

	string a = "ab";
	string b = "bb";
	
	for(int i = 0; i<2; i++){
		cout << boolalpha << (a[i]<b[i]) << endl;
	}


	return 0;
}
