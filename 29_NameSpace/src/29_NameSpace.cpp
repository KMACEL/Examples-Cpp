//============================================================================
// Name        : 29_NameSpace.cpp
// Author      : AceL
// Version     :
// Copyright   : C++ Example
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Classes/Cat.h"
#include "Classes/Dog.h"

using namespace std;

int main() {
	cout << "Name Space" << endl; // prints Name Space

	ct::Animal cat;
	dg::Animal dog;

	cat.speak();
	dog.speak();

	return 0;
}
