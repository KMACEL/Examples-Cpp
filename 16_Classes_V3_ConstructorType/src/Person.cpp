/*
 * Person.cpp
 *
 *  Created on: Sep 19, 2017
 *      Author: acel
 */

#include "Person.h"

Person::Person() {
	cout << "Entry Person Class" << endl;
	this->personNameVar = "";
	this->personAgeVar = 0;
	this->personCountryVar = "";

}

Person::Person(string personName) {
	cout << "Entry Person Class" <<  endl;
	this->personNameVar = personName;
	this->personAgeVar = 0;
	this->personCountryVar = "";
}

Person::~Person() {
	cout << "Finish Person Class : " << this->personNameVar << endl << endl;
}

string Person::personInformation() {
	stringstream ss;
	ss << "\nName : " << this->personNameVar << "\n" << "Age : " << this->personAgeVar << "\n"
			<< "Country : " << this->personCountryVar << "\n";
	return ss.str();
}
