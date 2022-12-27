#include <iostream>

using namespace std;

int main() 
{

	cout << endl;
	cout << endl;
	
	
	string s1 = "Hello ";
	string s2 = "world";
	
	cout << "Debug: " << &s1 << " " << &s2 << endl;
	cout << s1 << s2 << endl;
	
	
	
	cout << endl;
	cout << endl;
	
	
	
	string *p = &s1;
	cout << "Debug: " << *p << " " << p << endl;
	
	
	//cout << "&p " << &p << endl;

	
	cout << endl;
	cout << endl;
	
	
	
	*p = "Ciao ";
	p = &s2;
	cout << "Debug: " << *p << " " << p << endl;
	
	cout << endl;
	cout << endl;
	
	
	
	
	*p = "mondo";
	cout << s1 << s2 << endl;

	return 0;	
}
