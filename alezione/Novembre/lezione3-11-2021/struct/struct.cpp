#include <iostream>

using std::cout;
using std::cin;
using std::endl;


	struct studente{
		string cognome;
		string nome;
		unsigned int matricola;
	};

int main() 
{
	//esempio semplice
//	struct product{  //product is the name of the TYPE we created.
//		string description;
//		string kind;
//		double price;
//	};
//	
	//useremo product proprio come usiamo int o double
//	product P = 

	// CONSTROLLARE ESEMPIO PAG 6 SUL PDF. MOLTO CHIARO COME USARE STRUCT
	

	
	studente S; //si crea uno struct co nome S
	
	cout << "Inserisci il cognome: " << endl;
	cin >> S.cognome;
	cout << "Inserisci il nome: " << endl;
	cin >> S.nome;
	cout << "Inserisci il numero di matricola: " << endl;
	cin >> S.matricola;
	
	return 0;	
}


