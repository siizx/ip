#include <iostream>

using std::cout;
using std::cin;
using std::endl;



int main()
{
	char g1; 
	char g2;
	char ans = 's';
	while (ans=='s' || ans=='S') {
	cout << "Gioca a carta forbici o sasso! \n";
	cout << endl;
	cout << "Giocatore1, scegli tra 'c', 'f' o 's': \n"; 
	cin >> g1;
	cout << g1;
	
	//Questo serve per non far vedere la scelta di g1 a g2.
	for(int i = 1; i <= 50; ++i ) { std::cout << std::endl;}
	
	cout << "Giocatore2, scegli: \n"; 
	cin >> g2;
	
	for(int i = 1; i <= 50; ++i ) { std::cout << std::endl;} // spazi

	cout << endl;	
			
	cout << "Giocatore1 ha scelto: " << g1 << "\n";
	cout << "Giocatore2 ha scelto: " << g2 << "\n";
	
	cout << endl;
	
	
	if (g1 == g2)  cout << "Pareggio!" << endl;

		else if (g1=='c') {
			if (g2=='f') cout << "Vince il giocatore 2!" << endl;
			else cout << "Vince il giocatore 1!" << endl;
		}

		else if (g1=='f') {
			if (g2=='c') cout << "Vince il giocatore 1!" << endl;
			else cout << "Vince il giocatore 2!" << endl;
		}

		else if (g1=='s') {
			if (g2=='f') cout << "Vince il giocatore 1!" << endl;
				else cout << "Vince il giocatore 2!" << endl;
		}
	cout << endl;
	cout << "Se vuoi continuare a giocare premi 's' o 'S'. Altrimenti premi un qualsiasi altro coarattere: ";
	cin >> ans;
	cout << endl;
	}

	return 0;
}
