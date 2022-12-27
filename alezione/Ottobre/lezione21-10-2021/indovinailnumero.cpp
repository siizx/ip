#include <iostream>
#include <cstdlib>
#include<ctime>
// NB rand genera numeri da 0 a 32767.

int main()
{
	//chiedo all-utente di indovinare un numero intero compreso in un intervallo di tempo.
	//intervalo predefinito
	//generazione di un numero pseudo-casuale nell'intervallo prestabilito: num
	// ciclo infinito, fino a  che l'utente non vince. 
	//richiesta input (numero intero): guess
	//se num  uguale a guess l'utente ha vinto, altrimenti ha perso.
	// stampo quanti passi ci ha messo
	
	srand(time(0));
	const bool debug = false; // questo è il *debug
	const int MIN = 10;
	const int MAX = 100; //considerero numero in [0, MAX]
	int num = (MIN + (rand()%(MAX-MIN + 1))); //generazione numeri casuali
	int guess;    //scelta utente;
	int cont = 1;
	bool quit = false;
	
	// il debug serve al programmatore. nella versione di release andremo 
	//a modificare il *debug in false
	
	if (debug) 
		std::cout << "Il numero è: " << num << std::endl;
	
	bool won = false;
	bool not_yet = true;
	
	while (not_yet && (cont <= MAX) && !quit) {
		std::cout << "Indovina il numero tra 10 e " << MAX << ". Inserisci -1 per uscire dal gioco" << "\n";
		std::cin >> guess;
	
		if (num == guess) {
			std::cout << "Hai vinto in " << cont << " tentativi" << "\n";
			won = true;
			not_yet = false;
		}
		else if (guess == -1) {
			std::cout << "Sei uscito dal gioco." << "\n";
			quit = true;
		}
		else {
			std::cout << "Riprova: " << "\n";
			cont++;
			if (guess > num) {
				std::cout << "Overshoot" << std::endl;
			}
				else if (guess < num) {
				std::cout << "Troppo piccolo" << "\n";
				}
		}
	}
	
	
	
	return 0;
}
