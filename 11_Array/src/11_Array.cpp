//============================================================================
// Name        : 11_Array.cpp
// Author      : AceL
// Version     :
// Copyright   : Learn C++
// Description : Array Variables Type
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Array" << endl; // prints Array

	int values[5];
	values[0] = 5;

	cout << values << endl;

	int valuesX[] = { 5, 3, 1 };

	int valueXY[2][2];

	valueXY[0][0] = 5;

	int valueXY2[2][2] = { { 0, 1 }, { 4, 7 } };

	cout << sizeof(valueXY) << endl;
	cout << sizeof(valueXY2) << endl;

	return 0;
}
