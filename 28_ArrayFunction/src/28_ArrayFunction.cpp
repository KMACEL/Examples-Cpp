//============================================================================
// Name        : 28_ArrayFunction.cpp
// Author      : AceL
// Version     :
// Copyright   : C++ Example
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void showArray(int arrayItems, string textArray[]);
void showArray2(int arrayItems, string *textArray);
void showArray3(string (&textArray)[4]);

int main() {
	cout << "Array and Function" << endl; // prints Array and Function

	string text[] = { "one", "two", "three", "four" };

	showArray(sizeof(text), text);

	cout << endl << "======================================" << endl << endl;

	showArray2(sizeof(text), text);

	cout << endl << "======================================" << endl << endl;

	showArray3(text);

	cout << endl << "======================================" << endl << endl;

	return 0;
}

//--------------------------------------------------------
//--------------------------------------------------------

void showArray(int arrayItems, string textArray[]) {
	cout << "showArray" << endl;
	int itemCount = arrayItems / sizeof(string);
	for (int i = 0; i < itemCount; i++) {
		cout << i + 1 << " : " << textArray[i] << endl;
	}
}

//--------------------------------------------------------

void showArray2(int arrayItems, string *textArray) {
	cout << "showArray2" << endl;
	int itemCount = arrayItems / sizeof(string);
	for (int i = 0; i < itemCount; i++, textArray++) {
		cout << i + 1 << " : " << *textArray << endl;
	}
}

//--------------------------------------------------------

void showArray3(string (&textArray)[4]) {
	cout << "showArray3" << endl;
	int itemCount = sizeof(textArray) / sizeof(string);
	for (int i = 0; i < itemCount; i++) {
		cout << i + 1 << " : " << textArray[i] << endl;
	}
}

//--------------------------------------------------------

