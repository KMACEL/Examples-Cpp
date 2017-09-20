//============================================================================
// Name        : 23_Const.cpp
// Author      : AceL
// Version     :
// Copyright   : C++ Example
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Human {
private:
	string humanName;

public:
	void setHumanName (string humanName){this->humanName=humanName;};
	void speakHuman () const {cout << "Hello. My name is " << this->humanName << endl;};
};

int main() {

	// ***Retry look constant later***

	cout << "Constant" << endl; // prints Constant

	Human human1;
	human1.setHumanName("Mert");

	Human human2;
	human2.setHumanName("Sebehattin");

	human1.speakHuman();
	human2.speakHuman();
	return 0;
}
