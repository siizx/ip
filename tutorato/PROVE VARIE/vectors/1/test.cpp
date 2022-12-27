#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> a = {2,5,7,9,11};
	
	for(int i=0; i < a.size(); i++) cout << a.at(i) << ' ';
	cout << endl;
	a.at(0)= 3;
	for(int i=0; i < a.size(); i++) cout << a.at(i) << ' ';
	cout << endl;
	cout << sizeof(a)/sizeof(int) << endl;
	return 0;
}
