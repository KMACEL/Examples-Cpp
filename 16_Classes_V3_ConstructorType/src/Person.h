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
	string personName;
	int personAge;
	string personCountry;

public:
	Person(); // constructor type 1
	Person(string personName);// constructor type 2
	Person(string personName, int personAge){// constructor type 3
		this->personName= personName;
		this->personAge=personAge;
		this->personCountry="";
	};

	// constructor type 4
	Person(string personName, int personAge, string country): personName(personName),personAge(personAge),personCountry(country){};
	string personInformation();
	virtual ~Person();
};

#endif /* PERSON_H_ */
