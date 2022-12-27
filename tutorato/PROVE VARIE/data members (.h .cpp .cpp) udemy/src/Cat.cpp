#include <iostream>
#include "Cat.h"
using namespace std;

void Cat::speak(){
	if(happy) cout << "Meooww!" << endl;
	else cout << "*HISS*" << endl;
}

void Cat::make_happy(){
	happy = true;
}

void Cat::make_sad(){
	happy = false;
}
