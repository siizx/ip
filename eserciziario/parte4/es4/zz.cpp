#include <iostream>

using namespace std;

int main(){
	
	int n;
	float sum = 0;
	cout << "Numero di reali da salvare: ";
	cin >> n;
	cout << endl;
	
	float arr[n];
	
	cout << "Inserisci " << n << " reali:" << endl;
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}

	cout << endl;
		
	for(int j =0; j<n; j++){
		sum = sum + arr[j];
	}
	
	cout << "La somma dei reali inseriti e: " << sum << endl;
	cout << "La media di " << sum << " e': " << sum/n << endl;
	 
		
		
			
	
	return 0;

}
