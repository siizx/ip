#include "inc.h"

void initCntAdd(list &l)
{

	list nc = new cnt;
	if (l == nullptr)
		l = nc;

	cout << "\nName: ";
	cin >> nc->name;
	cout << "\nSurname: ";
	cin >> nc->sur;
	cout << "\nPhone Number: ";
	cin >> nc->num;
	cout << endl;
	nc->prev = nullptr;
	nc->next = nullptr;

	list aux = l;

	while (aux->next != nullptr)
	{

		aux = aux->next;
	};
	if (nc == l)
		return;
	else
	{
		aux->next = nc;
		nc->prev = aux;
	}
};

void printList(const list &l)
{

	list aux = l;

	while (true)
	{

		cout << "\nName: " << aux->name;
		cout << "\nSurame: " << aux->sur;
		cout << "\nPhone number: " << aux->num << endl;

		if (aux->next == nullptr)
			break;
		else
			aux = aux->next;
	}
}
