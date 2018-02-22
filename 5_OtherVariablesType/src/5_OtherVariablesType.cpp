//============================================================================
// Name        : 5_OtherVariablesType.cpp
// Author      : AceL
// Version     :
// Copyright   : Learn C++
// Description : Variables Type Example
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	cout << "Other Variables Type" << endl; // prints Other Variables   Type

	//===========================================================================
	// Integer : Used for integer numeric expressions
	int integerVariables = 250; // Assigning when defining
	int integerVariablesDef;	// Assignment after identification
	integerVariablesDef = 547;

	cout << "Integer Assigning when defining : " << integerVariables << endl;
	cout << "Integer Assignment after identification : " << integerVariablesDef << endl;
	//===========================================================================

	//===========================================================================
	// Float : float is used for decimal numbers
	float floatVariables = 25.4;
	cout << "Float : " << floatVariables << endl; // 1 digit after the conviction
	//===========================================================================

	//===========================================================================
	//iomanip lilbrary : float specifies the display format of the values
	cout << "Fixed : " << fixed << floatVariables << endl; // full value after the conviction
	cout << "Scientific : " << scientific << floatVariables << endl; // It shows scientifically
	cout << "Setprecision : " << setprecision(20) << fixed << floatVariables << endl; //up to the specified number of digits
	//===========================================================================

	//===========================================================================
	// Double : float gets twice as much value as possible value capacity
	double doubleVariable = 36.4;
	cout << "Double : " << doubleVariable << endl;
	//===========================================================================

	//===========================================================================
	// Long Double : doubles the value of a double
	long double longDoubleVariable = 36.4;
	cout << "Long Double : " << longDoubleVariable << endl;
	//===========================================================================

	//===========================================================================
	// Boolean : get true or false value
	bool boolVariable = true;
	cout << "Boolean : " << boolVariable << endl;
	//===========================================================================

	//===========================================================================
	// Char : take one character
	char charVariable = 70; // ASCII Character
	char charValue = 'A';
	cout << "Char : " << charVariable << endl;
	cout << "Char : " << charValue << endl;
	cout << "Char : " << int(charValue) << endl;
	//===========================================================================
	return 0;
}
