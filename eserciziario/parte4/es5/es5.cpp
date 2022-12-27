#include <iostream>

using namespace std;

int main () {
	
	int N = 10;
	float a[N];
	
	for (int j=0; j<N; j++) {
		a[j] = N - j;
	}
	
	int i;
	cout << a[i] << " ";
	cin >> i;
	a[i] = i*i/2.0;
	
	for (int i=0; i<N; i++) {
		cout << a[i] << " ";
	}
	
	cout << endl;
	return 0;
}
