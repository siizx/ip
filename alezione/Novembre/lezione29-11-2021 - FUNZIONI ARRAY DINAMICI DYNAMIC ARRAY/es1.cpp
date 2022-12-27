//COSTRUIRE UN INSIEME DI FUNZIONI PER LA MANIPOLAZIONE SICURADI ARRAY DINAMICI

#include <iostream>
using namespace std;

struct dynamic_array{
	int *store;
	unsigned int size;
};


void read_d_array(dynamic_array &d){
	int s=-1;
	while(s<0){
		cout << "Inserisci la dimensione dell'array dinamico (intero positivo): ";
		cin >> s;
	};

	d.size = s;
	d.store = new int [s];
	for (int i = 0; i<d.size; i++){
		cout << "Inserisci un intero: \n";
		cin >> d.store[i];
	};
};

void print_d_array(dynamic_array d){
	for(int j=0; j<d.size; j++)
		cout << d.store[j] << " ";
	cout << endl;
	
};

// GET	ACCEDE IN LETTURA AD UN ELEMENTO DELL'ARRAY DINAMICO E CE LO RESTITUISCE

int get_d_array(const dynamic_array &d, unsigned int idx){
	string err = "out of bound in get_d_array";
	if(idx >= d.size) throw err;

	return(d.store[idx]);
};

//CAMBIARE LA GRANDEZZA DELLARRAY SENZA PERDERE INFORMAZIONI
void resize_d_array(dynamic_array &d, unsigned int new_size){
	// creo array temporaneo della dimensione new_size
// copiare i1 contenuto vecchio nel nuovo "finche' ci sta"
int *store_temp = new int [new_size];
int min = (new_size<d.size ? new_size: d.size);
for(unsigned int i=0; i< min; ++i)
	store_temp[i] = d.store[i];
//MEjgggare_il vggghio_(de1e;e) e rimettere a posto tqgtj i puntapgrii
delete [] d.store;
d.store = store_temp;
};


// SET DI ARRAY, ACCEDE UN ELEMENTO IN SCRITTURA. CIOE ASSEGNA UN NUOVO VALORE ALLA POSIZIONE SCELTA

void set_d_array(dynamic_array &d, int val, unsigned int idx){
	string err= "out of bound in get_d_array";
	if(idx >= d.size) throw err;
	d.store[idx]=val;

};

int main () {
	
	dynamic_array D;
	read_d_array(D);
	print_d_array(D);

	int ninety=get_d_array(D,90);
	set_d_array(D,ninety+1,90);
	return 0;
}
