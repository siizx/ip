#include <iostream>
using namespace std;

int max(int arr[], int s)
{	
	if(s==1) return arr[0];
	int m;
	return ((m=max(arr,s-1)) > arr[s-1] ? m : arr[s-1]);
}

int main()
{

	int s = 2;
	int arr[s] = {38, 4};
	int mass = max(arr, s);
	cout << "max di arr = " << mass << endl;

	return 0;
}
