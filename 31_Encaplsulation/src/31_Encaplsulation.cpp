//============================================================================
// Name        : 31_Encaplsulation.cpp
// Author      : AceL
// Version     :
// Copyright   : C++ Example
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Bear {
private:
	string name;

private:
	string getName() {
		return name;
	}

public:
	Bear(string name) :
			name(name) {
	}
	void info() {
		cout << "My name is : " << getName() << endl;
	}
};

int main() {
	cout << "Encaplsulation" << endl; // prints Encaplsulation

	Bear bear("Brownn");
	bear.info();

	return 0;
}
