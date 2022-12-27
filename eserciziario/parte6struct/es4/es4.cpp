#include <iostream>
#include <cmath>

using namespace std;

struct Rect {
	string name;
	float top_left_x;
	float top_left_y;
	
	float bottom_right_x;
	float bottom_right_y;
};
	
int main(){
	
	
	Rect Rect1; //////////// dichiarazione rettangolo 1
	
	Rect1.name = "Rettangolo 1";
	
	cout << endl;
	
	cout << "=======" << Rect1.name << "=======" << endl;
	cout << endl;
	cout << "Inserisci i valori x e y dell'angolo in alto a sinistra: ";
	cin >> Rect1.top_left_x;
	cin >> Rect1.top_left_y;
	cout << endl;
	
	cout << "Inserisci i valori x e y dell'angolo in basso a destra: ";
	cin >> Rect1.bottom_right_x;
	cin >> Rect1.bottom_right_y;
	cout << endl;
	
	cout << "=========================================================" << endl;
	cout << endl;
	
	Rect Rect2; //////////// dichiarazione rettangolo 1
	
	Rect2.name = "Rettangolo 2";
	
	cout << "=======" << Rect2.name << "=======" << endl;
	
	cout << endl;
	
	cout << "Inserisci i valori x e y dell'angolo in alto a sinistra: ";
	cin >> Rect2.top_left_x;
	cin >> Rect2.top_left_y;
	cout << endl;
	
	cout << "Inserisci i valori x e y dell'angolo in basso a destra: ";
	cin >> Rect2.bottom_right_x;
	cin >> Rect2.bottom_right_y;
	cout << endl;
	
	
	
	cout << "=========================================================" << endl;
	cout << endl;
	cout << "Ecco i dati del " << Rect1.name << ": " << endl;
	cout << "Angolo in alto a sinistra: "<< "(" << Rect1.top_left_x << "," << Rect1.top_left_y << ")" << endl;
	cout << "Angolo in basso a destra: " << "(" << Rect1.bottom_right_x << "," << Rect1.bottom_right_y << ")" << endl;
	cout << endl;
	cout << "=========================================================" << endl;
	cout << endl;
	cout << "Ecco i dati del " << Rect2.name << ": " << endl;
	cout << "Angolo in alto a sinistra: "<< "(" << Rect2.top_left_x << "," << Rect2.top_left_y << ")" << endl;
	cout << "Angolo in basso a destra: " << "(" << Rect2.bottom_right_x << "," << Rect2.bottom_right_y << ")" << endl;
	cout << endl;
	cout << "=========================================================" << endl;
	cout << endl;
	
	if((fabs(Rect1.top_left_x - Rect1.bottom_right_x) > fabs(Rect2.top_left_x - Rect2.bottom_right_x)) && (fabs(Rect1.top_left_y - Rect1.bottom_right_y) > fabs(Rect2.top_left_y - Rect2.bottom_right_y))) {
		cout << Rect1.name << " può contenere " << Rect2.name << endl;
	}
	else if((fabs(Rect1.top_left_x - Rect1.bottom_right_x) < fabs(Rect2.top_left_x - Rect2.bottom_right_x)) && (fabs(Rect1.top_left_y - Rect1.bottom_right_y) < fabs(Rect2.top_left_y - Rect2.bottom_right_y))) {
		cout << Rect2.name << " può contenere " << Rect1.name << endl;
	}
	
	
	
	return 0;
}
