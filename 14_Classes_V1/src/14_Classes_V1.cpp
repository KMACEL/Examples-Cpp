//============================================================================
// Name        : 14_Classes_V1.cpp
// Author      : AceL
// Version     :
// Copyright   : Learn C++
// Description : Classes Example
//============================================================================

#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
	cout << "Classes" << endl; // prints Classes

	Cat cat;
	cat.sound();
	cat.jump();
	cout << cat.age(5) << endl;

	return 0;
}
