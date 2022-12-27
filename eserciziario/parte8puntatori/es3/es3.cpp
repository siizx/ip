#include <iostream>

using namespace std;

		char selectVar(char& a, char& b, char& c) {
		char *p = nullptr;
		cout << "Scegli fra queste variabili: " << endl;
		cout << "(Potrai cambiare idea in seguito e sceglierne una diversa che preferisci)" << endl;
		
		cout << "Vuoi la prima? (y/n)    Contiene " << a << endl;
		char answer='0';
		
		cin >> answer;
		
		if(answer == 'y' || answer == 'Y'){
			p = &a;
			answer = '0';
		};
		
		
		cout << "Preferisci la seconda? (y/n)    Contiene " << b << endl;
		cin >> answer;
		if(answer == 'y' || answer == 'Y'){
			p = &b;
			answer = '0';
		};
		
		
		cout << "Preferisci la terza? (y/n)    Contiene " << c << endl;
		cin >> answer;
		if(answer == 'y' || answer == 'Y'){
			p = &c;
			answer = '0';
			
			return *p;
		};
		
		return *p;
		cout << p << endl;
	};
	
	
int main() 
{
	char a = 'a';
	char b ='b';
	char c= 'c';
	char choice = selectVar(a,b,c);
	
	cout << "Scelta finale: " << choice << "." << endl;
	
	return 0;	
}
