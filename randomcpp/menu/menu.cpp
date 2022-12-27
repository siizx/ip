#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	
	short int choice = -1;

	while(choice != 0){

		cout << "Scegli il tuo colore preferito, tra quelli presentati qui sotto scrivendo il numero abbinatogli: " << endl;

		cout << "1) Rosso" << endl;
		cout << "2) Arancione" << endl;
		cout << "3) Giallo" << endl;
		cout << "4) Blu" << endl;
		cout << "0) End Program and Quit" << endl;

		cin >> choice;

		while(choice < 0 || choice > 4){
			cout << "Wrong input. Select a valid option: ";
			cin >> choice;
			cout << "\n" << endl;

		}

		
		switch(choice){
			case 1:
				cout << "Your favourite color is red!\n" << endl;
				break;
			case 2:
				cout << "Your favourite color is Orange!\n" << endl;	
				break;
			case 3:
				cout << "Your favourite color is yellow!\n" << endl;
				break;
			case 4:
				cout << "Your favourite color is blue!\n" << endl;
				break;
			case 0:
				cout << "Program ended.\n" << endl;
				break;
		}

	}

	return 0;

}
