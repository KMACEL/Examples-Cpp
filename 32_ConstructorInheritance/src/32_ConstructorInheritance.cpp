//============================================================================
// Name        : 32_ConstructorInheritance.cpp
// Author      : AceL
// Version     :
// Copyright   : Learn C++
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	Animal() {
		cout << "Create Animal Non - Value " << endl;
	}

	Animal(string name) :
			name(name) {
		cout << "Create Animal : " << this->name << endl;
	}

	void info() {
		cout << "Animal Name : " << this->name << endl;
	}
};

class Bear: public Animal {
public:
	Bear() {
		cout << "Bear is created Non - Value " << endl;
	}

	Bear(string name) :
			Animal(name) {
		cout << "Create Bear... " << endl;
	}
};

class BrownBear: public Bear {
public:
	BrownBear() {
		cout << "Brown Bear is created Non - Value " << endl;
	}

	BrownBear(string name) :
			Bear("BrownBear") {
		cout << "Create BrownBear... " << endl;
	}
};

//--------------------------------------------------------

int main() {
	cout << "Constructor Inheritance" << endl; // prints Constructor Inheritance
	cout << "1.Animal Non - Value ... " << endl;
	Animal animal;

	cout << endl << "======================================" << endl << endl;

	cout << "1. Animal Value ... " << endl;
	Animal animal2("Bear");

	cout << endl << "======================================" << endl << endl;

	cout << "2. Bear Non - Value ... " << endl;
	Bear bear;

	cout << endl << "======================================" << endl << endl;

	cout << "2. Animal Value ... " << endl;
	Bear bear2("Browny");

	cout << endl << "======================================" << endl << endl;

	cout << "3. BrownBear Non - Value ... " << endl;
	BrownBear brownBear;

	cout << endl << "======================================" << endl << endl;

	cout << "3. Animal Value ... " << endl;
	BrownBear brownBear2("");

	return 0;
}
