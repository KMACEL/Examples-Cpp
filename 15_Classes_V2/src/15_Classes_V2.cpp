//============================================================================
// Name        : 15_Classes_V2.cpp
// Author      : AceL
// Version     :
// Copyright   : Learn C++
// Description : Classes Example
//============================================================================

#include <iostream>
#include "Dog.h"
using namespace std;

int main() {
	cout << "Classes" << endl; // prints Classes

	Dog dog1;
	dog1.sound();

	{
		Dog dog;
		dog.sound();
	}

	dog1.sound();
	cout << "Classes 2 End" << endl;

	dog1.sound();

	return 0;
}
