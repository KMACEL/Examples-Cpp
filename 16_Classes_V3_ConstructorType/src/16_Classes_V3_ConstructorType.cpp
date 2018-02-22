//============================================================================
// Name        : 15_Classes_V3.cpp
// Author      : AceL
// Version     :
// Copyright   : Learn C++
// Description : Classes Constructor Example + <sstream> library
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {
	cout << "Classes" << endl; // prints Classes

	Person person1;
	cout << "Person 1 : 0 Constructor :: " << person1.personInformation()<< endl;

	Person person2("Mert");
	cout << "Person 2 : 1 Constructor : Only Name :: "
			<< person2.personInformation() << endl;

	{
		Person person3("Göktürk", 23);
		cout << "Person 3 : 2 Constructor : Name - Age :: "
				<< person3.personInformation() << endl;
	}

	Person person4("Sarp", 27, "Türkiye");
	cout << "Person 4 : 3 Constructor : Name - Age - Country :: "
			<< person4.personInformation() << endl;

	return 0;
}
