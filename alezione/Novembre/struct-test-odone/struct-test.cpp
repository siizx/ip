#include <iostream>
#include <string>

#include <fstream>

using namespace std;

struct birthday{
    int giorno;
    int mese;
    int anno;
};

struct Matricola{
    string nome;
    string cognome;
    birthday annonascita;
};

int main(){

    Matricola s1;
    cout << "Inserisci il tuo nome: ";
    cin >> s1.nome;
    cout << endl;

    cout << "Inserisci il tuo cognome: ";
    cin >> s1.cognome;
    cout << endl;

    int annot;
    int meset;
    int giornot;
    cout << "Inserisci la tua data di nascita (gg mm aaaa): ";
    cin >> s1.annonascita.giorno >> s1.annonascita.mese >> s1.annonascita.anno;
    cout << endl;

    ofstream matricole;
    matricole.open("matricole.txt", fstream::app);
    matricole << s1.cognome << " " << s1.nome << " " << s1.annonascita.giorno << "/" << s1.annonascita.mese << "/" << s1.annonascita.anno << "\n" << endl;

    matricole.close();

    // ifstream matricoleIN;
    // string output;
    // matricoleIN.open("matricole.txt");
    // matricoleIN >> output;
    // getline(matricoleIN, output);
    // cout << "1 " << output << endl;
    // cout << matricoleIN;
    // while(!matricoleIN.eof()) cout << matricoleIN;
    // matricoleIN.close();
    // cout << output << endl;



    return 0;
}