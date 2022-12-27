#include <iostream>

using namespace std;

int main(){

	int s= 1;

	while (s==1 || s==2 || s==3){
		cout << "\nDa 1 a 3: ";
		
		cin >> s;
		
		switch(s){
			case 1:
				cout << "\nUNO\n";
				break;
			case 2: 
				cout << "\nDUE\n";
				break;
			case 3:
				cout << "\nTRE\n";
				break;
		}
	}
		
	return 0;
}
