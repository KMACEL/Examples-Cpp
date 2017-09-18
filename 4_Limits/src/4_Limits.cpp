//============================================================================
// Name        : 4_Limits.cpp
// Author      : AceL
// Version     :
// Copyright   : Learn C++
// Description : Limits Library Example
//============================================================================

#include <iostream>
#include <limits.h>
// Variables Limits Library
using namespace std;

int main() {
	cout << "Limits : " << endl;
	cout << "Max Int : " << INT_MIN << endl;
	cout << "Min Int : " << INT_MIN << endl;
	cout << "Value Size (byte type): " << sizeof(5212) << endl;

	cout << "Integer (byte type) : " << sizeof(int) << endl;
	cout << "Float (byte type) :" << sizeof(float) << endl;
// sizeof : gives the value of variables from byte type
	return 0;
}
