#include <iostream>

using namespace std;

void swap(int &a, int &b){
	int c = a;
	a = b;
	b = c;
}

int bubble(int a[], int s){
	for(int i=0; i<s; i++){
		for(int o=0; o<s-1-i; o++)
			if(a[o]>a[1+o]){
				swap(a[o], a[o+1]);
			}
	}
	return a[0];
}


int main(){

	int s = 5;
	int *a = new int[s];
	
	for(int p=0; p<s; p++){
		cin >> a[p];
		
	}
	cout << endl;
	
	bubble(a,s);
	
	for(int i=0; i<s; i++){
	
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
