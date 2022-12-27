#include <iostream>
#include <string>
using namespace std;

struct cnt {
	string name;
	string surname;
	int number;	
	cnt* prev;
	cnt* next;
};


typedef cnt* list;

void printList (const list &l);
void initAddContact(list &l);
