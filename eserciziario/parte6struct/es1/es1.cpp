#include <iostream>
using namespace std;

int main() {
	
	struct Person {
		string name;
		string surname;
		string birthYear;
	};
	
	Person me, you;
	
	me.name = "Andrea";
	me.surname = "Peres";
	me.birthYear = "1994";
	
	you.name = "Mario";
	you.surname = "Rossi";
	you.birthYear = "1997";
	
	cout << "=====================================" << endl;
	
	cout << "My name is " << me.name << " " << me.surname << endl;
	cout << "I was born in " << me.birthYear << endl;
	cout << endl;
	cout << "My name is " << you.name << " " << me.surname << endl;
	cout << "I was born in " << you.birthYear << endl;
	
	cout << "=====================================" << endl;
	
	me = you;
	cout << "My name is " << me.name << " " << me.surname << endl;
	cout << "I was born in " << me.birthYear << endl;
	cout << endl;
	cout << "My name is " << you.name << " " << me.surname << endl;
	cout << "I was born in " << you.birthYear << endl;
	
	cout << "====================================="	 << endl;
	
	return 0;
}
