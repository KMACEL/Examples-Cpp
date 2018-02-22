//============================================================================
// Name        : 12_Switch.cpp
// Author      : AceL
// Version     :
// Copyright   : Learn C++
// Description : Switch : Codified expressions
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Switch" << endl; // prints Switch

    int x = 3;

       switch (x) {
       case 0:
               cout << 0;
               break;
       case 1:
               cout << 1;
               break;
       case 3:
               cout << 3;
               break;
       default :
               cout << "huhu";
       }

	return 0;
}
