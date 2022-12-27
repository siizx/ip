#include <iostream>

using namespace std;

int main()
{
	int ore = -1;
	int minuti = -1;
	
	while (ore < 0 || ore > 23 || minuti < 0 || minuti > 59) 
	{
		cout << "Inserisci un numero di ore da 0 a 23 e un numero di minuti da 0 a 59. \n";
		cout << "Ore: ";
		cin >> ore;
		cout << "Minuti: ";
		cin >> minuti;
	}
	
	int totmin = (minuti + (ore * 60));
	cout << "Numero totale di minuti = " << totmin << "\n";
	return 0;
}
