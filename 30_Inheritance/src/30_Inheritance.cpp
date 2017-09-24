//============================================================================
// Name        : 30_Inheritance.cpp
// Author      : AceL
// Version     :
// Copyright   : C++ Example
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
public:
	void speak() {
		cout << "Huarhkh" << endl;
	}
};

class Cat: public Animal {
public:
	void jump() {
		cout << "JUMPPAAAA" << endl;
	}
};

class Lion: public Cat {
public:
	void attach() {
		cout << "kıpırktcsa" << endl;
	}
};

int main() {
	cout << "Inheritance" << endl; // prints Inheritance

	Animal animal;
	animal.speak();

	Cat cat;
	cat.speak();
	cat.jump();

	Lion lion;
	lion.speak();
	lion.jump();
	lion.attach();

	return 0;
}
