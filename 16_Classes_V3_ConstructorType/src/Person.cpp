/*
 * Person.cpp
 *
 *  Created on: Sep 19, 2017
 *      Author: acel
 */

#include "Person.h"

Person::Person() {
	cout << "Entry Person Class" << endl;
	this->personName = "";
	this->personAge = 0;
	this->personCountry = "";

}

Person::Person(string personName) {
	cout << "Entry Person Class" <<  endl;
	this->personName = personName;
	this->personAge = 0;
	this->personCountry = "";
}

Person::~Person() {
	cout << "Finish Person Class : " << this->personName << endl << endl;
}

string Person::personInformation() {
	stringstream ss;
	ss << "\nName : " << this->personName << "\n" << "Age : " << this->personAge << "\n"
			<< "Country : " << this->personCountry << "\n";
	return ss.str();
}
