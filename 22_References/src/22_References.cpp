//============================================================================
// Name        : 22_References.cpp
// Author      : AceL
// Version     :
// Copyright   : C++ Example
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "References" << endl; // prints References

	int value1 = 10;
	int value2 = 25;

	cout << "value1 in Value : " << value1 << endl;
	cout << "value2 in Value : " << value2 << endl;

	value1 = value2;
	cout << "(value1 = value2) value1 in Value : " << value1 << endl;
	cout << "(value1 = value2) value2 in Value : " << value2 << endl;

	cout << endl << "======================================" << endl << endl;

	int value3 = 10;
	int *value4 = &value3;

	cout << "value3 in Value : " << value3 << endl;
	cout << "value4 in Value : " << *value4 << endl;

	*value4 = 7;
	cout << "(*value4 = 7) value1 in Value : " << value3 << endl;
	cout << "(*value4 = 7) value2 in Value : " << *value4 << endl;

	cout << endl << "======================================" << endl << endl;

	int value5 = 22;
	int &value6 = value5;

	cout << "value5 in Value : " << value5 << endl;
	cout << "value6 in Value : " << value6 << endl;

	value6=17;

	cout << "value5 in Value : " << value5 << endl;
	cout << "value6 in Value : " << value6 << endl;

	return 0;
}
