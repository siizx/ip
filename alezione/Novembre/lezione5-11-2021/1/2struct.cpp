#include <iostream>

using std::cout;
using std::cin;
using std::endl;

struct Data {
	int anno;
	short unsigned int mese;
	short unsigned int giorno;
};
	

int main() 
{
	
	const int N = 5;
	
	//int a[N]; questo sarebbe come inizializzare un array.
	Data giorni[N];//questo e come inizializzare un array utilizzando gli struct:
	cout << "Scrivi " << N << " date (nella forma A M G): " << endl;
	for (int i=0; i<N; ++i) {
		cout << "Data n. " << i+1 << endl;
		cin >> giorni[i].anno;
		cin >> giorni[i].mese;
		cin >> giorni[i].giorno;
	}
	
	cout << "Hai scritto le seguenti date: " << endl;
	for (int i=0; i<N; ++i) {
		cout << i+1<< ") " << endl;
		cout << giorni[i].anno<< " ";
		cout << giorni[i].mese << " ";
		cout << giorni[i].giorno<< " " ;
		cout << endl;
	}
	
	
	
	for (int i=0; i<N-1; ++i) {
		int min =i;
		for (int j=i+1; j<N; ++j) {
			if (/* giorni[j] < giorni[min]*/ 
			(giorni[j].anno < giorni[min].anno) || (giorni[j].anno == giorni[min].anno 
			&& 
			giorni[j].mese < giorni[min].mese) || (giorni[j].anno == giorni[min].anno 
			&& 
			giorni[j].mese == giorni[min].mese 
			&& 
			giorni[j].giorno < giorni[min].giorno))min = j;
			if (min != i) {
				Data tmp = giorni[i];
				giorni[i] = giorni[min];
				giorni[min] = tmp;	
			}
			
			cout << endl << endl;
			
		cout << "Date ordinate: " << endl;
		for (int i=0; i<N; ++i) {
		cout << i+1<< ") " << endl;
		cout << giorni[i].anno<< "/";
		cout << giorni[i].mese << "/";
		cout << giorni[i].giorno<< "/" ;
		cout << endl;
		}
	}
	
	return 0;
}
}


