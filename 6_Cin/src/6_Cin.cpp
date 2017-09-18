//============================================================================
// Name        : 6_Cin.cpp
// Author      : AceL
// Version     :
// Copyright   : Learn C++
// Description : Cin: Terminal Input
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Cin : Input Terminal" << endl; // prints Cin : Input Terminal

	cout << "Please Entry Username : ";

	string input; // input variables is string type
	cin >> input; // input terminal

	cout << "Get Value : " << input; // output terminal

	return 0;
}
