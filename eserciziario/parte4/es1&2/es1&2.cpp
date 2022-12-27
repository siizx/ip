#include <iostream>

using namespace std;

int main () {

	const int N = 10;
	int v[N];

	for(int i=0; i<N; i++) {
		v[i] = N-i;
		cout << v[i] << endl;
	};

    return 0;
}

