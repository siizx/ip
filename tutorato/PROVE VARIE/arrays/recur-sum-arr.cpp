#include <iostream>
using namespace std;

int sum(int arr[], int s)
{	
	if(s==0) return -666;
	if (s == 1) return arr[s-1];
	return sum(arr, s - 1) + (arr[s - 1]);
}

int main()
{

	int s = 6;
	int arr[s] = {3, 4, 6, 7,5};
	int somma = sum(arr, s);
	cout << "Somma di arr = " << somma << endl;

	return 0;
}
