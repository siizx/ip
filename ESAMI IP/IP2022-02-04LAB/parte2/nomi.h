#include <string>

// lista di nomi di persona

struct UnNome {
  std::string nome;
  UnNome *next;
};

typedef UnNome * ListaNomi;
 
// lista di nomi con conteggio occorrenze
struct UnConteggioNome {
  std::string nome;
  int frequenza;
  UnConteggioNome *next;
};

typedef UnConteggioNome * ListaConteggiNomi;


// restituisce una lista di conteggi nomi in cui ogni nome compare
// solo una volta, con annotato il numero di volte in cui appare
// nella lista in ingresso (campo "frequenza")
ListaConteggiNomi unique(ListaNomi l);

