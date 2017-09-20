//============================================================================
// Name        : 17_Pointer.cpp
// Author      : AceL
// Version     :
// Copyright   : Learn C++
// Description : Pointer Example
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Pointer" << endl; // prints Pointer

	// Definition pointer
	int *pointerValue; // definition pointer
	int adress;    // definition variables
	pointerValue = &adress; // assignment address "& : address"

	cout << "Pointer Name : (pointerValue) : " << pointerValue << endl; // Pointer Variables Name
	cout << "Pointer Value : (*pointerValue) : " << *pointerValue << endl; // Pointer in Value
	cout << "Pointer Ram Address : (&pointerValue) : " << &pointerValue << endl; // Pointer Ram Address

	cout << "-------------------------------" << endl << endl;
	// Pointer Assignment Value
	*pointerValue = 7;
	cout << "Assignment Later - Pointer Name : (pointerValue) : "
			<< pointerValue << endl; // Pointer Variables Name
	cout << "Assignment Later - Pointer Value : (*pointerValue) : "
			<< *pointerValue << endl; // Pointer in Value
	cout << "Assignment Later - Pointer Ram Address : (&pointerValue) : "
			<< &pointerValue << endl; // Pointer Ram Address

	cout << "-------------------------------" << endl << endl;
	cout << "-------------------------------" << endl << endl;

	adress = 15;
	int *pointerValue2;
	pointerValue2 = &adress;

	cout << "Pointer Name : (pointerValue2) : " << pointerValue2 << endl; // Pointer Variables Name
	cout << "Pointer Value : (*pointerValue2) : " << *pointerValue2 << endl; // Pointer in Value
	cout << "Pointer Ram Address : (&pointerValue2) : " << &pointerValue2
			<< endl; // Pointer Ram Address

	cout << "-------------------------------" << endl << endl;

	// if the data of the address variable changes, it changes in two pointers. Because two pointers are in the same address
	cout << "Pointer Name : (pointerValue) : " << pointerValue << endl; // Pointer Variables Name
	cout << "Pointer Value : (*pointerValue) : " << *pointerValue << endl; // Pointer in Value
	cout << "Pointer Ram Address : (&pointerValue) : " << &pointerValue << endl; // Pointer Ram Address

	return 0;
}
