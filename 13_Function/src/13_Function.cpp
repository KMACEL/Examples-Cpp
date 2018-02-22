//============================================================================
// Name        : 13_Function.cpp
// Author      : AceL
// Version     :
// Copyright   : Learn C++
// Description : Functions
//============================================================================

#include <iostream>
#include "utils.h"
using namespace std;

int main() {
	cout << "Function" << endl; // prints Function

	cout << "Function" << endl; // prints Function
	calculate();
	calculate();
	cout << returnValue() << endl;
	cout << pluses(6, 5) << endl;

	return 0;
}

void calculate(void) {
	cout << "calculate haha" << endl;
}

int returnValue(void) {
	return 5;
}

int pluses(int a, int b) {
	return a + b;
}
