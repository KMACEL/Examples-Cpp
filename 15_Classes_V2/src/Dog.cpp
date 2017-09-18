/*
 * Dog.cpp
 *
 *  Created on: Sep 19, 2017
 *      Author: acel
 */

#include "Dog.h"

using namespace std;

Dog::Dog() {
	cout << "Begin Dog" << endl;
	test = true;

}

Dog::~Dog() {
	cout << "End Dog" << endl;
}

void Dog::sound() {
	cout << "Huv Hav" << endl;
}

