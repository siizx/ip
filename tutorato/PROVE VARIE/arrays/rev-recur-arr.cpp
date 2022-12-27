#include <iostream>
using namespace std;

float avg(int A[], int size) {

    string s="some error";

    if (size==0) throw s;

    if (size==1) return A[0];

    return (A[size-1]+(size-1)*avg(A,size-1))/size;
    }
int main(){
	
	int zero = 0;
	int s=6;
	int arr[s]={1,2,3,4,5,9};
	//for(int i=0; i< s; i++){
	//	cout << arr[i] << " ";
	//}
	cout << avg(arr,s);
	cout << endl;

return 0;
}
