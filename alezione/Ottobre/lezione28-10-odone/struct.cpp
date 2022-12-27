#include <iostream>

using namespace std;

struct Point {
    double x;
    double y;
};

struct Rect{
    Point top_left;
    Point bottom_right;
};



int main(){

    Rect R1;
    Point P1, P2;
    cout << "Inserisci un rettangolo, prima il vertice in alto a sinistra e poi quello in basso a destra (usa il piano cartesiano come riferimento)"<< endl;
    
    cout << "Inserisci le coordinate del primo punto x e y: ";

    cin >> P1.x >> P1.y;

    cout << "Inserisci le coordinate del secondo punto x e y: ";

    cin >> P2.x >> P2.y;

    // verifica geometria

    if((P1.x < P2.x) && (P1.y > P2.y)){
        R1.top_left = P1;
        R1.bottom_right = P2;
    }


    // stampa

    cout << "Rettangolo" << endl;
    cout << "Top left: (" << R1.top_left.x << ", " << R1.top_left.y << ")" << endl;
    cout << "Bottom right: (" << R1.bottom_right.x << ", " << R1.bottom_right.y << ")" << endl;

    return 0;
}