#include <iostream>

using std::cout;
using std::endl;

int main () {
	
	char zero = '0';
	bool a = (3 > 1);
	bool b = ((4 / 2) < 0);
	bool c = (zero == 0);
	bool d = (0 < (10/2) <= 10);
	bool e = (2 < 3 < 1);
	bool g = (3 < -5);
	bool f = (!g || (7 > 0) );
	
	
	cout << "Tre è maggiore di uno. = " << std::boolalpha << a << endl;
	cout << "quattro diviso due è minore di zero = " << std::boolalpha << b <<  endl;
	cout << "il carattere 'zero' è uguale al valore zero = " << std::boolalpha << c << endl;
	cout << "dieci mezzi è compreso fra zero escluso e dieci incluso = " << std::boolalpha << d << endl;
	cout << "non è vero che tre è maggiore di due e minore di uno = " << std::boolalpha << !e << endl;
	cout << "tre minore di meno cinque implica sette maggiore di zero = " << std::boolalpha << f << endl;

	return 0;
}
