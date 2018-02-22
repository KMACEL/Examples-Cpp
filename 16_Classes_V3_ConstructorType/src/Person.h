/*
 * Person.h
 *
 *  Created on: Sep 19, 2017
 *      Author: acel
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <sstream>

using namespace std;

class Person {
private :
	string personNameVar;
	int personAgeVar;
	string personCountryVar;

public:
	Person(); // constructor type 1
	Person(string personName);// constructor type 2

	Person(string personName, int personAge){// constructor type 3
		this->personNameVar= personName;
		this->personAgeVar=personAge;
		this->personCountryVar="";
	};

	// constructor type 4
	Person(string personName, int personAge, string country):personNameVar(personName),personAgeVar(personAge),personCountryVar(country){};

	string personInformation();

	virtual ~Person();
};

#endif /* PERSON_H_ */
