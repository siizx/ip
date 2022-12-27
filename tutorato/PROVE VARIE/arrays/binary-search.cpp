#include <iostream>

using namespace std;

int binary(int list[], int length, int item)
{
	int first = 0;
	int last = length - 1;
	int mid;
	bool found = false;

	while (first <= last && !found)
	{
		mid = (first + last) / 2;
		if (list[mid] == item)
			found = true;
		else if (list[mid] > item)
			last = mid - 1;
		else
			first = mid + 1;
	}
	if (found)
		return mid;
	else
		return -1;
}

int main()
{

	int size = 9;
	int elem;
	// cout << "size: ";
	// cin >> size;
	cout << endl;
	int arr[size] = {1, 4, 7, 8, 11, 32, 35, 68, 80};

	// for (int i = 0; i < size; i++)
	//{
	//	cout << "arr[" << i << "] = ";
	//	cin >> arr[i];
	//	cout << endl;
	// }

	// print array

	cout << "Array elements: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "Elem to find: ";
	cin >> elem;
	cout << endl;

	// finding element
	int pos = binary(arr, size, elem);
	cout << "pos = " << pos << endl;

	return 0;
}
