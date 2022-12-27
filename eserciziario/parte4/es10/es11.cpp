#include <iostream>
using namespace std;

int main () {

	int M = 5;
	int N = 8;
	
	int a[M][N];
	
	for(int i=0; i<M; i++) {
		for(int j=0; j<N; j++) 
			cout << a[i][j] << endl;
	}
	
	return 0;
}
