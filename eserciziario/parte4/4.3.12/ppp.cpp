#include <iostream>
using namespace std;

int main(){

	int num;
	bool pal = false;
	int mun=0;

	cout << "Inserisci un numero per verificare se e' palindromo o no: ";
	cin >> num;

	int copy=num;
	
	while(copy > 0){
		mun = mun*10 + copy%10;
		copy = copy/10;
	}
	
	if(num==mun) cout << num << " e' palindromo." << endl;
	else cout << num << " non e' palindromo." << endl;

	return 0;

}
