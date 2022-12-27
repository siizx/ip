#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	int answer=-1;
	while (answer!=0) {
		cout << "1 Prima scelta" << endl;
		cout << "2 Seconda scelta" << endl;
		cout << "3 Terza scelta" << endl;
		cout << "0 Uscita dal programma" << endl;
		cout << endl;
		cout << "Fai una scelta: " << endl;
		cin >> answer;
		cout << endl;
		if (answer==1) cout << "Hai fatto la prima scelta" << endl;
		else if (answer==2) cout << "Hai fatto la seconda scelta" << endl;
		else if (answer==3) cout << "Hai fatto la terza scelta" << endl;
		else if (answer==0) cout << "Hai scelto di uscire dal programma." << endl;
		else cout << "Scelta non valida." << endl;
		cout << endl;
	}
	
	return 0;	
}
