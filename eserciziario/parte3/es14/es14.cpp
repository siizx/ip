#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	char scelta=0;
	while (true) {
		cout << endl;
		cout << "Scegli il tuo colore preferito tra quelli suggeriti di seguito, scrivendo la sua lettera iniziale: " << endl;
		cout << endl;

		cout << "- Blu" << endl;
		cout << "- Arancione" << endl;
		cout << "- Magenta" << endl;
		cout << "- Rosso" << endl;
		cout << "- Oro" << endl;
		cout << endl;
		
		cout << "Inserisci la tua scelta: ";
		cin >> scelta;
		cout << endl;
		
		if (scelta == 'B' || scelta == 'b') {
			cout << "Il tuo colore preferito è il blu." << endl;
			return 0;
		} else if (scelta == 'A' || scelta == 'a') {
			cout << "Il tuo colore preferito è l'arancione." << endl;
			return 0;
		} else if (scelta == 'M' || scelta == 'm') {
			cout << "Il tuo colore preferito è il magenta." << endl;
			return 0;
		} else if (scelta == 'R' || scelta == 'r') {
			cout << "Il tuo colore preferito è il rosso." << endl;
			return 0;
		} else if (scelta == 'O' || scelta == 'o') {
			cout << "Il tuo colore preferito è l'oro" << endl;
			return 0;
		} else;
		 
	}
	return 0;
}
