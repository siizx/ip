#include <iostream>
using namespace std;

void print( int arr[], int zero, int s)
{
	if(zero<s) {	
		cout << arr[zero] << " ";
		print(arr,++zero,s);
	}else return;
}
int main(){
	
	int zero = 0;
	int s=6;
	int arr[s]={1,2,3,4,5,6};

	print(arr,zero,s);
	cout << endl;

return 0;
}

