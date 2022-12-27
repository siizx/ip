#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	unsigned int ore;
	unsigned int minuti;
	
	cout << "Inserisci il numero di ore in (1-12): ";
	cin >> ore;
	cout << endl;
	
	cout << "Inserisci il numero di minuti (0-59): ";
	cin >> minuti;
	cout << endl;
	
	switch (ore) 
	{
		case 0:
			cout << "Mezzanotte";
			break;
		case 1:
			cout << "L'una";
			break;
		case 2:
			cout << "Sono le due";
			break;
		case 3:
			cout << "Sono le tre";
			break;
		case 4:
			cout << "Sono le quattro";
			break;
		case 5:
			cout << "Sono le cinque";
			break;
		case 6:
			cout << "Sono le sei";
			break;
		case 7:
			cout << "Sono le sette";
			break;
		case 8:
			cout << "Sono le otto";
			break;
		case 9:
			cout << "Sono le nove";
			break;
		case 10:
			cout << "Sono le dieci";
			break;
		case 11:
			cout << "Sono le undici";
			break;
		case 12:
			cout << "Sono le dodici";
			break;
	} 
	
	if (minuti>=0 && minuti<15)
		cout << "";
	else if (minuti>15 && minuti<30)
		cout << " e un quarto";
	else if (minuti>30 && minuti<45)
		cout << " e mezza";
	else if (minuti>45 && minuti<59)
		cout << " e tre quarti";
		
	if (minuti !=0 && minuti !=15 && minuti != 30 && minuti != 45)
		cout << ", circa." << endl;
	else cout << "."  << endl;
	
	
	cout << endl;
	return 0;	
}


