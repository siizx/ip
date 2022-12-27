#include <iostream>

using namespace std;

struct darray
{
	int *store;
	unsigned int size;
};

void read_d_array(darray &d)
{
	int s = 4;

	while (s < 0)
	{
		cout << "Size: ";
		cin >> s;
	}
	d.size = s;
	d.store = new int[s];

	cout << "Insert the integers: " << endl;

	for (int i = 0; i < s; i++)
	{
		cout << "Pos." << i << ": ";
		cin >> d.store[i];
		cout << endl;
	}
}

void print_d_array(const darray &d)
{
	cout << "Here are the integers saved in the dynamic array: ";
	for (int k = 0; k < d.size; k++)
	{
		cout << d.store[k];
		cout << " ";
	}
	cout << endl;
}

int main()
{

	darray *arr = new darray;

	read_d_array(*arr);

	print_d_array(*arr);

	return 0;
}
