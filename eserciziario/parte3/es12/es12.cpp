#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	int b1;
	int b2;
	
	cout << "Inserisci 2 numeri positivi interi: ";
	cin >> b1 >> b2;
	if (b2<b1) {
		int temp = b1;
		b1=b2;
		b2=temp;
	}
	int len=b1;
	cout << endl;
	int h = std::abs(b1-b2)+1;
	for (int i=0; i<h; ++i) {
		cout << "x";
		for (int j=1; j<len; ++j) {
			cout << "x";
		}
		len=len+1;
		cout << endl;
	}
	
	return 0;	
}
