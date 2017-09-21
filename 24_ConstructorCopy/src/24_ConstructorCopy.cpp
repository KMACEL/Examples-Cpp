//============================================================================
// Name        : 24_ConstructorCopy.cpp
// Author      : AceL
// Version     :
// Copyright   : C++ Example
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Bear {
private:
	string bearName;

public:
	Bear() {
		cout << "Bear Class is Created..." << endl;
	}


	Bear(const Bear &otherClass) :
			bearName(otherClass.bearName) {

		otherClass.bearSpeak();
		// if the bearSpeak class is not const, it will not work.
		// because Bear copy const

		cout << "Bear Class is copied " << this->bearName << endl;
	}


	void setBearName(string bearName) {
		this->bearName = bearName;
	}


	void bearSpeak() const {
		cout << "Say : " << bearName << " is Hurraaaa ..." << endl;
	}

};
int main() {
	cout << "Constructor Copy" << endl; // prints Constructor Copy

	Bear bear1;
	bear1.setBearName("Brown");

	Bear bear2 = bear1;
	cout << "bear2 First Speak copy later : " << flush;
	bear2.bearSpeak();

	cout << "bear2.setBearName Black : " << endl;
	bear2.setBearName("Black");

	cout << "bear1 Speak : " << flush;
	bear1.bearSpeak();

	cout << "bear2 Speak : " << flush;
	bear2.bearSpeak();

	Bear bear3(bear1);
	cout << "bear3 Speak : " << flush;
	bear3.bearSpeak();
	return 0;
}
