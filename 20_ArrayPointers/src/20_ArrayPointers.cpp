//============================================================================
// Name        : 20_ArrayPointers.cpp
// Author      : AceL
// Version     :
// Copyright   : Learn C++
// Description : Array Pointer
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Array & Pointers" << endl; // prints Array & Pointers

	cout << "Array definitions : text " << endl;
	string text[] = { "One", "Two", "Three" };

	cout << "Size of text array : sizeof(text) : " << sizeof(text) << endl;
	cout << "Size of string : sizeof(string) : " << sizeof(string) << endl;
	cout << "sizeof(text)/sizeof(string) : " << sizeof(text) / sizeof(string)
			<< endl; // This get Item Value

	cout << endl << "======================================" << endl << endl;

	cout << "For Items : text2 " << endl;
	string text2[] = { "One", "Two", "Three" };
	for (size_t i = 0; i < sizeof(text2) / sizeof(string); i++) {
		cout << text[i] << endl;
	}

	cout << endl << "======================================" << endl << endl;

	cout << "Pointer Text : text3 - pointerText " << endl;
	string text3[] = { "One", "Two", "Three" };
	string *pointerText = text3;

	for (size_t i = 0; i < sizeof(text3) / sizeof(string); i++) {
		cout << pointerText[i] << endl;
	}

	cout << endl << "======================================" << endl << endl;

	cout << "Pointer Variable Text : text4 -pointerText2 " << endl;
	string text4[] = { "One", "Two", "Three" };
	string *pointerText2 = text4;

	for (size_t i = 0; i < sizeof(text4) / sizeof(string); i++) {
		cout << *pointerText2 << endl;
	}

	cout << endl << "======================================" << endl << endl;

	cout << "Pointer Variable Next Value : text5 - pointerText3 " << endl;
	string text5[] = { "One", "Two", "Three" };
	string *pointerText3 = text5;

	for (size_t i = 0; i < sizeof(text5) / sizeof(string); i++) {
		cout << *pointerText3 << endl;
		pointerText3++;
	}

	cout << endl << "======================================" << endl << endl;

	cout << "Pointer Variable Next Value 2 : text6 - pointerText4 " << endl;
	string text6[] = { "One", "Two", "Three" };
	string *pointerText4 = text6;

	for (size_t i = 0; i < sizeof(text6) / sizeof(string);
			i++, pointerText4++) {
		cout << *pointerText4 << endl;
	}

	cout << endl << "======================================" << endl << endl;

	cout << "Pointer Variable Next Value 3 : text7 - pointerText5 " << endl;
	string text7[] = { "One", "Two", "Three" };
	string *pointerText5 = text7;
	string *pointerArrayEnd = &text7[sizeof(text) / sizeof(string) - 1];

	while (true) {
		cout << *pointerText5 << endl;

		if (pointerText5 == pointerArrayEnd) {
			break;
		}
		pointerText5++;

	}

	cout << endl << "======================================" << endl << endl;

	const int INITEMS = 3;
	cout << "Constant Items : text8 - pointerText6  - pointerArrayEnd2" << endl;
	string text8[INITEMS] = { "One", "Two", "Three" };
	string *pointerText6;
	pointerText6 = &text8[0];

	string *pointerArrayEnd2 = &text8[INITEMS];

	while (pointerText6 != pointerArrayEnd2) {
		cout << *pointerText6 << endl;

		pointerText6++;
	}

	return 0;
}
