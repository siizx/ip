#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

#include "nomi.h"

// funzioni ausiliarie
std::string trim(std::string s)
{
  int start = 0;
  int end = s.size()-1;
  while(start<=end && isspace(s[start])) start++;
  while(start<=end && isspace(s[end])) end--;
  s.substr(start,end-start+1);
  return s;
}

ListaNomi leggiFile(std::ifstream & file)
{
  if (!file) return nullptr;

  UnNome * n=new UnNome;
  file>>n->nome;
  n->nome = trim(n->nome);
  if (n->nome.size()==0) return nullptr;
  n->next = leggiFile(file);
  return n;
}

ListaNomi leggiFile(std::string nomefile)
{
  std::ifstream filenomi(nomefile);
  if (!filenomi) return nullptr;

  ListaNomi l=leggiFile(filenomi);

  filenomi.close();

  return l;
}

void stampa(ListaNomi l)
{
  while (l) {
    std::cout<<l->nome<<std::endl;
	 l=l->next;
  }
}

void stampa(ListaConteggiNomi l)
{
  while (l) {
    std::cout<<std::setw(3)<<l->frequenza;
	 std::cout<<"  "<<l->nome<<std::endl;
	 l=l->next;
  }
}


// Programma principale
int main()
{
  ListaNomi l=leggiFile("nomi.txt");
  if (!l) {
    std::cerr << "Lettura non riuscita - controlla nome e posizione del file\n";
	 return -1;
  }

  std::cout<<"Nomi letti da file:\n";
  stampa(l);
  std::cout<<"\n----\n";
  std::cout<<"Conteggi:\n";
  stampa(unique(l));
  std::cout<<"\n----\n";
}
