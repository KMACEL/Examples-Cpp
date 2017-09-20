//============================================================================
// Name        : 19_CharArray.cpp
// Author      : AceL
// Version     :
// Copyright   : Learn C++
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "CharArray" << endl; // prints CharArray

	char text[] = { 'H', 'E', 'L', 'L', 'O' }; // Output is "HELLO"
	cout << text << endl;

	cout << endl <<"======================================" << endl << endl ;


	char text2[] = { 'H', 'E', 'L', 'L', 'O', 0 };
	cout << text2 << endl;

	cout << endl <<"======================================" << endl << endl ;


	char text3[] = "Hello Word";
	cout << text3 << endl;

	cout << endl <<"======================================" << endl << endl ;


	char text4[] = "Hello Word, How Are You";
	for (size_t i = 0; i < sizeof(text4); i++) {
		cout << i << " : " << text4[i] << endl;
	}

	cout << endl <<"======================================" << endl << endl ;


	char text5[] = "My Name is Mert!";
	int j = 0;
	while (true) {
		if (text5[j] == 0) {
			break;
		}
		cout << j << " : " << text5[j] << endl;
		j++;
	}

	return 0;
}
