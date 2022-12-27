#include <iostream>

using namespace std;

int main() 
{
	const int N = 5;
	
	int *v;
	
	v = new int[N];
	
	for(int i=1; i<=N; i++){
		*v = i*2-1;
		cout << *v << endl;
		v+=1;  
	}
	delete [] v;
	
	cout << endl;
	
	v = new int[2*N];
	
	for(int j=1; j<=2*N; j++){
		*v = j*4-1;
		cout << *v << endl;
		v+=1;
	}
	
	delete [] v;
	
	
	
	
	return 0;	
}
