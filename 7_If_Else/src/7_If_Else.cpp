//============================================================================
// Name        : 7_If_Else.cpp
// Author      : AceL
// Version     :
// Copyright   : Learn C++
// Description : If - Else : Codified expressions
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "If - Elese" << endl; // prints If - Elese
	cout << "Please Entry Username : ";
	string input;
	cin >> input;

	if (input == "Mert") {
		cout << "Welcome King Mert";
	} else {
		cout << "Shut Down Stupid";
	}

	return 0;
}

/*
 * ==							equal
 * <							Small
 * >							Big
 * !							Not
 * &&							And
 * ||							OR
 
 * bool = 5==4
 */
