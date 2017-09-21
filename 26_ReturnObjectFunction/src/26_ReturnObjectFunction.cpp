//============================================================================
// Name        : 26_ReturnObjectFunction.cpp
// Author      : AceL
// Version     :
// Copyright   : Learn C++
// Description :Return Object Function
//============================================================================

#include <iostream>
using namespace std;

// Returning Class
class Car {
private:
	string carName;

public:
	Car() {
		cout << "Create Car Class!" << endl;
	}

	Car(const Car &copyClass) {
		cout << "Copied Class " << copyClass.carName << endl;
	}

	~Car() {
		cout << this->carName << " is closed" << endl;
	}

	void setName(string carName) {
		this->carName = carName;
	}

	void soud() const {
		cout << this->carName << " say : " << " huvvvn..." << endl;
	}
};

// First Case
Car createCar() {
	Car newCar;
	newCar.setName("BlackPanter");

	return newCar;
}

//-----------------------------------------------------

// Second Case : Pointer
Car *createCar2() {
	Car *newCar = new Car();
	newCar->setName("BlackPanter");

	return newCar;
}

int main() {
	cout << "Return Object Function" << endl; // prints Return Object Function


	Car myCar = createCar();
	cout << "myCar sound : " << endl;
	myCar.soud();

	cout << "Size myCar : " << sizeof(myCar) << endl ; // First Case size : 32

	cout << endl << "======================================" << endl << endl;

	Car *myCar2 = createCar2();
	cout << "myCar2 sound : " << endl;
	myCar2->soud();

	cout << "Size myCar2 : " << sizeof(myCar2) << endl ; // Second Case size : 8

	delete(myCar2);


	cout << endl << "======================================" << endl << endl;

	return 0;
}
