#include <iostream>
#include <cmath>
#include "Geometry.h"

using namespace std;


double dist(Point, Point);
//double dist(double, double); // inutilizzata, il prof voleva fare vedere che non da errore perche sono due funzioni diverse

int main()
{

    const int N = 5;
    Point spezzata[N];

    cout << "Scrivi le coordinate di " << N << " punti: \n";
    for (int i=0; i<N; i++) {
        cout << "Punto n." << i << "-- ";
        cin >> spezzata[i].x >> spezzata[i].y;
    };

    double lung = 0.0;
    for (int j=0; j<N-1; j++) 
        lung += dist(spezzata[j], spezzata[j+1]);

    cout << "La spezzata è lunga " << lung << " in totale \n";

    


    return 0;
}

double dist(Point p1, Point p2)
{
    double lx = p1.x-p2.x;
    double ly = p1.y-p2.y;
    return sqrt(lx*lx + ly*ly);
}
