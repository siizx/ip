#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	struct Data {
		int anno;
		short unsigned int mese;
		short unsigned int giorno;
	};
	
	struct Data miaData; // lo "struct all'inizio e opzionale!"
	
	miaData.anno = 1994;
	miaData.mese = 02;
	miaData.giorno = 10;
	
	cout << miaData.anno<<"/";
	cout << miaData.mese<<"/";
	cout << miaData.giorno << endl;
	
	
	return 0;	
}


