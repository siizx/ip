#pragma once
#include <iostream>
#include <string>

using namespace std;

struct contact {
	string name;
	string surname;
	int phoneNumber;
	contact* next;
	contact* prev;
};

typedef contact* list;

#include "includes.h"


void inputAndAddContact(list& L);
void printContactsList(const list& contacts);
