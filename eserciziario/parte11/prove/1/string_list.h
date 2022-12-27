#ifndef STRINGORDLIST
#define STRINGORDLIST
// riusiamo le liste per le liste ordinate
typedef struct cell_str cell; // nascondiamo implementazione di cell
typedef cell *list;
typedef list ordList;
// funzioni
void insert(ordList &l, std::string s); // inserimento ordinato
void read(list &l);                     /*legge elementi in ordine qualsiasi e li inserisce in ordine
                     Eventuale area di memoria inizialmente puntata da l NON deve essere rilasciata*/
void print(const list l);
std::string getElem(const list l, int index);
void deleteAt(list &l, int index); // cancella elemento in posizione fissata

// deleteOnce cancella la prima occorrenza di una stringa in una lista

// deleteAll cancella tutte le occorrenze di una stringa in una lista

/* are_equal restituisce vero se le due liste contengono le stesse stringhe
(con la stessa molteplicit\`a) */

/* concat restituisce una lista ordinata contenente gli elementi di 2 liste date
Il numero di occorrenze di un elemento nel risultato \`e la somma
del numero delle sue occorrenze nei due argomenti */

/* union restituisce una lista ordinata senza ripetizioni contenente
gli elementi presenti in almeno una delle liste argomento */

/* intersect restituisce una lista ordinata senza ripetizioni contenente
gli elementi presenti in entrambe le liste argomento */
#endif