#include "header.h"

void initList(){};

void addOne(lista &l)
{
	lista curr = l;
	lista prev = l;

	while (curr->next != nullptr)
	{
		prev = curr;
		curr = curr->next;
	}

	curr->next = new cell;
	curr = curr->next;

	cout << "Nome: ";
	cin >> curr->name;
	cout << endl;

	cout << "Age: ";
	cin >> curr->age;
	cout << endl;
};

void readList(lista &p)
{
	lista curr = p;
	for (int i = 0; i < 3; i++)
	// while (curr->next != nullptr)
	{
		cout << "Name: " << curr->name << endl;
		cout << "Age: " << curr->age << endl;
		cout << endl;
		curr = curr->next;
	}
};

void deleteOne();
