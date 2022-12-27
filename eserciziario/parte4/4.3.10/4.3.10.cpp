#include <iostream>

using namespace std;

int main(){

	int m,n;
	cout << "x: ";
	cin >> m;
	cout "\ny: ";
	cin >> n;
	
	int arr[m][n];
	
	// SET ALL TO ZERO
	
	for(int i=0; i<m;i++){
		arr[i][n] = arr[n];
		for(int p=0; p<n; p++){
			arr[i][p]=0;
		}
	}
	
	
	/// PRINTING
	
	for(int i=0; i<m;i++){
		arr[i] = arr[n];
		for(int p=0; p<n; p++){
			cout << arr[i][p] << " ";
		}
		cout << endl;
	}
	
	

	return 0;
}
