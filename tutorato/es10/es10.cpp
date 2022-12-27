//INCOMPLETO
#include <iostream>
using namespace std;

struct studente{
    string nome;
    string cognome;
    unsigned int matricola;
    unsigned int annoDiNascita;
    float votoMedio;
    bool giaStampato;
};

int() main {

    int N = 3;
    for(i=0; i<N; i++) {
        cout << "Nome: " << endl;
        cin >> studenti[i].nome;
        cout << "Cognome: " << endl;
        cin >> studenti[i].cognome;
        cout << "Matricola: " << endl;
        cin >> studenti[i].matricola;
        cout << "Anno di nascita: " << endl;
        cin >> studenti[i].annoDiNascita;
        cout << "Voto medio: " << endl;
        cin >> studenti[i].votoMedio;
        // studenti[i].giaStampato;
    }
    
    cout << endl << "===    STRUDENTI ORDINATI PER ETA ===" << endl;
    for(j=0; j<N; j++) {
        int index = -1;
        int oldest = 10000;
        for (int i=0; i<N; i++) {
            if (studenti[i].annoDiNascita<oldest && !studenti[i].giaStampato) {
                oldest = studenti[i].annoDiNascita;
                index = i;
            }
        }
        studenti[i].giaStampato = true;
        cout << "Nome: " << studenti[index].nome << endl;
        cout << "Cognome: " << studenti[index].cognome << endl;
        cout << "Matricola: " << studenti[index].matricola << endl;
        cout << "Anno di nascita: " << studenti[index].annoDiNascita << endl;
        cout << "Voto medio: " << studenti[index].VotoMedio << endl;
    }

    return 0;
}