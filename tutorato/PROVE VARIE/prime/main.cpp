#include <iostream>

using namespace std;

bool isPrime(int n)
{
	for (int i = n - 1; i > 1; i--)
	{

		if (n % i == 0)
			return false;
	}
	return true;
}

void howManyPrime(int n)
{
	while (n >= 2)
	{
		if (isPrime(n) == true)
		{
			cout << n << " ";
		}
		n--;
	}
	cout << endl;
}

int main()
{

	cout << "How many prime numbers between zero and ";
	int n;
	cin >> n;
	cout << "?\n"
		 << endl;

	howManyPrime(n);

	return 0;
}
