#include <iostream>
#include <string>

using namespace std;

int main(){

	string s = "yolo";
	string p = "yolo";
	string q = "yola";
	
	cout << s.compare(p) << endl;
	cout << p.compare(q) << endl;
	
	char* l = &q[3];
	cout << l << endl;
	*l = 'o';
	
	cout << p.compare(q) << endl;

	return 0;
}

 
