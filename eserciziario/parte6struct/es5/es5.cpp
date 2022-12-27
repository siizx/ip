#include <iostream>

using namespace std;

struct Date{
    unsigned int giorno;
    unsigned int mese;
    unsigned int anno;
};

Date TODAY;
Date D1;


int main(){

//Data Odierna
TODAY.giorno = 05;
TODAY.mese = 01;
TODAY.anno = 2022;

cout << "Inserisci la una data (gg mm aaaa): ";
cin >> D1.giorno >> D1.mese >> D1.anno;
cout << endl;

while((D1.giorno < 1 || D1.giorno > 31) || (D1.mese < 1 || D1.mese > 12)){
    cout << "La data inserita non è corretta." << endl;
    cout << "Inserisci una data (gg mm aaaa): ";
    cin >> D1.giorno >> D1.mese >> D1.anno;
    cout << endl;
};
if(TODAY.anno == D1.anno && TODAY.mese == D1.mese && TODAY.giorno == D1.giorno) cout << "La data inserita combacia con la data odierna." << endl;
else if(TODAY.anno > D1.anno) cout << "La data inserita è una data passata." << endl;
else if(TODAY.anno == D1.anno && TODAY.mese > D1.mese) cout << "La data inserita è una data passata." << endl;
else if (TODAY.anno == D1.anno && TODAY.mese == D1.mese && TODAY.giorno > D1.giorno) cout << "La data inserita è una data passata." << endl;
else cout << "La data inserita è una data futura." << endl;

    return 0;
}