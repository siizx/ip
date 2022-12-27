#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	float input = 0;
	float num = 0;
	float ins = 2;
	char continuare = 'S';

	cout << "Calcoliamo la media dei numeri a tua scelta!"<< endl;	
	cout << "Inserisci il primo numero di cui vuoi fare la media: ";
	cin >> input;
	cout << endl;
	num=input;
	cout << "Inserisci il secondo numero di cui vuoi fare la media: ";
	cin >> input;
	cout << endl;
	num=num+input;
	
	
	while (continuare=='s' || continuare=='S') {
		cout << "Inserire un altro numero? Inserisci's'/'S' per continuare, altrimenti inserire 'n': ";
		cin >>continuare;
		cout << endl;
		if (continuare=='s' || continuare=='S') {
			ins= ins+1;
			cout << "Quale numero vuoi aggiungere? ";
			cin >> input;
			cout << endl;
			num = num+input;	
		} 
	}
		
	cout << "La media dei numeri scelti è: " << num/ins << endl;
	
	return 0;	
}
