#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// STRUCTS

struct cell
{
	string name;
	int age = 0;
	cell *next = nullptr;
};

typedef cell *lista;

// FUNZIONI

void initList();

void addOne(lista &);

void deleteOne();

void readList(lista &l);
