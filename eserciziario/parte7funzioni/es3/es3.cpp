#include <iostream>

using namespace std;

float average(int hm){
	float num=0;
	float avg=0;
	cout << "Inserisci " << hm << " numeri reali per calcolarne la media: ";
	for(int i=0; i<hm; i++){
		cin >> num;
		avg = avg + num;
	}
	avg = avg/hm;
	return avg;
}

const int err;

int main(){
	int input;
	cout << "Di quanti numeri vuoi fare la media? ";
	cin >> input;
	float avg = average(input);
	cout << endl;
	cout << "La media è: " << avg << endl;
	return 0;
}
