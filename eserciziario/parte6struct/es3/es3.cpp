#include <iostream>
#include <cmath>

using namespace std;

struct StraightLine {
    double m; //coeff ang
    double q; // quota
};

struct Point{
    double x;
    double y;
};

const double TOLL = 0.0001;

int main(){

    cout << "Inserire i parametri della retta R (m q): ";
    StraightLine R;
    cin >> R.m >> R.q;

    cout << endl;

    cout << "Inserire le coordinate del punto P(x y): ";
    Point P;
    cin >> P.x >> P.y;
    cout << endl;

    cout << "La retta R di equazione y = " << R.m << "x + " << R.q << endl;
    if(fabs(P.y - R.m*P.x - R.q) < TOLL) cout << "Passa ";
    else cout << "Non passa ";
    cout << "per il punto di coordinate " << P.x << " e " << P.y << endl;

    return 0;
}