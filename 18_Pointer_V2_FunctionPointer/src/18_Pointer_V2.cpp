//============================================================================
// Name        : 18_Pointer_V2_FunctionPointer.cpp
// Author      : AceL
// Version     :
// Copyright   : Learn C++
// Description : Pointer Function Example
//============================================================================

#include <iostream>
using namespace std;

void notPointer(int value);
void pointer(int *value);
void address(int &value);

int main() {
	cout << "Pointer" << endl; // prints Pointer

	int valueTest = 15;
	cout << "valueTest Value : " << valueTest << endl;
	cout << "valueTest, Values Ram Address : " << &valueTest << endl;

	cout << endl << "======================================" << endl << endl;

	cout << endl << "======================================" << endl << endl;

	notPointer(valueTest);
	cout << "notPointer Later : " << valueTest << endl;

	cout << endl << "======================================" << endl << endl;

	pointer(&valueTest);
	cout << "pointer function Later : " << valueTest << endl;

	cout << endl << "======================================" << endl << endl;

	address(valueTest);
	cout << "pointer function Later : " << valueTest << endl;

	return 0;
}

void notPointer(int value) {
	cout << "Not Pointer Value  : (value) : " << value << endl;
	cout << "Not Pointer Value Address : (&value) : " << &value << endl;
	cout << "--------------------------------------------------" << endl;
	value = 55;

}

void pointer(int *value) {
	cout << "pointer function Value  : (*value) : " << *value << endl;
	cout << "pointer function Value Address : (&value) : " << &value << endl;
	cout
			<< "pointer function get Value Ram Address (valueTestAddress): (value) : "
			<< value << endl;
	cout << "--------------------------------------------------" << endl;
	*value = 77;
}

void address(int &value) {
	cout << "Not Pointer Value  : (value) : " << value << endl;
	cout << "Not Pointer Value Address : (&value) : " << &value << endl;
	cout << "--------------------------------------------------" << endl;
	value = 88;
}
