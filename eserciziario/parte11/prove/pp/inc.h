#include <iostream>
#include <string>

using namespace std;

struct cnt
{

	string name;
	string sur;
	int num;
	cnt *prev;
	cnt *next;
};

typedef cnt *list;

void initCntAdd(list &l);
void printList(const list &l);
