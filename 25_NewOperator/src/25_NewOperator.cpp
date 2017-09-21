//============================================================================
// Name        : 25_NewOperator.cpp
// Author      : AceL
// Version     :
// Copyright   : C++ Example
// Description : New Operator
//============================================================================

#include <iostream>
using namespace std;

class Dog {
private:
	string dogName;

public:
	Dog() {
		cout << "Create Dog Class " << endl;
	}


	Dog(const Dog &dogCopy) :
			dogName(dogCopy.dogName) {
		cout << "copied Dog Class : " << dogCopy.dogName << endl;
	}
	;

	~Dog() {
		cout << "Dog Class End : " << this->dogName << endl;
	}


	void setName(string dogName) {
		this->dogName = dogName;
	}


	void dogSound() {
		cout << this->dogName << " says Hav Hav Havuuu!" << endl;
	}

};

int main() {
	cout << "New Operator" << endl; // prints New Operator

	Dog dog1;
	dog1.setName("Çomar");
	dog1.dogSound();

	cout << "dog1 size of : " << sizeof(dog1) << endl;

	cout << endl << "======================================" << endl << endl;

	Dog *dog2 = new Dog();
	(*dog2).setName("Pulsar");
	(*dog2).dogSound();
	cout << "dog2 size of : " << sizeof(dog2) << endl;

	cout << endl << "======================================" << endl << endl;

	Dog *dog3 = new Dog();
	dog3->setName("Karabaş");
	dog3->dogSound();

	cout << "dog3 size of : " << sizeof(dog3) << endl;
	delete dog3;

	cout << endl << "======================================" << endl << endl;
	delete dog2;
	return 0;
}
