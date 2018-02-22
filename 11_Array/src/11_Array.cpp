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

	//===========================================================================
	int values[5];
	values[0] = 5;
	cout << "Step 1 Values : " << values << endl; // Name Array, Not Value
	//===========================================================================

	//===========================================================================
	int valuesX[] = { 5, 3, 1 };
	cout << "Step 2 Values : " << valuesX << endl; // Name Array, Not Value
	//===========================================================================

	//===========================================================================
	int valueXY[2][2];
	valueXY[0][0] = 5;
	cout << "Step 3 Values : " << valueXY << endl; // Name Array, Not Value
	cout << "Step 3 Size OF : " << sizeof(valueXY) << endl;
	//===========================================================================

	//===========================================================================
	int valueXY2[2][2] = { { 0, 1 }, { 4, 7 } };
	cout << "Step 4 Values : " << valueXY2 << endl; // Name Array, Not Value
	cout << "Step 4 Size OF : " << sizeof(valueXY2) << endl;
	//===========================================================================

	return 0;
}
