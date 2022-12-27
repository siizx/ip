#include <iostream>
using namespace std;

int main() {


	struct Point {
		double x;
		double y;
	};
	
	
	
	Point P1;
	Point P2;
	
	cout << "Inserire le coordinate x e y del punto a: ";
	cin >> P1.x;
	cin >> P1.y;
	
	
	cout << "Inserire le coordinate x e y del punto b: ";
	cin >> P2.x;
	cin >> P2.y;
	
	cout << "============================" << endl;
	
	if((P1.x != P2.x) && (P1.y != P2.y)) {
	cout << "P1 = (" << P1.x << ";" << P1.y << ")" << endl;
	cout << endl;
	cout << "P2 = (" << P2.x << ";" << P2.y << ")" << endl;
	}
	else cout << "Si tratta dello stesso punto." << endl;


	return 0;
}
