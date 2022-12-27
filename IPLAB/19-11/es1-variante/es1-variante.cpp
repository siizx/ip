#include <iostream>
#include <cmath>
#include "Geometry.h"

using namespace std;


double dist(Point, Point);
double lungperimetro(Point [], int);
//double dist(double, double); // inutilizzata, il prof voleva fare vedere che non da errore perche sono due funzioni diverse

int main()
{

    const int N = 5;
    Point lati[N];

    cout << "Scrivi le coordinate di " << N << " punti: \n";
    for (int i=0; i<N; i++) {
        cout << "Punto n." << i << "-- ";
        cin >> lati[i].x >> lati[i].y;
    };
    
    try {
        double lung = lungperimetro(lati, N);
        cout << "Il perimetro è lungo " << lung << " in totale \n";
    }catch(char const * err) {
        cout << "ERRORE: " << err << endl;
    }

    


    return 0;
}

double lungperimetro(Point p[], int N)
{
    if(p[0].x != p[N-1].x || p[0].y != p[N-1].y)
        throw "Non e' un poligono. La linea non e' chiusa. \n";

    double lung = 0.0;
    for (int j=0; j<N-1; j++) 
        lung += dist(p[j], p[j+1]);
    return lung;
}

double dist(Point p1, Point p2)
{
    double lx = p1.x-p2.x;
    double ly = p1.y-p2.y;
    return sqrt(lx*lx + ly*ly);
}
