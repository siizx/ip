#include "nomi.h"


// restituisce una lista di conteggi nomi in cui ogni nome compare
// solo una volta, con annotato il numero di volte in cui appare
// nella lista in ingresso (campo "frequenza")
ListaConteggiNomi unique(ListaNomi l)
{	
	ListaConteggiNomi c_list = nullptr;
	
	ListaNomi aux = l;
	ListaConteggiNomi c_aux = c_list;
	ListaConteggiNomi c_tmp = nullptr;
	
	bool start_bool;
	
	//Scorrimento per tutto l
	while(aux != nullptr){
		
		//Elemento inserito in testa (inizializzazione lista)
		if(c_list == nullptr){
			
			//Preparazione nuovo elemento
			UnConteggioNome *new_elem = new UnConteggioNome;
			new_elem->next = c_list;
			new_elem->frequenza = 1;
			new_elem->nome = aux->nome;
			
			//Attaccamento nuovo elemento come start della nuova lista
			c_list = new_elem;
			
			//non entreremo più dentro questa sezione
			start_bool = false;
		}
		
		//Casi generali (evito di eseguire erroneamente un doppio inserimento all'inizio)
		if(start_bool){
			
			//Inizializzo un booleano, usato per fermare il ciclo quando si è già trovata la posizione corretta
			bool inserted = false;
			
			//Scorrimento per la lista delle frequenze
			while((c_aux != nullptr) && (!inserted)){
				
				//Se trovo nella lista frequenze una cella corrispondente all'attuale cella osservata di l, allora aumento la frequenza e mi tolgo dal ciclo (cambio inserted)
				if(c_aux->nome == aux->nome){
					++c_aux->frequenza;
					inserted = true;
				}
				
				//Scorro la lista delle frequenze
				c_tmp = c_aux;
				c_aux = c_aux->next;
			}
			
			//Se si arriva alla fine della lista delle frequenze, significa che non lo abbiamo trovato, e quindi dobbiamo preparare una nuova cella
			if(c_aux == nullptr){
				UnConteggioNome *new_elem = new UnConteggioNome;
				new_elem->next = c_tmp->next;
				c_tmp->next = new_elem;
				new_elem->nome = aux->nome;
				new_elem->frequenza = 1;
			}
		}
		
		//Resetto lo scorrimento nella lista delle frequenze
		c_aux = c_list;
		c_tmp = nullptr;
		
		//Vado al prossimo elemento di l
		aux = aux->next;
		
		//Usato per eseguire solo scorrimenti nella lista frequenze
		start_bool = true;
	}
	
	return c_list;
}
