//============================================================================
// Name        : 33_StaticKeyword.cpp
// Author      : AceL
// Version     :
// Copyright   : C++ Example
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test {
public:
	static int const MAX_VALUE = 105;

private:
	int id;
	static int count;

public:
	Test() {
		id = ++count;
	}

	int getId() {
		return id;
	}

	static void getInfo() {
		cout << "Total count : " << count << endl;
	}
};

int Test::count = 0;

int main() {
	cout << "Static Keyword" << endl; // prints Static Keyword

	cout << "Max Value : " << Test::MAX_VALUE << endl;

	cout << endl << "======================================" << endl << endl;

	Test test1;
	cout << "Test 1 : " << test1.getId() << endl;

	Test test2;
	cout << "Test 2 : " << test2.getId() << endl;

	Test test3;
	cout << "Test 3 : " << test3.getId() << endl;

	cout << endl << "======================================" << endl << endl;

	Test::getInfo();
	return 0;
}
