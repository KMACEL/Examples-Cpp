//============================================================================
// Name        : 21_ReversingString.cpp
// Author      : AceL
// Version     :
// Copyright   : C++ Example
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Reversing String" << endl; // prints Reversing String

	char text[] = "Hello AceL";
	int textSize = sizeof(text) - 1;

	cout << "text Value : " << text << endl;
	cout << "textSize in Value : " << textSize << endl;

	cout << endl << "---------------------------------" << endl;
	char *pointerStart = text;
	char *pointerEnd = text + textSize - 1;

	cout << endl << "---------------------------------" << endl;

	cout << "pointerStart : " << *pointerStart << endl;
	cout << "pointerEnd : " << *pointerEnd << endl;

	cout << endl << "---------------------------------" << endl;

	int i =0;
	while (pointerStart < pointerEnd) {
		i++;

		char save = *pointerStart;
		*pointerStart = *pointerEnd;
		*pointerEnd = save;

		cout << "step : " << i << endl;
		cout << "save Value : " << save << endl;
		cout << "pointerStart Value : " << *pointerStart << endl;
		cout << "pointerEnd Value : " << *pointerEnd << endl;

		pointerStart++;
		pointerEnd--;

		cout << "step : " << i << endl;
		cout << "save Value : " << save << endl;
		cout << "pointerStart++ Value : " << *pointerStart << endl;
		cout << "pointerEnd-- Value : " << *pointerEnd << endl;

		cout << endl << "---------------------------------" << endl;

	}
	cout << "Reverse String : " << text << endl;

	cout << endl << "======================================" << endl << endl;

	return 0;
}
